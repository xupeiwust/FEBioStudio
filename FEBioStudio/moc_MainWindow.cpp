/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CMainWindow_t {
    QByteArrayData data[160];
    char stringdata0[3881];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMainWindow_t qt_meta_stringdata_CMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CMainWindow"
QT_MOC_LITERAL(1, 12, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(4, 60, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(5, 84, 25), // "on_actionSaveAs_triggered"
QT_MOC_LITERAL(6, 110, 23), // "on_actionInfo_triggered"
QT_MOC_LITERAL(7, 134, 32), // "on_actionImportFEModel_triggered"
QT_MOC_LITERAL(8, 167, 32), // "on_actionExportFEModel_triggered"
QT_MOC_LITERAL(9, 200, 33), // "on_actionImportGeometry_trigg..."
QT_MOC_LITERAL(10, 234, 33), // "on_actionExportGeometry_trigg..."
QT_MOC_LITERAL(11, 268, 30), // "on_actionImportImage_triggered"
QT_MOC_LITERAL(12, 299, 29), // "on_actionConvertFeb_triggered"
QT_MOC_LITERAL(13, 329, 29), // "on_actionConvertGeo_triggered"
QT_MOC_LITERAL(14, 359, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(15, 383, 24), // "on_recentFiles_triggered"
QT_MOC_LITERAL(16, 408, 8), // "QAction*"
QT_MOC_LITERAL(17, 417, 6), // "action"
QT_MOC_LITERAL(18, 424, 26), // "on_recentFEFiles_triggered"
QT_MOC_LITERAL(19, 451, 28), // "on_recentGeomFiles_triggered"
QT_MOC_LITERAL(20, 480, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(21, 504, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(22, 528, 34), // "on_actionInvertSelection_trig..."
QT_MOC_LITERAL(23, 563, 33), // "on_actionClearSelection_trigg..."
QT_MOC_LITERAL(24, 597, 34), // "on_actionDeleteSelection_trig..."
QT_MOC_LITERAL(25, 632, 32), // "on_actionHideSelection_triggered"
QT_MOC_LITERAL(26, 665, 33), // "on_actionHideUnselected_trigg..."
QT_MOC_LITERAL(27, 699, 28), // "on_actionUnhideAll_triggered"
QT_MOC_LITERAL(28, 728, 32), // "on_actionToggleVisible_triggered"
QT_MOC_LITERAL(29, 761, 32), // "on_actionNameSelection_triggered"
QT_MOC_LITERAL(30, 794, 28), // "on_actionTransform_triggered"
QT_MOC_LITERAL(31, 823, 36), // "on_actionCollapseTransform_tr..."
QT_MOC_LITERAL(32, 860, 24), // "on_actionClone_triggered"
QT_MOC_LITERAL(33, 885, 28), // "on_actionCloneGrid_triggered"
QT_MOC_LITERAL(34, 914, 31), // "on_actionCloneRevolve_triggered"
QT_MOC_LITERAL(35, 946, 24), // "on_actionMerge_triggered"
QT_MOC_LITERAL(36, 971, 24), // "on_actionPurge_triggered"
QT_MOC_LITERAL(37, 996, 25), // "on_actionDetach_triggered"
QT_MOC_LITERAL(38, 1022, 26), // "on_actionExtract_triggered"
QT_MOC_LITERAL(39, 1049, 30), // "on_actionEditProject_triggered"
QT_MOC_LITERAL(40, 1080, 24), // "on_actionAddBC_triggered"
QT_MOC_LITERAL(41, 1105, 31), // "on_actionAddNodalLoad_triggered"
QT_MOC_LITERAL(42, 1137, 30), // "on_actionAddSurfLoad_triggered"
QT_MOC_LITERAL(43, 1168, 30), // "on_actionAddBodyLoad_triggered"
QT_MOC_LITERAL(44, 1199, 24), // "on_actionAddIC_triggered"
QT_MOC_LITERAL(45, 1224, 29), // "on_actionAddContact_triggered"
QT_MOC_LITERAL(46, 1254, 37), // "on_actionAddRigidConstraint_t..."
QT_MOC_LITERAL(47, 1292, 36), // "on_actionAddRigidConnector_tr..."
QT_MOC_LITERAL(48, 1329, 30), // "on_actionAddMaterial_triggered"
QT_MOC_LITERAL(49, 1360, 26), // "on_actionAddStep_triggered"
QT_MOC_LITERAL(50, 1387, 30), // "on_actionAddReaction_triggered"
QT_MOC_LITERAL(51, 1418, 30), // "on_actionSoluteTable_triggered"
QT_MOC_LITERAL(52, 1449, 27), // "on_actionSBMTable_triggered"
QT_MOC_LITERAL(53, 1477, 30), // "on_actionCurveEditor_triggered"
QT_MOC_LITERAL(54, 1508, 32), // "on_actionMeshInspector_triggered"
QT_MOC_LITERAL(55, 1541, 38), // "on_actionElasticityConvertor_..."
QT_MOC_LITERAL(56, 1580, 27), // "on_actionFEBioRun_triggered"
QT_MOC_LITERAL(57, 1608, 28), // "on_actionFEBioStop_triggered"
QT_MOC_LITERAL(58, 1637, 32), // "on_actionFEBioOptimize_triggered"
QT_MOC_LITERAL(59, 1670, 26), // "on_actionOptions_triggered"
QT_MOC_LITERAL(60, 1697, 27), // "on_actionPlaneCut_triggered"
QT_MOC_LITERAL(61, 1725, 30), // "on_actionMirrorPlane_triggered"
QT_MOC_LITERAL(62, 1756, 29), // "on_actionVectorPlot_triggered"
QT_MOC_LITERAL(63, 1786, 29), // "on_actionTensorPlot_triggered"
QT_MOC_LITERAL(64, 1816, 33), // "on_actionIsosurfacePlot_trigg..."
QT_MOC_LITERAL(65, 1850, 28), // "on_actionSlicePlot_triggered"
QT_MOC_LITERAL(66, 1879, 34), // "on_actionDisplacementMap_trig..."
QT_MOC_LITERAL(67, 1914, 33), // "on_actionStreamLinePlot_trigg..."
QT_MOC_LITERAL(68, 1948, 35), // "on_actionParticleFlowPlot_tri..."
QT_MOC_LITERAL(69, 1984, 30), // "on_actionImageSlicer_triggered"
QT_MOC_LITERAL(70, 2015, 31), // "on_actionVolumeRender_triggered"
QT_MOC_LITERAL(71, 2047, 32), // "on_actionMarchingCubes_triggered"
QT_MOC_LITERAL(72, 2080, 24), // "on_actionGraph_triggered"
QT_MOC_LITERAL(73, 2105, 26), // "on_actionSummary_triggered"
QT_MOC_LITERAL(74, 2132, 24), // "on_actionStats_triggered"
QT_MOC_LITERAL(75, 2157, 28), // "on_actionIntegrate_triggered"
QT_MOC_LITERAL(76, 2186, 28), // "on_actionRecordNew_triggered"
QT_MOC_LITERAL(77, 2215, 30), // "on_actionRecordStart_triggered"
QT_MOC_LITERAL(78, 2246, 30), // "on_actionRecordPause_triggered"
QT_MOC_LITERAL(79, 2277, 29), // "on_actionRecordStop_triggered"
QT_MOC_LITERAL(80, 2307, 33), // "on_actionUndoViewChange_trigg..."
QT_MOC_LITERAL(81, 2341, 33), // "on_actionRedoViewChange_trigg..."
QT_MOC_LITERAL(82, 2375, 29), // "on_actionZoomSelect_triggered"
QT_MOC_LITERAL(83, 2405, 30), // "on_actionZoomExtents_triggered"
QT_MOC_LITERAL(84, 2436, 28), // "on_actionViewCapture_toggled"
QT_MOC_LITERAL(85, 2465, 8), // "bchecked"
QT_MOC_LITERAL(86, 2474, 22), // "on_actionOrtho_toggled"
QT_MOC_LITERAL(87, 2497, 1), // "b"
QT_MOC_LITERAL(88, 2499, 25), // "on_actionShowGrid_toggled"
QT_MOC_LITERAL(89, 2525, 30), // "on_actionShowMeshLines_toggled"
QT_MOC_LITERAL(90, 2556, 30), // "on_actionShowEdgeLines_toggled"
QT_MOC_LITERAL(91, 2587, 32), // "on_actionBackfaceCulling_toggled"
QT_MOC_LITERAL(92, 2620, 28), // "on_actionShowNormals_toggled"
QT_MOC_LITERAL(93, 2649, 27), // "on_actionShowFibers_toggled"
QT_MOC_LITERAL(94, 2677, 24), // "on_actionFront_triggered"
QT_MOC_LITERAL(95, 2702, 23), // "on_actionBack_triggered"
QT_MOC_LITERAL(96, 2726, 23), // "on_actionLeft_triggered"
QT_MOC_LITERAL(97, 2750, 24), // "on_actionRight_triggered"
QT_MOC_LITERAL(98, 2775, 22), // "on_actionTop_triggered"
QT_MOC_LITERAL(99, 2798, 25), // "on_actionBottom_triggered"
QT_MOC_LITERAL(100, 2824, 26), // "on_actionWireframe_toggled"
QT_MOC_LITERAL(101, 2851, 25), // "on_actionSnap3D_triggered"
QT_MOC_LITERAL(102, 2877, 29), // "on_actionOnlineHelp_triggered"
QT_MOC_LITERAL(103, 2907, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(104, 2932, 23), // "on_actionSelect_toggled"
QT_MOC_LITERAL(105, 2956, 26), // "on_actionTranslate_toggled"
QT_MOC_LITERAL(106, 2983, 23), // "on_actionRotate_toggled"
QT_MOC_LITERAL(107, 3007, 22), // "on_actionScale_toggled"
QT_MOC_LITERAL(108, 3030, 34), // "on_selectCoord_currentIndexCh..."
QT_MOC_LITERAL(109, 3065, 1), // "n"
QT_MOC_LITERAL(110, 3067, 30), // "on_actionSelectObjects_toggled"
QT_MOC_LITERAL(111, 3098, 28), // "on_actionSelectParts_toggled"
QT_MOC_LITERAL(112, 3127, 31), // "on_actionSelectSurfaces_toggled"
QT_MOC_LITERAL(113, 3159, 29), // "on_actionSelectCurves_toggled"
QT_MOC_LITERAL(114, 3189, 28), // "on_actionSelectNodes_toggled"
QT_MOC_LITERAL(115, 3218, 31), // "on_actionSelectDiscrete_toggled"
QT_MOC_LITERAL(116, 3250, 21), // "on_selectRect_toggled"
QT_MOC_LITERAL(117, 3272, 23), // "on_selectCircle_toggled"
QT_MOC_LITERAL(118, 3296, 21), // "on_selectFree_toggled"
QT_MOC_LITERAL(119, 3318, 10), // "closeEvent"
QT_MOC_LITERAL(120, 3329, 12), // "QCloseEvent*"
QT_MOC_LITERAL(121, 3342, 2), // "ev"
QT_MOC_LITERAL(122, 3345, 13), // "keyPressEvent"
QT_MOC_LITERAL(123, 3359, 10), // "QKeyEvent*"
QT_MOC_LITERAL(124, 3370, 19), // "finishedReadingFile"
QT_MOC_LITERAL(125, 3390, 7), // "success"
QT_MOC_LITERAL(126, 3398, 11), // "errorString"
QT_MOC_LITERAL(127, 3410, 17), // "checkFileProgress"
QT_MOC_LITERAL(128, 3428, 21), // "on_glview_pointPicked"
QT_MOC_LITERAL(129, 3450, 5), // "vec3d"
QT_MOC_LITERAL(130, 3456, 1), // "r"
QT_MOC_LITERAL(131, 3458, 26), // "on_glview_selectionChanged"
QT_MOC_LITERAL(132, 3485, 13), // "onRunFinished"
QT_MOC_LITERAL(133, 3499, 8), // "exitCode"
QT_MOC_LITERAL(134, 3508, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(135, 3529, 2), // "es"
QT_MOC_LITERAL(136, 3532, 11), // "onReadyRead"
QT_MOC_LITERAL(137, 3544, 15), // "onErrorOccurred"
QT_MOC_LITERAL(138, 3560, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(139, 3583, 3), // "err"
QT_MOC_LITERAL(140, 3587, 17), // "onExportMaterials"
QT_MOC_LITERAL(141, 3605, 18), // "vector<GMaterial*>"
QT_MOC_LITERAL(142, 3624, 7), // "matList"
QT_MOC_LITERAL(143, 3632, 20), // "onExportAllMaterials"
QT_MOC_LITERAL(144, 3653, 17), // "onImportMaterials"
QT_MOC_LITERAL(145, 3671, 18), // "DeleteAllMaterials"
QT_MOC_LITERAL(146, 3690, 11), // "DeleteAllBC"
QT_MOC_LITERAL(147, 3702, 14), // "DeleteAllLoads"
QT_MOC_LITERAL(148, 3717, 11), // "DeleteAllIC"
QT_MOC_LITERAL(149, 3729, 16), // "DeleteAllContact"
QT_MOC_LITERAL(150, 3746, 20), // "DeleteAllConstraints"
QT_MOC_LITERAL(151, 3767, 19), // "DeleteAllConnectors"
QT_MOC_LITERAL(152, 3787, 14), // "DeleteAllSteps"
QT_MOC_LITERAL(153, 3802, 9), // "GetGLView"
QT_MOC_LITERAL(154, 3812, 8), // "CGLView*"
QT_MOC_LITERAL(155, 3821, 14), // "changeViewMode"
QT_MOC_LITERAL(156, 3836, 9), // "View_Mode"
QT_MOC_LITERAL(157, 3846, 2), // "vm"
QT_MOC_LITERAL(158, 3849, 15), // "GetCurrentModel"
QT_MOC_LITERAL(159, 3865, 15) // "Post::CGLModel*"

    },
    "CMainWindow\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionSaveAs_triggered\0"
    "on_actionInfo_triggered\0"
    "on_actionImportFEModel_triggered\0"
    "on_actionExportFEModel_triggered\0"
    "on_actionImportGeometry_triggered\0"
    "on_actionExportGeometry_triggered\0"
    "on_actionImportImage_triggered\0"
    "on_actionConvertFeb_triggered\0"
    "on_actionConvertGeo_triggered\0"
    "on_actionExit_triggered\0"
    "on_recentFiles_triggered\0QAction*\0"
    "action\0on_recentFEFiles_triggered\0"
    "on_recentGeomFiles_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_actionInvertSelection_triggered\0"
    "on_actionClearSelection_triggered\0"
    "on_actionDeleteSelection_triggered\0"
    "on_actionHideSelection_triggered\0"
    "on_actionHideUnselected_triggered\0"
    "on_actionUnhideAll_triggered\0"
    "on_actionToggleVisible_triggered\0"
    "on_actionNameSelection_triggered\0"
    "on_actionTransform_triggered\0"
    "on_actionCollapseTransform_triggered\0"
    "on_actionClone_triggered\0"
    "on_actionCloneGrid_triggered\0"
    "on_actionCloneRevolve_triggered\0"
    "on_actionMerge_triggered\0"
    "on_actionPurge_triggered\0"
    "on_actionDetach_triggered\0"
    "on_actionExtract_triggered\0"
    "on_actionEditProject_triggered\0"
    "on_actionAddBC_triggered\0"
    "on_actionAddNodalLoad_triggered\0"
    "on_actionAddSurfLoad_triggered\0"
    "on_actionAddBodyLoad_triggered\0"
    "on_actionAddIC_triggered\0"
    "on_actionAddContact_triggered\0"
    "on_actionAddRigidConstraint_triggered\0"
    "on_actionAddRigidConnector_triggered\0"
    "on_actionAddMaterial_triggered\0"
    "on_actionAddStep_triggered\0"
    "on_actionAddReaction_triggered\0"
    "on_actionSoluteTable_triggered\0"
    "on_actionSBMTable_triggered\0"
    "on_actionCurveEditor_triggered\0"
    "on_actionMeshInspector_triggered\0"
    "on_actionElasticityConvertor_triggered\0"
    "on_actionFEBioRun_triggered\0"
    "on_actionFEBioStop_triggered\0"
    "on_actionFEBioOptimize_triggered\0"
    "on_actionOptions_triggered\0"
    "on_actionPlaneCut_triggered\0"
    "on_actionMirrorPlane_triggered\0"
    "on_actionVectorPlot_triggered\0"
    "on_actionTensorPlot_triggered\0"
    "on_actionIsosurfacePlot_triggered\0"
    "on_actionSlicePlot_triggered\0"
    "on_actionDisplacementMap_triggered\0"
    "on_actionStreamLinePlot_triggered\0"
    "on_actionParticleFlowPlot_triggered\0"
    "on_actionImageSlicer_triggered\0"
    "on_actionVolumeRender_triggered\0"
    "on_actionMarchingCubes_triggered\0"
    "on_actionGraph_triggered\0"
    "on_actionSummary_triggered\0"
    "on_actionStats_triggered\0"
    "on_actionIntegrate_triggered\0"
    "on_actionRecordNew_triggered\0"
    "on_actionRecordStart_triggered\0"
    "on_actionRecordPause_triggered\0"
    "on_actionRecordStop_triggered\0"
    "on_actionUndoViewChange_triggered\0"
    "on_actionRedoViewChange_triggered\0"
    "on_actionZoomSelect_triggered\0"
    "on_actionZoomExtents_triggered\0"
    "on_actionViewCapture_toggled\0bchecked\0"
    "on_actionOrtho_toggled\0b\0"
    "on_actionShowGrid_toggled\0"
    "on_actionShowMeshLines_toggled\0"
    "on_actionShowEdgeLines_toggled\0"
    "on_actionBackfaceCulling_toggled\0"
    "on_actionShowNormals_toggled\0"
    "on_actionShowFibers_toggled\0"
    "on_actionFront_triggered\0"
    "on_actionBack_triggered\0on_actionLeft_triggered\0"
    "on_actionRight_triggered\0"
    "on_actionTop_triggered\0on_actionBottom_triggered\0"
    "on_actionWireframe_toggled\0"
    "on_actionSnap3D_triggered\0"
    "on_actionOnlineHelp_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionSelect_toggled\0"
    "on_actionTranslate_toggled\0"
    "on_actionRotate_toggled\0on_actionScale_toggled\0"
    "on_selectCoord_currentIndexChanged\0n\0"
    "on_actionSelectObjects_toggled\0"
    "on_actionSelectParts_toggled\0"
    "on_actionSelectSurfaces_toggled\0"
    "on_actionSelectCurves_toggled\0"
    "on_actionSelectNodes_toggled\0"
    "on_actionSelectDiscrete_toggled\0"
    "on_selectRect_toggled\0on_selectCircle_toggled\0"
    "on_selectFree_toggled\0closeEvent\0"
    "QCloseEvent*\0ev\0keyPressEvent\0QKeyEvent*\0"
    "finishedReadingFile\0success\0errorString\0"
    "checkFileProgress\0on_glview_pointPicked\0"
    "vec3d\0r\0on_glview_selectionChanged\0"
    "onRunFinished\0exitCode\0QProcess::ExitStatus\0"
    "es\0onReadyRead\0onErrorOccurred\0"
    "QProcess::ProcessError\0err\0onExportMaterials\0"
    "vector<GMaterial*>\0matList\0"
    "onExportAllMaterials\0onImportMaterials\0"
    "DeleteAllMaterials\0DeleteAllBC\0"
    "DeleteAllLoads\0DeleteAllIC\0DeleteAllContact\0"
    "DeleteAllConstraints\0DeleteAllConnectors\0"
    "DeleteAllSteps\0GetGLView\0CGLView*\0"
    "changeViewMode\0View_Mode\0vm\0GetCurrentModel\0"
    "Post::CGLModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     135,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  689,    2, 0x0a /* Public */,
       3,    0,  690,    2, 0x0a /* Public */,
       4,    0,  691,    2, 0x0a /* Public */,
       5,    0,  692,    2, 0x0a /* Public */,
       6,    0,  693,    2, 0x0a /* Public */,
       7,    0,  694,    2, 0x0a /* Public */,
       8,    0,  695,    2, 0x0a /* Public */,
       9,    0,  696,    2, 0x0a /* Public */,
      10,    0,  697,    2, 0x0a /* Public */,
      11,    0,  698,    2, 0x0a /* Public */,
      12,    0,  699,    2, 0x0a /* Public */,
      13,    0,  700,    2, 0x0a /* Public */,
      14,    0,  701,    2, 0x0a /* Public */,
      15,    1,  702,    2, 0x0a /* Public */,
      18,    1,  705,    2, 0x0a /* Public */,
      19,    1,  708,    2, 0x0a /* Public */,
      20,    0,  711,    2, 0x0a /* Public */,
      21,    0,  712,    2, 0x0a /* Public */,
      22,    0,  713,    2, 0x0a /* Public */,
      23,    0,  714,    2, 0x0a /* Public */,
      24,    0,  715,    2, 0x0a /* Public */,
      25,    0,  716,    2, 0x0a /* Public */,
      26,    0,  717,    2, 0x0a /* Public */,
      27,    0,  718,    2, 0x0a /* Public */,
      28,    0,  719,    2, 0x0a /* Public */,
      29,    0,  720,    2, 0x0a /* Public */,
      30,    0,  721,    2, 0x0a /* Public */,
      31,    0,  722,    2, 0x0a /* Public */,
      32,    0,  723,    2, 0x0a /* Public */,
      33,    0,  724,    2, 0x0a /* Public */,
      34,    0,  725,    2, 0x0a /* Public */,
      35,    0,  726,    2, 0x0a /* Public */,
      36,    0,  727,    2, 0x0a /* Public */,
      37,    0,  728,    2, 0x0a /* Public */,
      38,    0,  729,    2, 0x0a /* Public */,
      39,    0,  730,    2, 0x0a /* Public */,
      40,    0,  731,    2, 0x0a /* Public */,
      41,    0,  732,    2, 0x0a /* Public */,
      42,    0,  733,    2, 0x0a /* Public */,
      43,    0,  734,    2, 0x0a /* Public */,
      44,    0,  735,    2, 0x0a /* Public */,
      45,    0,  736,    2, 0x0a /* Public */,
      46,    0,  737,    2, 0x0a /* Public */,
      47,    0,  738,    2, 0x0a /* Public */,
      48,    0,  739,    2, 0x0a /* Public */,
      49,    0,  740,    2, 0x0a /* Public */,
      50,    0,  741,    2, 0x0a /* Public */,
      51,    0,  742,    2, 0x0a /* Public */,
      52,    0,  743,    2, 0x0a /* Public */,
      53,    0,  744,    2, 0x0a /* Public */,
      54,    0,  745,    2, 0x0a /* Public */,
      55,    0,  746,    2, 0x0a /* Public */,
      56,    0,  747,    2, 0x0a /* Public */,
      57,    0,  748,    2, 0x0a /* Public */,
      58,    0,  749,    2, 0x0a /* Public */,
      59,    0,  750,    2, 0x0a /* Public */,
      60,    0,  751,    2, 0x0a /* Public */,
      61,    0,  752,    2, 0x0a /* Public */,
      62,    0,  753,    2, 0x0a /* Public */,
      63,    0,  754,    2, 0x0a /* Public */,
      64,    0,  755,    2, 0x0a /* Public */,
      65,    0,  756,    2, 0x0a /* Public */,
      66,    0,  757,    2, 0x0a /* Public */,
      67,    0,  758,    2, 0x0a /* Public */,
      68,    0,  759,    2, 0x0a /* Public */,
      69,    0,  760,    2, 0x0a /* Public */,
      70,    0,  761,    2, 0x0a /* Public */,
      71,    0,  762,    2, 0x0a /* Public */,
      72,    0,  763,    2, 0x0a /* Public */,
      73,    0,  764,    2, 0x0a /* Public */,
      74,    0,  765,    2, 0x0a /* Public */,
      75,    0,  766,    2, 0x0a /* Public */,
      76,    0,  767,    2, 0x0a /* Public */,
      77,    0,  768,    2, 0x0a /* Public */,
      78,    0,  769,    2, 0x0a /* Public */,
      79,    0,  770,    2, 0x0a /* Public */,
      80,    0,  771,    2, 0x0a /* Public */,
      81,    0,  772,    2, 0x0a /* Public */,
      82,    0,  773,    2, 0x0a /* Public */,
      83,    0,  774,    2, 0x0a /* Public */,
      84,    1,  775,    2, 0x0a /* Public */,
      86,    1,  778,    2, 0x0a /* Public */,
      88,    1,  781,    2, 0x0a /* Public */,
      89,    1,  784,    2, 0x0a /* Public */,
      90,    1,  787,    2, 0x0a /* Public */,
      91,    1,  790,    2, 0x0a /* Public */,
      92,    1,  793,    2, 0x0a /* Public */,
      93,    1,  796,    2, 0x0a /* Public */,
      94,    0,  799,    2, 0x0a /* Public */,
      95,    0,  800,    2, 0x0a /* Public */,
      96,    0,  801,    2, 0x0a /* Public */,
      97,    0,  802,    2, 0x0a /* Public */,
      98,    0,  803,    2, 0x0a /* Public */,
      99,    0,  804,    2, 0x0a /* Public */,
     100,    1,  805,    2, 0x0a /* Public */,
     101,    0,  808,    2, 0x0a /* Public */,
     102,    0,  809,    2, 0x0a /* Public */,
     103,    0,  810,    2, 0x0a /* Public */,
     104,    1,  811,    2, 0x0a /* Public */,
     105,    1,  814,    2, 0x0a /* Public */,
     106,    1,  817,    2, 0x0a /* Public */,
     107,    1,  820,    2, 0x0a /* Public */,
     108,    1,  823,    2, 0x0a /* Public */,
     110,    1,  826,    2, 0x0a /* Public */,
     111,    1,  829,    2, 0x0a /* Public */,
     112,    1,  832,    2, 0x0a /* Public */,
     113,    1,  835,    2, 0x0a /* Public */,
     114,    1,  838,    2, 0x0a /* Public */,
     115,    1,  841,    2, 0x0a /* Public */,
     116,    1,  844,    2, 0x0a /* Public */,
     117,    1,  847,    2, 0x0a /* Public */,
     118,    1,  850,    2, 0x0a /* Public */,
     119,    1,  853,    2, 0x0a /* Public */,
     122,    1,  856,    2, 0x0a /* Public */,
     124,    2,  859,    2, 0x0a /* Public */,
     127,    0,  864,    2, 0x0a /* Public */,
     128,    1,  865,    2, 0x0a /* Public */,
     131,    0,  868,    2, 0x0a /* Public */,
     132,    2,  869,    2, 0x0a /* Public */,
     136,    0,  874,    2, 0x0a /* Public */,
     137,    1,  875,    2, 0x0a /* Public */,
     140,    1,  878,    2, 0x0a /* Public */,
     143,    0,  881,    2, 0x0a /* Public */,
     144,    0,  882,    2, 0x0a /* Public */,
     145,    0,  883,    2, 0x0a /* Public */,
     146,    0,  884,    2, 0x0a /* Public */,
     147,    0,  885,    2, 0x0a /* Public */,
     148,    0,  886,    2, 0x0a /* Public */,
     149,    0,  887,    2, 0x0a /* Public */,
     150,    0,  888,    2, 0x0a /* Public */,
     151,    0,  889,    2, 0x0a /* Public */,
     152,    0,  890,    2, 0x0a /* Public */,
     153,    0,  891,    2, 0x0a /* Public */,
     155,    1,  892,    2, 0x0a /* Public */,
     158,    0,  895,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   85,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, 0x80000000 | 120,  121,
    QMetaType::Void, 0x80000000 | 123,  121,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,  125,  126,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 129,  130,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 134,  133,  135,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 138,  139,
    QMetaType::Void, 0x80000000 | 141,  142,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 154,
    QMetaType::Void, 0x80000000 | 156,  157,
    0x80000000 | 159,

       0        // eod
};

void CMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CMainWindow *_t = static_cast<CMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionSaveAs_triggered(); break;
        case 4: _t->on_actionInfo_triggered(); break;
        case 5: _t->on_actionImportFEModel_triggered(); break;
        case 6: _t->on_actionExportFEModel_triggered(); break;
        case 7: _t->on_actionImportGeometry_triggered(); break;
        case 8: _t->on_actionExportGeometry_triggered(); break;
        case 9: _t->on_actionImportImage_triggered(); break;
        case 10: _t->on_actionConvertFeb_triggered(); break;
        case 11: _t->on_actionConvertGeo_triggered(); break;
        case 12: _t->on_actionExit_triggered(); break;
        case 13: _t->on_recentFiles_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 14: _t->on_recentFEFiles_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: _t->on_recentGeomFiles_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 16: _t->on_actionUndo_triggered(); break;
        case 17: _t->on_actionRedo_triggered(); break;
        case 18: _t->on_actionInvertSelection_triggered(); break;
        case 19: _t->on_actionClearSelection_triggered(); break;
        case 20: _t->on_actionDeleteSelection_triggered(); break;
        case 21: _t->on_actionHideSelection_triggered(); break;
        case 22: _t->on_actionHideUnselected_triggered(); break;
        case 23: _t->on_actionUnhideAll_triggered(); break;
        case 24: _t->on_actionToggleVisible_triggered(); break;
        case 25: _t->on_actionNameSelection_triggered(); break;
        case 26: _t->on_actionTransform_triggered(); break;
        case 27: _t->on_actionCollapseTransform_triggered(); break;
        case 28: _t->on_actionClone_triggered(); break;
        case 29: _t->on_actionCloneGrid_triggered(); break;
        case 30: _t->on_actionCloneRevolve_triggered(); break;
        case 31: _t->on_actionMerge_triggered(); break;
        case 32: _t->on_actionPurge_triggered(); break;
        case 33: _t->on_actionDetach_triggered(); break;
        case 34: _t->on_actionExtract_triggered(); break;
        case 35: _t->on_actionEditProject_triggered(); break;
        case 36: _t->on_actionAddBC_triggered(); break;
        case 37: _t->on_actionAddNodalLoad_triggered(); break;
        case 38: _t->on_actionAddSurfLoad_triggered(); break;
        case 39: _t->on_actionAddBodyLoad_triggered(); break;
        case 40: _t->on_actionAddIC_triggered(); break;
        case 41: _t->on_actionAddContact_triggered(); break;
        case 42: _t->on_actionAddRigidConstraint_triggered(); break;
        case 43: _t->on_actionAddRigidConnector_triggered(); break;
        case 44: _t->on_actionAddMaterial_triggered(); break;
        case 45: _t->on_actionAddStep_triggered(); break;
        case 46: _t->on_actionAddReaction_triggered(); break;
        case 47: _t->on_actionSoluteTable_triggered(); break;
        case 48: _t->on_actionSBMTable_triggered(); break;
        case 49: _t->on_actionCurveEditor_triggered(); break;
        case 50: _t->on_actionMeshInspector_triggered(); break;
        case 51: _t->on_actionElasticityConvertor_triggered(); break;
        case 52: _t->on_actionFEBioRun_triggered(); break;
        case 53: _t->on_actionFEBioStop_triggered(); break;
        case 54: _t->on_actionFEBioOptimize_triggered(); break;
        case 55: _t->on_actionOptions_triggered(); break;
        case 56: _t->on_actionPlaneCut_triggered(); break;
        case 57: _t->on_actionMirrorPlane_triggered(); break;
        case 58: _t->on_actionVectorPlot_triggered(); break;
        case 59: _t->on_actionTensorPlot_triggered(); break;
        case 60: _t->on_actionIsosurfacePlot_triggered(); break;
        case 61: _t->on_actionSlicePlot_triggered(); break;
        case 62: _t->on_actionDisplacementMap_triggered(); break;
        case 63: _t->on_actionStreamLinePlot_triggered(); break;
        case 64: _t->on_actionParticleFlowPlot_triggered(); break;
        case 65: _t->on_actionImageSlicer_triggered(); break;
        case 66: _t->on_actionVolumeRender_triggered(); break;
        case 67: _t->on_actionMarchingCubes_triggered(); break;
        case 68: _t->on_actionGraph_triggered(); break;
        case 69: _t->on_actionSummary_triggered(); break;
        case 70: _t->on_actionStats_triggered(); break;
        case 71: _t->on_actionIntegrate_triggered(); break;
        case 72: _t->on_actionRecordNew_triggered(); break;
        case 73: _t->on_actionRecordStart_triggered(); break;
        case 74: _t->on_actionRecordPause_triggered(); break;
        case 75: _t->on_actionRecordStop_triggered(); break;
        case 76: _t->on_actionUndoViewChange_triggered(); break;
        case 77: _t->on_actionRedoViewChange_triggered(); break;
        case 78: _t->on_actionZoomSelect_triggered(); break;
        case 79: _t->on_actionZoomExtents_triggered(); break;
        case 80: _t->on_actionViewCapture_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->on_actionOrtho_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->on_actionShowGrid_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->on_actionShowMeshLines_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->on_actionShowEdgeLines_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->on_actionBackfaceCulling_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->on_actionShowNormals_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->on_actionShowFibers_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->on_actionFront_triggered(); break;
        case 89: _t->on_actionBack_triggered(); break;
        case 90: _t->on_actionLeft_triggered(); break;
        case 91: _t->on_actionRight_triggered(); break;
        case 92: _t->on_actionTop_triggered(); break;
        case 93: _t->on_actionBottom_triggered(); break;
        case 94: _t->on_actionWireframe_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: _t->on_actionSnap3D_triggered(); break;
        case 96: _t->on_actionOnlineHelp_triggered(); break;
        case 97: _t->on_actionAbout_triggered(); break;
        case 98: _t->on_actionSelect_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 99: _t->on_actionTranslate_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 100: _t->on_actionRotate_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 101: _t->on_actionScale_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 102: _t->on_selectCoord_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 103: _t->on_actionSelectObjects_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 104: _t->on_actionSelectParts_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 105: _t->on_actionSelectSurfaces_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 106: _t->on_actionSelectCurves_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 107: _t->on_actionSelectNodes_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 108: _t->on_actionSelectDiscrete_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 109: _t->on_selectRect_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: _t->on_selectCircle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 111: _t->on_selectFree_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 113: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 114: _t->finishedReadingFile((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 115: _t->checkFileProgress(); break;
        case 116: _t->on_glview_pointPicked((*reinterpret_cast< const vec3d(*)>(_a[1]))); break;
        case 117: _t->on_glview_selectionChanged(); break;
        case 118: _t->onRunFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 119: _t->onReadyRead(); break;
        case 120: _t->onErrorOccurred((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 121: _t->onExportMaterials((*reinterpret_cast< const vector<GMaterial*>(*)>(_a[1]))); break;
        case 122: _t->onExportAllMaterials(); break;
        case 123: _t->onImportMaterials(); break;
        case 124: _t->DeleteAllMaterials(); break;
        case 125: _t->DeleteAllBC(); break;
        case 126: _t->DeleteAllLoads(); break;
        case 127: _t->DeleteAllIC(); break;
        case 128: _t->DeleteAllContact(); break;
        case 129: _t->DeleteAllConstraints(); break;
        case 130: _t->DeleteAllConnectors(); break;
        case 131: _t->DeleteAllSteps(); break;
        case 132: { CGLView* _r = _t->GetGLView();
            if (_a[0]) *reinterpret_cast< CGLView**>(_a[0]) = std::move(_r); }  break;
        case 133: _t->changeViewMode((*reinterpret_cast< View_Mode(*)>(_a[1]))); break;
        case 134: { Post::CGLModel* _r = _t->GetCurrentModel();
            if (_a[0]) *reinterpret_cast< Post::CGLModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CMainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_CMainWindow.data,
    qt_meta_data_CMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 135)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 135;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 135)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 135;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
