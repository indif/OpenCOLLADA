
 /***************************************************************************** 
 * FILE:         Buildver.h 
 * DESCRIPTION:  Feature customization file.  
 * CREATED BY:   Buildver.h was generated by BuildVerGen for project: max
 ****************************************************************************** 
 * Copyright (c) 2009 Autodesk, All Rights Reserved. 
 ******************************************************************************/ 

#ifndef BUILDVER_H
#define BUILDVER_H

//*****************************************************************************
// BUILD WARNINGS
//*****************************************************************************
#include "BuildWarnings.h"


#define ALPHABETA
#undef  GAME_VER
#undef  GAME_FREE_VER
#undef  WEBVERSION
#undef  RENDER_VER
#undef  RENDER_VER_ABS
#undef  RENDER_VER_CIV3D
#undef  RENDER_DEV_VER
#undef  DESIGN_VER
#define MAX_VER
#define _3D_CREATE
#define _ENABLE_BITMAP_PRINTING_
#define _LAYERS_
#define _OSNAP
#define _SUBMTLASSIGNMENT
#define AUTOGRID_IN_CREATE_PANEL
#define ACAD_MAXSCRIPT_EXTENSIONS
#undef  ADV_SHADOWS_IN_RENDER_DIALOG
#define BATCH_RENDERER_USES_EXECUTER
#undef  BEZIER_DEFAULT_POS_CTRL
#undef  CAN_HAVE_MULTIPLE_SNAP_TOGGLE_BUTTON
#undef  COMMAND_PANEL_TINTED
#undef  COMMAND_PANEL_TITLES
#define DAYLIGHT_CITY_PICKER_BIG_CITY_DEFAULT
#define DAYLIGHT_DEFAULT_TIME_SUMMER_SOLSTICE
#undef  ENVIRONMENT_DIALOG_IN_RENDER_DIALOG
#undef  FILELINK_DISPLAY_ALL_MSG
#define HELP_WEB_LINKS_AS_MAXSCRIPTS
#undef  HIDE_VIEWPORT_MANAGER_UI
#undef  HIGH_CONTRAST_OBJECT_COLOR
#undef  INCLUDE_WSM_DISPLACEMESH
#undef  INCLUDE_WSM_PATCH_DEFORM
#undef  INCLUDE_WSM_PATH_DEFORM
#undef  INCLUDE_WSM_SURFACE_DEFORM
#undef  LIMITED_USER
#undef  LIMITED_USER_CUI
#undef  LINKEDOBJ_NO_CLONE
#define LINKEDOBJ_NO_COLLAPSE
#define LINKEDOBJ_NO_DELETE
#define LINKEDOBJ_NO_UNLINK_NODE
#undef  LINKEDOBJ_OK_TO_APPLY_TOPODEPENDENT_MODIFIER
#define LINKEDOBJ_NO_MAKE_UNIQUE
#define LOFT_CAN_USE_SUBSHAPE_STEPS
#define MAP_SCALER_OSM
#undef  MENTALRAY_LIMITED_SAT_AND_THREADS
#undef  METRIC_UNITS_FIXED_VALUES
#undef  MODIFIER_EXTRUDE_PRIVATE
#undef  MODIFIER_LIST_AUTO_HEIGHT
#undef  MODIFER_SETS_NO_INITIAL_BLANK_BUTTONS
#undef  MODIFIER_SKEW_PRIVATE
#define MOVE_TTI_SCREENSCALE_INCREMENTS
#undef  MTLEDITOR_CONVERT_TO_ARCHMAT
#undef  MTLEDITOR_EDIT_PUBLIC_ONLY
#undef  MTLEDITOR_ONE_MTL_ONE_MAP_PREVIEW
#undef  MTLEDITOR_SHARE_UVGEN_AND_TEXOUT_PANELS
#undef  NO_ACTION_GLOBAL_EXCLUDE
#undef  NO_ACTIVE_DEGRADATION
#undef  NO_ACTIVESHADE
#undef  NO_ADAPTIVE_SUBDIVISION
#undef  NO_ADVANCED_RAYTRACE_SHADOWS_EXCLUSION
#undef  NO_AMBIENT_OCCLUSION
#undef  NO_ANIM_LAYERS
#undef  NO_ANIM_MIXER
#undef  NO_ANIMATABLE_PARAMETERS
#undef  NO_ASHLI
#undef  NO_ATMOSGIZMOS
#undef  NO_ATMOSPHERICS
#undef  NO_AUTOHEIGHT
#undef  NO_BITMAP_PROXIES
#undef  NO_BRUSH_PRESETS
#undef  NO_CAMERA_ENVRANGE
#undef  NO_CAMERA_MULTIPASS
#undef  NO_CFGPATH_PLUGINS
#undef  NO_CFGPATH_XREF
#undef  NO_CHARSTUDIO
#undef  NO_CLI_RENDER
#undef  NO_COLOR_ALPHA_CHANNEL
#undef  NO_CONTROLLER_AUDIO_POSITION
#undef  NO_CONTROLLER_AUDIO_SCALE
#undef  NO_CONTROLLER_MORPH
#undef  NO_CONTROLLER_SCRIPTED
#undef  NO_CONTROLLER_SLAVE_POSITION
#undef  NO_CONTROLLER_SLAVE_ROTATION
#undef  NO_CONTROLLER_SLAVE_SCALE
#undef  NO_CONTROLLER_SURFACE
#undef  NO_CREATE_IK_ASSIGN
#undef  NO_CREATE_TASK
#undef  NO_CROSSHAIR_CURSOR
#undef  NO_CUI_TABBED_PANELS
#undef  NO_DAYLIGHT_MOTION_PANEL
#undef  NO_DAYLIGHT_SELECTOR
#undef  NO_DEFAULT_MAIN_TOOLBAR
#undef  NO_DEFAULT_TANGENTS
#undef  NO_DIALOG_MONITOR
#undef  NO_DISPLAY_TASK
#define NO_DRAFT_RENDERER
#define NO_DX10
#undef  NO_EDIT_REDO_ACTION
#undef  NO_EMAIL_NOTIFICATION
#undef  NO_EXCLUSION_LIST_DLG
#undef  NO_EXPOSURECONTROL
#undef  NO_EXTENDED_PRIMITIVES
#undef  NO_FILELINK_MANAGER_UI
#undef  NO_GRID_ORTHO
#undef  NO_GRID_POLAR
#undef  NO_GRID_EXTENT_SETTING
#undef  NO_HD_IK
#undef  NO_HELPER_CAMMATCH
#undef  NO_HELPER_FOG
#undef  NO_HELPER_PROTRACTOR
#undef  NO_HELPER_TAPE
#undef  NO_HIERARCHY_TASK
#undef  NO_HIERARCHY_SKIN_POSE
#undef  NO_LIGHT_AFFECT_SURFACE
#undef  NO_LIGHTATTENUATION
#undef  NO_LINK_UI
#undef  NO_LOAD_SAVE_ANIMATION
#undef  NO_LUT_INTEGRATION
#undef  NO_MAKE_PREVIEW_USE_DEVICE
#undef  NO_MANIP_CONE
#undef  NO_MANIP_PLANEANGLE
#undef  NO_MAPTYPE_COLORCORRECTION
#undef  NO_MAPTYPE_COMPOSITE
#undef  NO_MAPTYPE_DENT
#undef  NO_MAPTYPE_FLATMIRROR
#undef  NO_MAPTYPE_GRADIENT
#undef  NO_MAPTYPE_MARBLE
#undef  NO_MAPTYPE_MASK
#undef  NO_MAPTYPE_MIX
#undef  NO_MAPTYPE_NOISE
#undef  NO_MAPTYPE_OUTPUT
#undef  NO_MAPTYPE_PARTICLEAGE
#undef  NO_MAPTYPE_PARTICLEMBLUR
#undef  NO_MAPTYPE_REFLECTREFRACT
#undef  NO_MAPTYPE_RGBMULT
#undef  NO_MAPTYPE_RGBTINT
#undef  NO_MAPTYPE_THINWALL
#undef  NO_MAPTYPE_VERTCOLOR
#undef  NO_MAPTYPE_WATER
#undef  NO_MATLIB_SAVING
#undef  NO_MAXNET
#undef  NO_MAXNET_PLATFORM_OVERRIDE
#undef  NO_MENTAL_RAY
#undef  NO_MENTAL_RAY_PROPERTIES
#undef  NO_MENTAL_RAY_MESHCACHE_UI
#undef  NO_MODIDIFIER_SUBDIVIDE_WSM
#undef  NO_MODIFIER_AFFECTREGION
#undef  NO_MODIFIER_BEND
#undef  NO_MODIFIER_CAMERA_MAP
#undef  NO_MODIFIER_CAPHOLES
#undef  NO_MODIFIER_CHANNEL_ADD_PASTE_CLEAR
#undef  NO_MODIFIER_CONVERTTOPATCH
#undef  NO_MODIFIER_DELETE_MESH
#undef  NO_MODIFIER_DELETE_SPLINE
#undef  NO_MODIFIER_DISP_APPROX
#undef  NO_MODIFIER_DISPLACE
#undef  NO_MODIFIER_EDIT_MESH
#undef  NO_MODIFIER_EDIT_NORMAL
#undef  NO_MODIFIER_FACE_EXTRUDE
#undef  NO_MODIFIER_FFD
#undef  NO_MODIFIER_FFD_2X2
#undef  NO_MODIFIER_FFD_3X3
#undef  NO_MODIFIER_FFD_4X4
#undef  NO_MODIFIER_FLEX
#undef  NO_MODIFIER_LATHE
#undef  NO_MODIFIER_LATTICE
#undef  NO_MODIFIER_MATERIAL
#undef  NO_MODIFIER_MATERIALBYELEMENT
#undef  NO_MODIFIER_MIRROR
#undef  NO_MODIFIER_NOISE
#undef  NO_MODIFIER_NORMALIZE_SPLINE
#undef  NO_MODIFIER_OPTIMIZE
#undef  NO_MODIFIER_PATH_DEFORM
#undef  NO_MODIFIER_POLY_SELECT
#undef  NO_MODIFIER_PRESERVE
#undef  NO_MODIFIER_RIPPLE_WAVE
#undef  NO_MODIFIER_SLICE
#undef  NO_MODIFIER_SPLINESELECT
#undef  NO_MODIFIER_SQUEEZE
#undef  NO_MODIFIER_STRETCH
#undef  NO_MODIFIER_SURF_DEFORM
#undef  NO_MODIFIER_TAPER
#undef  NO_MODIFIER_TESSELATE
#undef  NO_MODIFIER_TWIST
#undef  NO_MODIFIER_UVW_UNWRAP
#undef  NO_MODIFIER_UVW_XFORM
#undef  NO_MODIFIER_VOLUME_SELECT
#undef  NO_MODIFIER_XFORM
#undef  NO_MOTION_BLUR
#undef  NO_MOTION_TASK
#undef  NO_MTL_BLEND
#undef  NO_MTL_COMPOSITE
#undef  NO_MTL_DIRECTX_9_SHADER
#undef  NO_MTL_DYNAMICS_PARAMETERS
#undef  NO_MTL_DBLSIDED
#undef  NO_MTL_MATTESHADOW
#undef  NO_MTL_MORPHER
#define NO_MTL_PROPAGATION_FOR_VIZBLOCKS
#undef  NO_MTL_TOPBOTTOM
#undef  NO_MTLBROWSER_BROWSE_LIBRARIES
#undef  NO_MTLEDIT_KEEP_OLD
#undef  NO_MTLEDITOR_ASSIGNMTLTOSELECTION
#undef  NO_MTLEDITOR_BACKLIGHT
#undef  NO_MTLEDITOR_BITMAP_CROPPING
#undef  NO_MTLEDITOR_BITMAP_TIME_ROLLOUT
#undef  NO_MTLEDITOR_CLEARMATERIAL
#undef  NO_MTLEDITOR_CLONE
#undef  NO_MTLEDITOR_EFFECTSCHANNELS
#undef  NO_MTLEDITOR_GET
#undef  NO_MTLEDITOR_GETMATERIAL
#undef  NO_MTLEDITOR_HSCROLLVSCROLL
#undef  NO_MTLEDITOR_MAKEPREVIEW
#undef  NO_MTLEDITOR_MAKEUNIQUE
#undef  NO_MTLEDITOR_NOISE_ROLLOUT
#undef  NO_MTLEDITOR_OBJECT
#undef  NO_MTLEDITOR_OPTIONS
#undef  NO_MTLEDITOR_PUT
#undef  NO_MTLEDITOR_PUTTOLIB
#undef  NO_MTLEDITOR_PUTTOSCENE
#undef  NO_MTLEDITOR_SAMPLETYPE
#undef  NO_MTLEDITOR_SAMPLEUVTILING
#undef  NO_MTLEDITOR_SELBYMTL
#undef  NO_MTLEDITOR_SELECTBYMATERIAL
#undef  NO_MTLEDITOR_SHOWEND
#undef  NO_MTLEDITOR_SHOWENDRESULT
#undef  NO_MTLEDITOR_SHOWMAPINVPORT
#undef  NO_MTLEDITOR_SIBLING
#undef  NO_MTLEDITOR_TYPE
#undef  NO_MTLEDITOR_VIDCOLORCHECK
#undef  NO_MTLEDITOR_XYZ_ROLLOUT
#undef  NO_MXS_MINILISTENER
#undef  NO_NETRENDER
#undef  NO_NON_BONES_IK
#undef  NO_NURBS
#undef  NO_OBJ_PROP_APPLY_ATMOSPHERICS
#undef  NO_OBJ_PROP_BYOBJECT_BYLAYER
#undef  NO_OBJ_PROP_DIMENSION
#undef  NO_OBJ_PROP_DISPLAY_GROUP
#undef  NO_OBJ_PROP_GROUP_NAME
#undef  NO_OBJ_PROP_MOTION_BLUR_GROUP
#undef  NO_OBJ_PROP_PARENT_NAME
#undef  NO_OBJ_PROP_POLYGON_COUNT
#undef  NO_OBJ_PROP_RADIOSITY_GEOM_EXCLUDED
#undef  NO_OBJ_PROP_RADIOSITY_LIGHT_EXCLUDED
#undef  NO_OBJ_PROP_RADIOSITY_RAY_MULT
#undef  NO_OBJ_PROP_RADIOSITY_RCV_ILLUM
#undef  NO_OBJ_PROP_RADIOSITY_SPECULAR
#undef  NO_OBJ_PROP_RCV_SHADOW
#undef  NO_OBJ_PROP_RENDERABLE
#undef  NO_OBJ_PROP_VISIBILITY
#undef  NO_OBJECT_BONE
#undef  NO_OBJECT_BOOL
#undef  NO_OBJECT_CAPSULE
#undef  NO_OBJECT_CONFORM
#undef  NO_OBJECT_CONNECT
#undef  NO_OBJECT_DAMPER
#define NO_OBJECT_DEFAULT_MATERIALS
#undef  NO_OBJECT_DIRECT_LIGHT
#undef  NO_OBJECT_HEDRA
#undef  NO_OBJECT_LOFT
#undef  NO_OBJECT_MESHER
#undef  NO_OBJECT_MORPH
#undef  NO_OBJECT_PRISM
#undef  NO_OBJECT_RINGARRAY
#undef  NO_OBJECT_SCATTER
#undef  NO_OBJECT_SHAPE_MERGE
#undef  NO_OBJECT_SHAPES_SPLINES
#undef  NO_OBJECT_SLIDING_DOOR
#undef  NO_OBJECT_SLIDING_WINDOW
#undef  NO_OBJECT_SPOT_LIGHT
#undef  NO_OBJECT_SPRING
#undef  NO_OBJECT_STANDARD_PRIMITIVES
#undef  NO_OBJECT_TEAPOT
#undef  NO_OUTPUT_DEVICES
#undef  NO_OUTPUT_GAMMA
#undef  NO_OUTPUTRENDERER
#undef  NO_PARAMETER_WIRING
#undef  NO_PARAMETER_WIRING_UI
#undef  NO_PARTICLES
#undef  NO_PARTICLES_BLIZZARD
#undef  NO_PARTICLES_PARRAY
#undef  NO_PARTICLES_PCLOUD
#undef  NO_PARTICLES_SUPERSPRAY
#undef  NO_PATCHES
#undef  NO_PREF_ANIMATION
#undef  NO_PREF_GAMMA
#undef  NO_PREF_INVERSE_KINEMATICS
#undef  NO_PREF_MAXSCRIPT
#undef  NO_PREF_TMGIZMO
#undef  NO_PREF_VIZ
#undef  NO_PROJECTION_MODIFIER
#undef  NO_RAMPLAYER
#undef  NO_REGIONS
#undef  NO_REMOVE_EXPOSURE_CONTROL
#undef  NO_RENDER_ELEMENT_MATTE
#undef  NO_RENDER_ELEMENT_DIFFUSE
#undef  NO_RENDER_ELEMENT_LIGHTING
#undef  NO_RENDER_ELEMENT_MOTION
#undef  NO_RENDER_ELEMENTS
#undef  NO_RENDER_ELEMENTS_UI
#undef  NO_RENDER_TO_TEXTURE
#undef  NO_RENDEREFFECTS
#undef  NO_RENDERING_LINEAR_EXPOSURE_CONTROL
#undef  NO_RTT_FLOAT_PNT_OUTPUT
#undef  NO_SAFE_FRAME_CUSTOMIZATION
#undef  NO_SAFE_FRAMES
#undef  NO_SCENEEVENTMANAGER
#undef  NO_SCHEMATICVIEW
#undef  NO_SHADOW_GENERATOR_SPECIFIC_PARAM
#undef  NO_SHADOW_PARAMETERS_ROLLOUT
#undef  NO_SKYLIGHT_AFFECT_DIFFUSE_UI
#undef  NO_SKYLIGHT_AFFECT_SPECULAR_UI
#undef  NO_SKYLIGHT_EXPONENT_UI
#undef  NO_SKYLIGHT_RAY_BIAS_UI
#undef  NO_SPACEWARPS
#undef  NO_SPRING_CONTROLLER
#undef  NO_STANDARD_TOOLBAR_OPTIONS
#undef  NO_STARTUP_SCENE_ON_OLE_EMBEDDING
#undef  NO_STROKES
#undef  NO_SUNLIGHT_TARGETED_UI
#undef  NO_TEXTURE_SKYLIGHT
#define NO_THREE_POINT_ALIGN
#undef  NO_TIME_CONFIG_VIDEO_OPTIONS
#undef  NO_TOOL_ARRAY
#undef  NO_TOOL_DISPLAY_FLOATER
#undef  NO_TRACK_VIEW
#undef  NO_TRACKBAR_CONFIG_SHOW_AUDIO
#undef  NO_TRACKBAR_FILTER_MATERIAL
#undef  NO_TRACKBAR_MAXIMIZE
#undef  NO_UNLINK_UI
#undef  NO_UTILITY_ASCIIOUTPUT
#undef  NO_UTILITY_COLLAPSE
#undef  NO_UTILITY_COLORCLIPBOARD
#undef  NO_UTILITY_FOLLOWBANK
#undef  NO_UTILITY_IFL_MANAGER
#undef  NO_UTILITY_LINKINFO
#undef  NO_UTILITY_LOD
#undef  NO_UTILITY_MAXSCRIPT
#undef  NO_UTILITY_MEASURE
#undef  NO_UTILITY_POLYGONCOUNTER
#undef  NO_UTILITY_RESCALE
#undef  NO_UTILITY_RESETXFORM
#undef  NO_UTILITY_SHAPECHECK
#undef  NO_UTILITY_TASK
#undef  NO_UVWUNWRAP_QUICK_MAPPING
#undef  NO_UVWUNWRAP_PELT_MAPPING
#undef  NO_UVWUNWRAP_DISTORTION
#undef  NO_UVWUNWRAP_SELECT_OVERLAPS
#undef  NO_VIDEOPOST
#undef  NO_VIEW_SPOT
#undef  NO_VIEWPORT_BG_DIALOG
#undef  NO_VISUAL_MXS
#undef  NO_VOLUME_LIGHT
#undef  NO_WSM_DISPLACEMESH
#define NOVA_VER
#undef  OBJ_PROP_KAHN_DEFAULTS
#undef  OBJ_PROP_MERGED_GEN_RADIOSITY_PAGE
#undef  OBJECT_TERRAIN_PRIVATE
#undef  ONLY_BITMAPS_FOR_ENVIRONMENT_MAP
#undef  PRINT_WIZARD_IN_RENDER_DIALOG
#undef  PRIVATE_HELPER_COMPASS
#undef  PRIVATE_SUBSTITUTE_MOD
#define PRIVATE_SUBSTITUTION_MGR
#undef  RAYTRACE_IN_RENDER_DIALOG
#undef  REACTOR_CONTROLLERS_PRIVATE
#undef  RENDER_OPTION_IN_SEPARATE_ROLLOUT
#undef  RENDER_OUTPUT_IN_SEPARATE_ROLLOUT
#undef  RENDER_ROLLOUTS_IN_COMMON_TAB
#undef  RENDER_PRESETS_LOAD_KAHN_PRESETS
#undef  RENDER_PRESETS_RADIOSITY_ONLY_ADV_LIGHTING
#define RENDER_PRESETS_RAYTRACER_CATEGORY
#define RENDER_PRESETS_RENDER_ELEMENTS_CATEGORY
#undef  RENDER_PRESETS_INCLUDE_RAYTRACER_IN_COMMON_CATEGORY
#undef  RENDER_PRESETS_INCLUDE_SHADOW_GENERATOR_IN_COMMON_CATEGORY
#undef  SBN_ENABLE_GROUPANDXREF_SORT
#undef  SBN_SELECT_INSTANCES
#undef  SBN_SHOWSUBTREE_DEFAULT_ON
#define SIMPLIFY_AREA_LIGHTS
#undef  SINGLE_RADIOSITY_PLUGIN
#undef  SINGLE_SUPERSAMPLE_IN_RENDER
#define SKYLIGHT_CAN_RENDER_WITHOUT_RADIOSITY
#define SKYLIGHT_COVERAGE_RADIO_BUTTON
#define SPLINE_ADD_CONNECTING_LINES_ON_MOVE
#define SPLINE_ADD_CROSS_SECTION
#define SPLINE_COPY_PASTE_TANGENT
#undef  SUBSTOBJ_NO_CLONE
#undef  SUBSTOBJ_NO_DELETE
#undef  SUBSTOBJ_NO_LINK_UNLINK_NODE
#undef  SUPRESS_DXMATERIAL_DLL_MISSING_MESSAGE
#define TAB_PANEL_SHELF_LAZY_CREATION
#undef  TEXTURES_DIR_BMP_SEARCH_PATH
#undef  TOOLBAR_BUTTON_CAPTIONS
#undef  TRAJECTORY_EDIT_DIALOG
#define USE_CREATE_PANEL_FP
#undef  USE_CUSTOM_MATNAV
#undef  USE_DISPLAY_PANEL_ACTIONS
#undef  USE_EMESH_SIMPLE_UI
#undef  USE_FLOATING_VIEWPORT_NAVIGATION_TOOLS
#undef  USE_GMAX_SECURITY
#undef  USE_HARDCODED_SYSTEM_UNIT
#undef  USE_INTEGRITY_CHECK
#undef  USE_LIMITED_STDMTL
#undef  USE_LIMITEDRENDERER
#undef  USE_MAX_VIEWPANEL_STARTUP
#undef  USE_MINSTATPANEL
#undef  USE_MISSING_DLL_DIALOG_OPTION
#define USE_OBJECTDBX20_SDK
#undef  USE_ONE_MTL_SLOT
#undef  USE_PEROBJECT_URL
#undef  USE_PRODUCT_SDK_VER
#undef  USE_RENDER_REGION_SIMPLIFIED
#undef  USE_SELECTION_FILTERS_BASIC_FILTERS_ONLY
#undef  USE_SIMPLIFIED_SMOOTH_MODIFIER_UI
#undef  USE_SIMPLIFIED_UVWMAP_UI
#undef  USE_SPRING_MAXSCRIPT_STUB
#undef  USE_STATPANEL_VIZ3_SNAP_TOGGLE_UI
#define USE_STATUSPANEL_FP
#undef  USE_TEXT_TAB_LABELS
#undef  USE_TOOLBOX
#undef  USE_VIZR3_CAMERA_MESH
#undef  USE_WEB_VISIT_DIALOG
#define USE_ACTIONITEM_STANDIN
#define DBG_ACTIONITEM_STANDIN
#undef  USING_SINGLE_SHADOW_GENERATOR
#define UVW_XFORM_ON_SELECTED_FACES
#undef  VIZR_RESOURCE_OVERRIDE
#undef  PRIVATE_XML_MATERIAL_EXPORTER
#define LINKEDOBJ_ALLMSG_OFF
#define LINKEDOBJ_NO_OBJREF_REPLACE
#define LINKEDOBJ_OK_TO_APPLY_ANY_MODIFIER
#undef  NO_OBJ_PROP_USER_PROPERTIES
#undef  INSTANCEMGR_MODIFIER_PROPAGATION
#undef  INSTANCEMGR_NODE_PROPERTIES_PROPAGATION
#undef  INSTANCEMGR_MAKE_UNIQUE
#undef  NEW_SOA
#undef  WRITE_CSV_KBD_CHART
#define PHYSICAL_SCALE_UVS
#undef  ASSIGN_MAPMOD_TYPE_FROM_INPUT
#define USE_CFGMGR_IN_SAMPLES
#undef  TP_GENERAL
#undef  TP_SINGLE_DYNAMIC_MTL_PALETTE
#undef  TP_DYNAMIC_TOOL_OVERLAYS
#undef  TP_SUPPRESS_MULTI_EXPANSION
#undef  TP_MTL_THUMBNAILS_INMEMORY
#undef  TP_MTL_THUMBNAILS_LIMITED
#undef  TP_MTL_PALETTE_TOOLBAR
#undef  TP_FLAG_UNCERTIFIED_XML_MTLS
#undef  TP_MTLREF_PSEUDO_PROPERTIES
#undef  TP_USE_DEFAULT_WORKSPACE
#undef  TP_GROUP_PERSISTENCE
#undef  TP_SUSPEND_FOR_FILELINK
#define NO_RAYTRACE_MERGE_TRACKS_DLG
#undef  NO_ACTIVEOBJECT_API
#define XREF_CTRL
#undef  NO_RENDER_UVW


#ifndef APSTUDIO_INVOKED
#define TABBED_RENDER_DIALOG
#define NO_DAYLIGHT_SKY_COVERAGE_SLIDER
#undef  PRIVATE_VERTEX_PAINT
#undef  USE_ORIGINAL_VERTEX_PAINT
#define NORMAL_MAPPING_RTT_BAKE_ELEMENT
#define VERTEX_WELD
#undef  PRIVATE_BIPED
#undef  PRIVATE_PARAMETER_EDITOR
#undef  PRIVATE_SCENE_EFFECT_LOADER
#endif // #ifndef APSTUDIO_INVOKED

#ifdef NDEBUG
#undef  NO_MAXSCRIPT_UI
#endif // #ifdef NDEBUG

#ifdef WIN64
#undef  NO_SOFTLOCK
#undef  NO_ASHLI_LIB
#undef  NO_OBJECT_DBX
#define NO_ACAD_RASTER
#undef  NO_GELIB
#endif // #ifdef WIN64



// These includes rely on symbols defined in this file. Don't move them at the
// top of the file. No need to include them in any other file.
#include "ProductFileSupport.h"
#include "ProductDefaults.h"
#endif // BUILDVER_H


