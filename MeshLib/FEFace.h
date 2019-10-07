#pragma once
#include "FEItem.h"
#include "FEEdge.h"
#include "MathLib/math3d.h"

//-----------------------------------------------------------------------------
// Face shapes
enum FEFaceShape
{
	FE_FACE_INVALID_SHAPE,
	FE_FACE_TRI,		// triangle
	FE_FACE_QUAD		// quadrilateral
};

//-----------------------------------------------------------------------------
// Different face types
// (NOTE: Do not change the order of these values)
enum FEFaceType
{
	FE_FACE_INVALID_TYPE,
	FE_FACE_TRI3,
	FE_FACE_QUAD4,
	FE_FACE_TRI6,
	FE_FACE_TRI7,
	FE_FACE_QUAD8,
	FE_FACE_QUAD9,
	FE_FACE_TRI10
};

//-----------------------------------------------------------------------------
// FEFace class stores face data. 
// A face can either have 3, 4, 6, 7, 8, 9 or 10 nodes. 
//  - 3  : linear triangle
//  - 6,7: quadratic triangle
//  - 10 : cubic triangle
//  - 4  : linear quad
//  - 8,9: quadratic quad
//
//   4       7       3      3            3
//   +-------o-------+      +            +
//   |               |      |\           | \
//   |               |      | \         9o    o7
//  8o       x9      o6    6o  o5        | x10 \
//   |               |      | x7 \       8o     o6 
//   |               |      |     \      |       \
//   +-------o-------+      +--o--+      +--o--o--+
//   1       5       2      1  4  2      1  4  5  2
//
// Note that for the first three nodes for a triangle and the first four nodes
// of a quad are always the corner nodes.
//
class FEFace : public FEItem
{
public:
	enum { MAX_NODES = 10 };

public:
	//! constructor
	FEFace();

	//! comparison operator
	bool operator == (const FEFace& f) const;

	//! get the type
	int Type() const { return m_type; }

	//! set the type
	void SetType(FEFaceType type);

	//! get the shape
	int Shape() const;

	//! return number of nodes
	int Nodes() const;

	//! return number of edges
	int Edges() const;

	//! get the edge node numbers
	int GetEdgeNodes(int i, int* n) const;

	//! return an edge
	FEEdge GetEdge(int i) const;

	//! See if this face has an edge
	bool HasEdge(int n1, int n2);

	//! See if this face has node with ID i
	bool HasNode(int i);

	//! Fine the array index of node with ID i
	int FindNode(int i);

	//! Is this face internal or external
	bool IsExternal() { return (m_elem[1] == -1); }

	//! See if a node list is an edge
	int FindEdge(const FEEdge& edge);

public:
	// evaluate shape function at iso-parameteric point (r,s)
	void shape(double* H, double r, double s);

    // evaluate derivatives of shape function at iso-parameteric point (r,s)
    void shape_deriv(double* Hr, double* Hs, double r, double s);

	// evaluate a scalar expression at iso-points (r,s)
	double eval(double* d, double r, double s);

	// evaluate a vector expression at iso-points (r,s)
	vec3f eval(vec3f* v, double r, double s);

    // evaluate the derivative of a scalar expression at iso-points (r,s)
    double eval_deriv1(double* d, double r, double s);
    double eval_deriv2(double* d, double r, double s);

    // evaluate the derivative of a vector expression at iso-points (r,s)
    vec3d eval_deriv1(vec3d* v, double r, double s);
    vec3d eval_deriv2(vec3d* v, double r, double s);
    
    // evaluate gauss integration points and weights
    int gauss(double* gr, double* gs, double* gw);
    
public:
	int	m_type;			//!< face type
	int	n[MAX_NODES];	//!< nodal ID's

	int		m_nbr[4];	//!< neighbour faces

	vec3f	m_fn;				//!< face normal
	vec3f	m_nn[MAX_NODES];	//!< node normals
	int		m_sid;				//!< smoothing ID
	int		m_mat;				// material id (TODO: only used in post. Can be removed?)

	// TODO: move texture coordinates elsewhere
	float	m_tex[MAX_NODES];	// nodal 1D-texture coordinates
	float	m_texe;				// element texture coordinate

	int	m_elem[2];	//!< the elements to which this face belongs
	int	m_edge[4];	//!< the edges (interior faces don't have edges!)
};
