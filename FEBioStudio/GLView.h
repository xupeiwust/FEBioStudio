/*This file is part of the FEBio Studio source code and is licensed under the MIT license
listed below.

See Copyright-FEBio-Studio.txt for details.

Copyright (c) 2021 University of Utah, The Trustees of Columbia University in
the City of New York, and others.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.*/

#pragma once
#include <QOpenGLWidget>
#include <QNativeGestureEvent>
#include <GLLib/GLCamera.h>
#include "CommandManager.h"
#include "GManipulator.h"
#include "GTriad.h"
#include "GGrid.h"
#include <MeshLib/Intersect.h>
#include <GLWLib/GLWidgetManager.h>
#include <PostLib/Animation.h>
#include <GLLib/GLContext.h>
#include <GLLib/GLViewSettings.h>
#include "GLViewSelector.h"

class CMainWindow;
class CGLDocument;
class GDecoration;
class CGView;
class FSModel;
class CGLView;

// coordinate system modes
#define COORD_GLOBAL	0
#define COORD_LOCAL		1
#define COORD_SCREEN	2

//-----------------------------------------------------------------------------
// Video recording modes
enum VIDEO_MODE {
	VIDEO_RECORDING,
	VIDEO_PAUSED,
	VIDEO_STOPPED
};

// preset views
enum View_Mode {
	VIEW_USER,
	VIEW_TOP,
	VIEW_BOTTOM,
	VIEW_LEFT,
	VIEW_RIGHT,
	VIEW_FRONT,
	VIEW_BACK,
    VIEW_ISOMETRIC
};

// view conventions
enum View_Convention {
    CONV_FR_XZ,
    CONV_FR_XY,
    CONV_US_XY
};

// snap modes
enum Snap_Mode
{
	SNAP_NONE,
	SNAP_GRID
};

enum Planecut_Mode
{
	PLANECUT,
	HIDE_ELEMENTS
};

//-----------------------------------------------------------------------------
// tag structure
struct GLTAG
{
	char	sztag[64];	// name of tag
	float	wx, wy;		// window coordinates for tag
	vec3d	r;			// world coordinates of tag
	GLColor	c;			// tag color
};

//===================================================================
class CGLView : public QOpenGLWidget
{
	Q_OBJECT

public:
	CGLView(CMainWindow* pwnd, QWidget* parent = 0);
	~CGLView();

public:
	double GetGridScale() { return m_grid.GetScale(); }
	quatd GetGridOrientation() { return m_grid.m_q; }

	CGLDocument* GetDocument();

	GObject* GetActiveObject();

	void Reset();

	void UpdateCamera(bool hitCameraTarget);

	void HighlightNode(int x, int y);
	void HighlightEdge(int x, int y);

	bool SelectPivot(int x, int y);

	void SetCoordinateSystem(int nmode);
	
	void UndoViewChange();

	void RedoViewChange();

	void ClearCommandStack();

	void RenderTooltip(int x, int y);

	vec3d PickPoint(int x, int y, bool* success = 0);

	void SetViewMode(View_Mode n);
	View_Mode GetViewMode() { return m_nview; }

	void TogglePerspective(bool b);
	void ToggleDisplayNormals();

	void GetViewport(int vp[4])
	{
		vp[0] = m_viewport[0];
		vp[1] = m_viewport[1];
		vp[2] = m_viewport[2];
		vp[3] = m_viewport[3];
	}

	// --- view settings ---
	GLViewSettings& GetViewSettings() { return m_view; }

	void ShowMeshData(bool b);

	CGView* GetView();
	CGLCamera* GetCamera();

	void Set3DCursor(const vec3d& r) { m_view.m_pos3d = r; }
	vec3d Get3DCursor() const { return m_view.m_pos3d; }

	std::string GetOGLVersionString();

	void ToggleFPS();

protected:
	void mousePressEvent  (QMouseEvent* ev);
	void mouseMoveEvent   (QMouseEvent* ev);
	void mouseReleaseEvent(QMouseEvent* ev);
	void mouseDoubleClickEvent(QMouseEvent* ev);
	void wheelEvent       (QWheelEvent* ev);
    bool gestureEvent     (QNativeGestureEvent* ev);
    bool event            (QEvent* event);

signals:
	void pointPicked(const vec3d& p);
	void selectionChanged();

public:
	//! Zoom out on current selection
	void ZoomSelection(bool forceZoom = true);

	//! zoom in on a box
	void ZoomTo(const BOX& box);

	//! Zoom in on an object
	void ZoomToObject(GObject* po);

	// zoom to the models extents
	void ZoomExtents(bool banimate = true);

	// prep the GL view for rendering
	void PrepScene();

	// setup the projection matrix
	void SetupProjection();

	// get device pixel ration
	double GetDevicePixelRatio();

	// position the camera
	void PositionCamera();

	// toggle track selection feature
	void TrackSelection(bool b);

	// render functions
public:
	// other rendering functions
	void RenderBackground();

	void RenderRubberBand();
	void RenderBrush();
	void RenderPivot(bool bpick = false);

	void Render3DCursor(const vec3d& r, double R);
	void RenderTags();
	void RenderTags(std::vector<GLTAG>& tags);
	void RenderImageData();
	void RenderTrack();


	bool TrackModeActive();

	void ScreenToView(int x, int y, double& fx, double& fy);

	void showSafeFrame(bool b);

	vec3d WorldToPlane(vec3d r);

	vec3d GetPickPosition();

	vec3d GetPivotPosition();
	quatd GetPivotRotation();

	void SetPivot(const vec3d& r);

	bool GetPivotMode() { return m_bpivot; }
	void SetPivotMode(bool b) { m_bpivot = b; }

	void changeViewMode(View_Mode vm);

	void ShowContextMenu(bool b);

	CGLWidgetManager* GetGLWidgetManager() { return m_Widget; }
	void AllocateDefaultWidgets(bool b);

	int GetMeshMode();

protected:
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();

private:
	void SetSnapMode(Snap_Mode snap) { m_nsnap = snap; }
	Snap_Mode GetSnapMode() { return m_nsnap; }

	// convert from device pixel to physical pixel
	QPoint DeviceToPhysical(int x, int y);

public:
	QImage CaptureScreen();

	bool NewAnimation(const char* szfile, CAnimation* panim, GLenum fmt = GL_RGB);
	void StartAnimation();
	void StopAnimation();
	void PauseAnimation();
	void SetVideoFormat(GLenum fmt) { m_videoFormat = fmt; }

	VIDEO_MODE RecordingMode() const;
	bool HasRecording() const;

	void UpdateWidgets(bool bposition = true);

	bool isTitleVisible() const;
	void showTitle(bool b);

	bool isSubtitleVisible() const;
	void showSubtitle(bool b);

	// get/set light position
	vec3f GetLightPosition() { return m_light; }
	void SetLightPosition(vec3f lp) { m_light = lp; }

public:
	void AddDecoration(GDecoration* deco);
	void RemoveDecoration(GDecoration* deco);

	void ShowPlaneCut(bool b);
	bool ShowPlaneCut() const;
	void SetPlaneCut(double d[4]);
	void SetPlaneCutMode(int nmode);
	void UpdatePlaneCut(bool breset = false);

private:
	GMesh* BuildPlaneCut(FSModel& fem);

public:
	void SetColorMap(unsigned int n);

	Post::CColorMap& GetColorMap();

	void PanView(vec3d r);

	void AddRegionPoint(int x, int y);

public:
	void RenderPlaneCut();

	bool ShowPlaneCut();

	GMesh* PlaneCutMesh();

	void DeletePlaneCutMesh();

	int PlaneCutMode();

	double* PlaneCoordinates();

protected:
	void SetTrackingData(int n[3]);

protected slots:
	void repaintEvent();

protected:
	CMainWindow*	m_pWnd;	// parent window

	CBasicCmdManager m_Cmd;	// view command history

	GGrid		m_grid;		// the grid object

	vector<pair<int, int> >		m_pl;
	int			m_x0, m_y0, m_x1, m_y1;
	int			m_xp, m_yp;
	int			m_dxp, m_dyp;
	View_Mode	m_nview;
	Snap_Mode	m_nsnap;

	bool	m_showFPS;

	vec3d	m_rt;	// total translation
	vec3d	m_rg;

	double	m_st;	// total scale
	double	m_sa;	// accumulated scale
	vec3d	m_ds;	// direction of scale

	vec3f	m_light;

	double	m_wt;	// total rotation
	double	m_wa;	// total accumulated rotation

	bool	m_bshift;
	bool	m_bctrl;
	bool	m_bsel;		// selection mode
	bool	m_bextrude;	// extrusion mode

	bool	m_btooltip;	// show tooltips

	int		m_pivot;	// pivot selection mode

public:
	bool	m_bpick;

protected:
	double	m_ox;
	double	m_oy;

	bool	m_bsnap;	// snap to grid

	int		m_coord;	// coordinate system

	bool	m_bpivot;	// user-pivot = true
	vec3d	m_pv;		// pivot point

	// manipulators
	GTranslator		m_Ttor;	//!< the translate manipulator
	GRotator		m_Rtor;	//!< the rotate manipulator
	GScalor			m_Stor;	//!< the scale manipulator

	// triad
	GLBox*			m_ptitle;
	GLBox*			m_psubtitle;
	GLTriad*		m_ptriad;
	GLSafeFrame*	m_pframe;
	GLLegendBar*	m_legend;

	CGLWidgetManager*	m_Widget;
	bool	m_ballocDefaultWidgets;

	bool	m_showContextMenu;

private:
	GLenum	m_videoFormat;

	VIDEO_MODE		m_videoMode;	// the current video mode
	CAnimation*		m_video;		// video object

	// tracking
	bool	m_btrack;
	int		m_ntrack[3];
	mat3d	m_rot0;

	vector<GDecoration*>	m_deco;

public:
	CGLContext	m_rc;

private:
	GLViewSettings	m_view;
	int	m_viewport[4];		//!< store viewport coordinates

	GLViewSelector	m_select;

	CGLCamera	m_oldCam;

	Post::CColorTexture m_colorMap;	// color map used for rendering mesh data

	bool		m_showPlaneCut;
	int			m_planeCutMode;
	double		m_plane[4];
	GMesh*		m_planeCut;

	std::string		m_oglVersionString;
};

bool intersectsRect(const QPoint& p0, const QPoint& p1, const QRect& rt);
void SetModelView(GObject* po);
