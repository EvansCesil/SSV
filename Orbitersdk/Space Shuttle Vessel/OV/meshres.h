// ======================================================
// Created by ssvmeshc 1.1
// Input file: OV.msh
// ======================================================

#ifndef _MESH_OV_H_
#define _MESH_OV_H_

inline constexpr unsigned int NUMGRP = 252;
inline constexpr unsigned int NUMMAT = 7;
inline constexpr unsigned int NUMTEX = 17;

inline constexpr unsigned int GRP_PLBD_EXTERIOR_RIGHT	=	0;	//PLBD_EXTERIOR_RIGHT
inline constexpr unsigned int GRP_PLB_VENT_DOOR_FILTER_SCREENS	=	1;	//PLB_VENT_DOOR_FILTER_SCREENS
inline constexpr unsigned int GRP_PLB_VENT_DOOR_FILTER_SCREENS_VENT_DOOR_4	=	2;	//PLB_VENT_DOOR_FILTER_SCREENS_VENT_DOOR_4
inline constexpr unsigned int GRP_XO576_BULKHEAD	=	3;	//Xo576_BULKHEAD
inline constexpr unsigned int GRP_XO582_FRAME	=	4;	//Xo582_FRAME
inline constexpr unsigned int GRP_PLB_LONGERON_SILL	=	5;	//PLB_LONGERON_SILL
inline constexpr unsigned int GRP_RADIATOR_2_INLET_HOSE_RIGHT	=	6;	//RADIATOR_2_INLET_HOSE_RIGHT
inline constexpr unsigned int GRP_RADIATOR_4_OUTLET_3_INLET_HOSE_RIGHT	=	7;	//RADIATOR_4_OUTLET_3_INLET_HOSE_RIGHT
inline constexpr unsigned int GRP_RADIATOR_4_INLET_HOSE_RIGHT	=	8;	//RADIATOR_4_INLET_HOSE_RIGHT
inline constexpr unsigned int GRP_RADIATOR_2_OUTLET_1_INLET_HOSE_RIGHT	=	9;	//RADIATOR_2_OUTLET_1_INLET_HOSE_RIGHT
inline constexpr unsigned int GRP_RADIATOR_3_OUTLET_HOSE_RIGHT	=	10;	//RADIATOR_3_OUTLET_HOSE_RIGHT
inline constexpr unsigned int GRP_RADIATOR_1_OUTLET_HOSE_RIGHT	=	11;	//RADIATOR_1_OUTLET_HOSE_RIGHT
inline constexpr unsigned int GRP_RADIATOR_OUTLET_HOSE_ASSEMBLY_LEFT	=	12;	//RADIATOR_OUTLET_HOSE_ASSEMBLY_LEFT
inline constexpr unsigned int GRP_RADIATOR_OUTLET_HOSE_ASSEMBLY_RIGHT	=	13;	//RADIATOR_OUTLET_HOSE_ASSEMBLY_RIGHT
inline constexpr unsigned int GRP_RADIATOR_INLET_HOSE_ASSEMBLY_RIGHT	=	14;	//RADIATOR_INLET_HOSE_ASSEMBLY_RIGHT
inline constexpr unsigned int GRP_RADIATOR_INLET_HOSE_ASSEMBLY_LEFT	=	15;	//RADIATOR_INLET_HOSE_ASSEMBLY_LEFT
inline constexpr unsigned int GRP_PLBD_ACTUATOR_PUSH_PULL_ROD_RIGHT	=	16;	//PLBD_ACTUATOR_PUSH_PULL_ROD_RIGHT
inline constexpr unsigned int GRP_PLBD_ACTUATOR_PUSH_PULL_ROD_LEFT	=	17;	//PLBD_ACTUATOR_PUSH_PULL_ROD_LEFT
inline constexpr unsigned int GRP_PLBD_CRANK_RIGHT	=	18;	//PLBD_CRANK_RIGHT
inline constexpr unsigned int GRP_PLBD_LINK_RIGHT	=	19;	//PLBD_LINK_RIGHT
inline constexpr unsigned int GRP_SLIDEWIRE_BASE	=	20;	//SLIDEWIRE_BASE
inline constexpr unsigned int GRP_PLB_LONGERON_STRUCTURES	=	21;	//PLB_LONGERON_STRUCTURES
inline constexpr unsigned int GRP_PLBD_LINK_LEFT	=	22;	//PLBD_LINK_LEFT
inline constexpr unsigned int GRP_PLBD_CRANK_LEFT	=	23;	//PLBD_CRANK_LEFT
inline constexpr unsigned int GRP_BODYFLAP	=	24;	//BODYFLAP
inline constexpr unsigned int GRP_HANDRAILS_PLBD_RIGHT	=	25;	//HANDRAILS_PLBD_RIGHT
inline constexpr unsigned int GRP_HANDRAILS_PLBD_LEFT	=	26;	//HANDRAILS_PLBD_LEFT
inline constexpr unsigned int GRP_FWD_BULKHEAD_LIGHT	=	27;	//FWD_BULKHEAD_LIGHT
inline constexpr unsigned int GRP_DOCKING_LIGHT	=	28;	//DOCKING_LIGHT
inline constexpr unsigned int GRP_PLB_WIRE_TRAY	=	29;	//PLB_WIRE_TRAY
inline constexpr unsigned int GRP_XO576_BULKHEAD_EQUIPMENT	=	30;	//Xo576_BULKHEAD_EQUIPMENT
inline constexpr unsigned int GRP_PURGE_DUCTS	=	31;	//PURGE_DUCTS
inline constexpr unsigned int GRP_HANDRAILS_FIXED	=	32;	//HANDRAILS_FIXED
inline constexpr unsigned int GRP_HANDRAILS_REMOVABLE_ORIGINAL	=	33;	//HANDRAILS_REMOVABLE_ORIGINAL
inline constexpr unsigned int GRP_HANDRAILS_REMOVABLE_103SUBS	=	34;	//HANDRAILS_REMOVABLE_103SUBS
inline constexpr unsigned int GRP_EVA_HATCH_THERMAL_COVER	=	35;	//EVA_HATCH_THERMAL_COVER
inline constexpr unsigned int GRP_PLB_BULB_SEAL	=	36;	//PLB_BULB_SEAL
inline constexpr unsigned int GRP_PLB_MONKEY_FUR	=	37;	//PLB_MONKEY_FUR
inline constexpr unsigned int GRP_ET_DOOR_LEFT_EXTERIOR	=	38;	//ET_DOOR_LEFT_EXTERIOR
inline constexpr unsigned int GRP_ET_DOOR_LEFT_INTERIOR	=	39;	//ET_DOOR_LEFT_INTERIOR
inline constexpr unsigned int GRP_ET_DOOR_RIGHT_EXTERIOR	=	40;	//ET_DOOR_RIGHT_EXTERIOR
inline constexpr unsigned int GRP_ET_DOOR_RIGHT_INTERIOR	=	41;	//ET_DOOR_RIGHT_INTERIOR
inline constexpr unsigned int GRP_STAR_TRACKERS	=	42;	//STAR_TRACKERS
inline constexpr unsigned int GRP_T0_UMBILICAL_PLATES	=	43;	//T0_UMBILICAL_PLATES
inline constexpr unsigned int GRP_PLBD_EXTERIOR_LEFT	=	44;	//PLBD_EXTERIOR_LEFT
inline constexpr unsigned int GRP_RIGHT_OUTBOARD_ELEVON	=	45;	//RIGHT_OUTBOARD_ELEVON
inline constexpr unsigned int GRP_SLIDEWIRE_CUSHION_RIGHT	=	46;	//SLIDEWIRE_CUSHION_RIGHT
inline constexpr unsigned int GRP_SLIDEWIRE_LINKS_RIGHT	=	47;	//SLIDEWIRE_LINKS_RIGHT
inline constexpr unsigned int GRP_SLIDEWIRE_BRACKETS_RIGHT	=	48;	//SLIDEWIRE_BRACKETS_RIGHT
inline constexpr unsigned int GRP_MIDBODYT0_UMBILICAL_CAVITIES	=	49;	//MIDBODYT0_UMBILICAL_CAVITIES
inline constexpr unsigned int GRP_OME_EYELID_LEFT	=	50;	//OME_EYELID_LEFT
inline constexpr unsigned int GRP_OME_LEFT	=	51;	//OME_LEFT
inline constexpr unsigned int GRP_OME_RIGHT	=	52;	//OME_RIGHT
inline constexpr unsigned int GRP_OME_EYELID_RIGHT	=	53;	//OME_EYELID_RIGHT
inline constexpr unsigned int GRP_CCTV_PTU_CAM_C	=	54;	//CCTV_PTU_CAM_C
inline constexpr unsigned int GRP_CCTV_PTU_CAM_B	=	55;	//CCTV_PTU_CAM_B
inline constexpr unsigned int GRP_CCTV_PTU_CAM_D	=	56;	//CCTV_PTU_CAM_D
inline constexpr unsigned int GRP_CCTV_PTU_CAM_A	=	57;	//CCTV_PTU_CAM_A
inline constexpr unsigned int GRP_CCTV_CAM_D	=	58;	//CCTV_CAM_D
inline constexpr unsigned int GRP_CCTV_CAM_C	=	59;	//CCTV_CAM_C
inline constexpr unsigned int GRP_CCTV_CAM_B	=	60;	//CCTV_CAM_B
inline constexpr unsigned int GRP_VENT_DOOR_LEFT_1	=	61;	//VENT_DOOR_LEFT_1
inline constexpr unsigned int GRP_VENT_DOOR_LEFT_2	=	62;	//VENT_DOOR_LEFT_2
inline constexpr unsigned int GRP_VENT_DOOR_LEFT_3	=	63;	//VENT_DOOR_LEFT_3
inline constexpr unsigned int GRP_VENT_DOOR_LEFT_4	=	64;	//VENT_DOOR_LEFT_4
inline constexpr unsigned int GRP_VENT_DOOR_LEFT_5	=	65;	//VENT_DOOR_LEFT_5
inline constexpr unsigned int GRP_VENT_DOOR_LEFT_6	=	66;	//VENT_DOOR_LEFT_6
inline constexpr unsigned int GRP_VENT_DOOR_LEFT_7	=	67;	//VENT_DOOR_LEFT_7
inline constexpr unsigned int GRP_VENT_DOOR_LEFT_8	=	68;	//VENT_DOOR_LEFT_8
inline constexpr unsigned int GRP_VENT_DOOR_LEFT_9	=	69;	//VENT_DOOR_LEFT_9
inline constexpr unsigned int GRP_VENT_DOOR_RIGHT_1	=	70;	//VENT_DOOR_RIGHT_1
inline constexpr unsigned int GRP_VENT_DOOR_RIGHT_2	=	71;	//VENT_DOOR_RIGHT_2
inline constexpr unsigned int GRP_VENT_DOOR_RIGHT_3	=	72;	//VENT_DOOR_RIGHT_3
inline constexpr unsigned int GRP_VENT_DOOR_RIGHT_4	=	73;	//VENT_DOOR_RIGHT_4
inline constexpr unsigned int GRP_VENT_DOOR_RIGHT_5	=	74;	//VENT_DOOR_RIGHT_5
inline constexpr unsigned int GRP_VENT_DOOR_RIGHT_6	=	75;	//VENT_DOOR_RIGHT_6
inline constexpr unsigned int GRP_VENT_DOOR_RIGHT_7	=	76;	//VENT_DOOR_RIGHT_7
inline constexpr unsigned int GRP_VENT_DOOR_RIGHT_8	=	77;	//VENT_DOOR_RIGHT_8
inline constexpr unsigned int GRP_VENT_DOOR_RIGHT_9	=	78;	//VENT_DOOR_RIGHT_9
inline constexpr unsigned int GRP_CCTV_CAM_A	=	79;	//CCTV_CAM_A
inline constexpr unsigned int GRP_WINGBOX_MLI_TCS	=	80;	//WINGBOX_MLI_TCS
inline constexpr unsigned int GRP_RSB_ACTUATORS	=	81;	//RSB_ACTUATORS
inline constexpr unsigned int GRP_RSB_ACTUATORS_LEFT	=	82;	//RSB_ACTUATORS_LEFT
inline constexpr unsigned int GRP_RSB_ACTUATORS_RIGHT	=	83;	//RSB_ACTUATORS_RIGHT
inline constexpr unsigned int GRP_RSB_ACTUATOR_ARMS_LEFT	=	84;	//RSB_ACTUATOR_ARMS_LEFT
inline constexpr unsigned int GRP_RSB_ACTUATOR_ARMS_RIGHT	=	85;	//RSB_ACTUATOR_ARMS_RIGHT
inline constexpr unsigned int GRP_RSB_CONICAL_SEAL	=	86;	//RSB_CONICAL_SEAL
inline constexpr unsigned int GRP_RSB_CONICAL_SEAL_LEFT	=	87;	//RSB_CONICAL_SEAL_LEFT
inline constexpr unsigned int GRP_RSB_CONICAL_SEAL_RIGHT	=	88;	//RSB_CONICAL_SEAL_RIGHT
inline constexpr unsigned int GRP_RSB_PANEL_LEFT	=	89;	//RSB_PANEL_LEFT
inline constexpr unsigned int GRP_RSB_PANEL_RIGHT	=	90;	//RSB_PANEL_RIGHT
inline constexpr unsigned int GRP_OMS_POD_CORNER_TILES_LEFT	=	91;	//OMS_POD_CORNER_TILES_LEFT
inline constexpr unsigned int GRP_OMS_POD_CORNER_TILES_RIGHT	=	92;	//OMS_POD_CORNER_TILES_RIGHT
inline constexpr unsigned int GRP_LEFT_OUTBOARD_ELEVON	=	93;	//LEFT_OUTBOARD_ELEVON
inline constexpr unsigned int GRP_ET_UMBILICAL_WELL_SIDES	=	94;	//ET_UMBILICAL_WELL_SIDES
inline constexpr unsigned int GRP_ET_UMBILICAL_WELL_BACK_PLATES	=	95;	//ET_UMBILICAL_WELL_BACK_PLATES
inline constexpr unsigned int GRP_ET_UMBILICAL_LOX_DISCONNECT_CURTAIN	=	96;	//ET_UMBILICAL_LOX_DISCONNECT_CURTAIN
inline constexpr unsigned int GRP_ET_UMBILICAL_LOX_ELECTRICAL_DISCONNECT	=	97;	//ET_UMBILICAL_LOX_ELECTRICAL_DISCONNECT
inline constexpr unsigned int GRP_SIDE_HATCH	=	98;	//SIDE_HATCH
inline constexpr unsigned int GRP_ET_UMBILICAL_LH2_DISCONNECT_CURTAIN	=	99;	//ET_UMBILICAL_LH2_DISCONNECT_CURTAIN
inline constexpr unsigned int GRP_ET_UMBILICAL_LH2_ELECTRICAL_DISCONNECT	=	100;	//ET_UMBILICAL_LH2_ELECTRICAL_DISCONNECT
inline constexpr unsigned int GRP_ET_UMBILICAL_LOX_DISCONNECT_PLATE	=	101;	//ET_UMBILICAL_LOX_DISCONNECT_PLATE
inline constexpr unsigned int GRP_ET_UMBILICAL_LH2_DISCONNECT_PLATE	=	102;	//ET_UMBILICAL_LH2_DISCONNECT_PLATE
inline constexpr unsigned int GRP_ET_UMBILICAL_LOX_FEEDLINE_DISCONNECT	=	103;	//ET_UMBILICAL_LOX_FEEDLINE_DISCONNECT
inline constexpr unsigned int GRP_ET_UMBILICAL_LH2_FEEDLINE_DISCONNECT	=	104;	//ET_UMBILICAL_LH2_FEEDLINE_DISCONNECT
inline constexpr unsigned int GRP_SLIDEWIRE_BRACKETS_LEFT	=	105;	//SLIDEWIRE_BRACKETS_LEFT
inline constexpr unsigned int GRP_SLIDEWIRE_LINKS_LEFT	=	106;	//SLIDEWIRE_LINKS_LEFT
inline constexpr unsigned int GRP_ADP_RIGHT	=	107;	//ADP_RIGHT
inline constexpr unsigned int GRP_ADP_BASE_RIGHT_EXTERIOR	=	108;	//ADP_BASE_RIGHT_EXTERIOR
inline constexpr unsigned int GRP_ADP_BASE_RIGHT_INTERIOR	=	109;	//ADP_BASE_RIGHT_INTERIOR
inline constexpr unsigned int GRP_LEFT_INBOARD_ELEVON	=	110;	//LEFT_INBOARD_ELEVON
inline constexpr unsigned int GRP_STAR_TRACKER_DOOR_Y	=	111;	//STAR_TRACKER_DOOR_Y
inline constexpr unsigned int GRP_STAR_TRACKER_DOOR_Z	=	112;	//STAR_TRACKER_DOOR_Z
inline constexpr unsigned int GRP_SLIDEWIRE_CUSHION_LEFT	=	113;	//SLIDEWIRE_CUSHION_LEFT
inline constexpr unsigned int GRP_RIGHT_INBOARD_ELEVON	=	114;	//RIGHT_INBOARD_ELEVON
inline constexpr unsigned int GRP_ET_DOOR_DDM_LINK_RODS_RIGHT	=	115;	//ET_DOOR_DDM_LINK_RODS_RIGHT
inline constexpr unsigned int GRP_ET_DOOR_DDM_ARMS_RIGHT	=	116;	//ET_DOOR_DDM_ARMS_RIGHT
inline constexpr unsigned int GRP_ET_DOOR_DDM_ARMS_LEFT	=	117;	//ET_DOOR_DDM_ARMS_LEFT
inline constexpr unsigned int GRP_ET_DOOR_DDM_LINK_RODS_LEFT	=	118;	//ET_DOOR_DDM_LINK_RODS_LEFT
inline constexpr unsigned int GRP_KU_BAND_EA_CABLE_BUNDLES	=	119;	//KU_BAND_EA_CABLE_BUNDLES
inline constexpr unsigned int GRP_KU_BAND_DMA_ACTUATOR	=	120;	//KU_BAND_DMA_ACTUATOR
inline constexpr unsigned int GRP_PLB_RING_FRAMES	=	121;	//PLB_RING_FRAMES
inline constexpr unsigned int GRP_PLBD_CL_LATCHES_RIGHT	=	122;	//PLBD_CL_LATCHES_RIGHT
inline constexpr unsigned int GRP_PLBD_STRUCTURE_RIGHT	=	123;	//PLBD_STRUCTURE_RIGHT
inline constexpr unsigned int GRP_PLBD_CL_LATCHES_5_8	=	124;	//PLBD_CL_LATCHES_5_8
inline constexpr unsigned int GRP_RADIATOR_2_LEFT	=	125;	//RADIATOR_2_LEFT
inline constexpr unsigned int GRP_RADIATOR_2_RIGHT	=	126;	//RADIATOR_2_RIGHT
inline constexpr unsigned int GRP_RADIATOR_1_LEFT	=	127;	//RADIATOR_1_LEFT
inline constexpr unsigned int GRP_PLBD_CL_LATCHES_1_4	=	128;	//PLBD_CL_LATCHES_1_4
inline constexpr unsigned int GRP_RADIATOR_1_RIGHT	=	129;	//RADIATOR_1_RIGHT
inline constexpr unsigned int GRP_PLBD_CL_LATCHES_9_12	=	130;	//PLBD_CL_LATCHES_9_12
inline constexpr unsigned int GRP_PLBD_CL_LATCHES_13_16	=	131;	//PLBD_CL_LATCHES_13_16
inline constexpr unsigned int GRP_RADIATOR_3_LEFT	=	132;	//RADIATOR_3_LEFT
inline constexpr unsigned int GRP_RADIATOR_4_LEFT	=	133;	//RADIATOR_4_LEFT
inline constexpr unsigned int GRP_RADIATOR_4_RIGHT	=	134;	//RADIATOR_4_RIGHT
inline constexpr unsigned int GRP_RADIATOR_3_RIGHT	=	135;	//RADIATOR_3_RIGHT
inline constexpr unsigned int GRP_NLG_RIMS	=	136;	//NLG_RIMS
inline constexpr unsigned int GRP_NLG_TIRES	=	137;	//NLG_TIRES
inline constexpr unsigned int GRP_MLG_RIGHT_DOOR_EXTERIOR	=	138;	//MLG_RIGHT_DOOR_EXTERIOR
inline constexpr unsigned int GRP_MLG_RIGHT_DOOR_INTERIOR	=	139;	//MLG_RIGHT_DOOR_INTERIOR
inline constexpr unsigned int GRP_MLG_RIGHT_RIMS	=	140;	//MLG_RIGHT_RIMS
inline constexpr unsigned int GRP_MLG_RIGHT_SHOCK_STRUT	=	141;	//MLG_RIGHT_SHOCK_STRUT
inline constexpr unsigned int GRP_MLG_RIGHT_STRUT	=	142;	//MLG_RIGHT_STRUT
inline constexpr unsigned int GRP_MLG_RIGHT_STRUT_SILVER	=	143;	//MLG_RIGHT_STRUT_SILVER
inline constexpr unsigned int GRP_MLG_RIGHT_TIRES	=	144;	//MLG_RIGHT_TIRES
inline constexpr unsigned int GRP_WHEEL_WELLS	=	145;	//WHEEL_WELLS
inline constexpr unsigned int GRP_MLG_LEFT_DOOR_EXTERIOR	=	146;	//MLG_LEFT_DOOR_EXTERIOR
inline constexpr unsigned int GRP_MLG_LEFT_DOOR_INTERIOR	=	147;	//MLG_LEFT_DOOR_INTERIOR
inline constexpr unsigned int GRP_NLG_TORQUE_ARM_LOWER	=	148;	//NLG_TORQUE_ARM_LOWER
inline constexpr unsigned int GRP_NLG_TORQUE_ARM_UPPER	=	149;	//NLG_TORQUE_ARM_UPPER
inline constexpr unsigned int GRP_NLG_SHOCK_STRUT	=	150;	//NLG_SHOCK_STRUT
inline constexpr unsigned int GRP_NLG_STRUT	=	151;	//NLG_STRUT
inline constexpr unsigned int GRP_MLG_LEFT_STRUT	=	152;	//MLG_LEFT_STRUT
inline constexpr unsigned int GRP_MLG_LEFT_STRUT_SILVER	=	153;	//MLG_LEFT_STRUT_SILVER
inline constexpr unsigned int GRP_MLG_LEFT_SHOCK_STRUT	=	154;	//MLG_LEFT_SHOCK_STRUT
inline constexpr unsigned int GRP_MLG_LEFT_RIMS	=	155;	//MLG_LEFT_RIMS
inline constexpr unsigned int GRP_MLG_LEFT_TIRES	=	156;	//MLG_LEFT_TIRES
inline constexpr unsigned int GRP_NLG_DOOR_LEFT_EXTERIOR	=	157;	//NLG_DOOR_LEFT_EXTERIOR
inline constexpr unsigned int GRP_NLG_DOOR_RIGHT_EXTERIOR	=	158;	//NLG_DOOR_RIGHT_EXTERIOR
inline constexpr unsigned int GRP_NLG_DOOR_LEFT_INTERIOR	=	159;	//NLG_DOOR_LEFT_INTERIOR
inline constexpr unsigned int GRP_NLG_DOOR_RIGHT_INTERIOR	=	160;	//NLG_DOOR_RIGHT_INTERIOR
inline constexpr unsigned int GRP_OMS_POD_RIGHT	=	161;	//OMS_POD_RIGHT
inline constexpr unsigned int GRP_PLB_LIGHTS	=	162;	//PLB_LIGHTS
inline constexpr unsigned int GRP_XO1307_BULKHEAD	=	163;	//Xo1307_BULKHEAD
inline constexpr unsigned int GRP_PLBD_CL_LATCHES_LEFT	=	164;	//PLBD_CL_LATCHES_LEFT
inline constexpr unsigned int GRP_PLBD_CL_SEAL_LEFT	=	165;	//PLBD_CL_SEAL_LEFT
inline constexpr unsigned int GRP_PLBD_CL_SEAL_RIGHT	=	166;	//PLBD_CL_SEAL_RIGHT
inline constexpr unsigned int GRP_PLBD_INTERIOR_LEFT	=	167;	//PLBD_INTERIOR_LEFT
inline constexpr unsigned int GRP_PLBD_STRUCTURE_LEFT	=	168;	//PLBD_STRUCTURE_LEFT
inline constexpr unsigned int GRP_RADIATOR_1_OUTLET_HOSE_LEFT	=	169;	//RADIATOR_1_OUTLET_HOSE_LEFT
inline constexpr unsigned int GRP_RADIATOR_2_INLET_HOSE_LEFT	=	170;	//RADIATOR_2_INLET_HOSE_LEFT
inline constexpr unsigned int GRP_RADIATOR_2_OUTLET_1_INLET_HOSE_LEFT	=	171;	//RADIATOR_2_OUTLET_1_INLET_HOSE_LEFT
inline constexpr unsigned int GRP_RADIATOR_3_OUTLET_HOSE_LEFT	=	172;	//RADIATOR_3_OUTLET_HOSE_LEFT
inline constexpr unsigned int GRP_RADIATOR_4_INLET_HOSE_LEFT	=	173;	//RADIATOR_4_INLET_HOSE_LEFT
inline constexpr unsigned int GRP_RADIATOR_4_OUTLET_3_INLET_HOSE_LEFT	=	174;	//RADIATOR_4_OUTLET_3_INLET_HOSE_LEFT
inline constexpr unsigned int GRP_OMS_POD_LEFT	=	175;	//OMS_POD_LEFT
inline constexpr unsigned int GRP_PLBD_MONKEY_FUR_RIGHT	=	176;	//PLBD_MONKEY_FUR_RIGHT
inline constexpr unsigned int GRP_PLBD_MONKEY_FUR_LEFT	=	177;	//PLBD_MONKEY_FUR_LEFT
inline constexpr unsigned int GRP_RCS	=	178;	//RCS
inline constexpr unsigned int GRP_DUMP_LINE_COVER_PORT	=	179;	//DUMP_LINE_COVER_PORT
inline constexpr unsigned int GRP_DUMP_LINE_COVER_STARBOARD	=	180;	//DUMP_LINE_COVER_STARBOARD
inline constexpr unsigned int GRP_FRCS_POD	=	181;	//FRCS_POD
inline constexpr unsigned int GRP_DOOR_45	=	182;	//DOOR_45
inline constexpr unsigned int GRP_T4_UMBILICAL_PANEL_COVER_PORT	=	183;	//T4_UMBILICAL_PANEL_COVER_PORT
inline constexpr unsigned int GRP_T4_UMBILICAL_PANEL_COVER_STARBOARD	=	184;	//T4_UMBILICAL_PANEL_COVER_STARBOARD
inline constexpr unsigned int GRP_PLBD_BULKHEAD_LATCH_ROLLERS	=	185;	//PLBD_BULKHEAD_LATCH_ROLLERS
inline constexpr unsigned int GRP_AFT_WINCH	=	186;	//AFT_WINCH
inline constexpr unsigned int GRP_XO1307_BULKHEAD_EQUIPMENT	=	187;	//Xo1307_BULKHEAD_EQUIPMENT
inline constexpr unsigned int GRP_PLBD_INTERIOR_RIGHT	=	188;	//PLBD_INTERIOR_RIGHT
inline constexpr unsigned int GRP_MMU_FSS_INTERFACE_PANELS	=	189;	//MMU_FSS_INTERFACE_PANELS
inline constexpr unsigned int GRP_PAYLOAD_INTERFACE_PANELS	=	190;	//PAYLOAD_INTERFACE_PANELS
inline constexpr unsigned int GRP_WINDOWS	=	191;	//WINDOWS
inline constexpr unsigned int GRP_HOIST_STRUCTURE	=	192;	//HOIST_STRUCTURE
inline constexpr unsigned int GRP_FWD_BULKHEAD_LINES	=	193;	//FWD_BULKHEAD_LINES
inline constexpr unsigned int GRP_PLBD_HINGE_DOUBLE_FAIRING_AFT	=	194;	//PLBD_HINGE_DOUBLE_FAIRING_AFT
inline constexpr unsigned int GRP_PLBD_HINGE_DOUBLE_FAIRING_FWD	=	195;	//PLBD_HINGE_DOUBLE_FAIRING_FWD
inline constexpr unsigned int GRP_PLBD_HINGE_SINGLE_FAIRING_AFT	=	196;	//PLBD_HINGE_SINGLE_FAIRING_AFT
inline constexpr unsigned int GRP_PLBD_HINGE_SINGLE_FAIRING_FWD	=	197;	//PLBD_HINGE_SINGLE_FAIRING_FWD
inline constexpr unsigned int GRP_HOIST_ATTACH_FITTING_COVERS	=	198;	//HOIST_ATTACH_FITTING_COVERS
inline constexpr unsigned int GRP_FUSELAGE_UNDERSIDE	=	199;	//FUSELAGE_UNDERSIDE
inline constexpr unsigned int GRP_WING_RCC	=	200;	//Wing_RCC
inline constexpr unsigned int GRP_NOSE_RCC	=	201;	//Nose_RCC
inline constexpr unsigned int GRP_FUSELAGE_WING	=	202;	//FUSELAGE_WING
inline constexpr unsigned int GRP_ADP_BASE_LEFT_EXTERIOR	=	203;	//ADP_BASE_LEFT_EXTERIOR
inline constexpr unsigned int GRP_ADP_BASE_LEFT_INTERIOR	=	204;	//ADP_BASE_LEFT_INTERIOR
inline constexpr unsigned int GRP_ADP_LEFT	=	205;	//ADP_LEFT
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_1	=	206;	//ELEVON_SEAL_PANEL_LEFT_1
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_2	=	207;	//ELEVON_SEAL_PANEL_LEFT_2
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_3	=	208;	//ELEVON_SEAL_PANEL_LEFT_3
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_4	=	209;	//ELEVON_SEAL_PANEL_LEFT_4
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_5	=	210;	//ELEVON_SEAL_PANEL_LEFT_5
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_6	=	211;	//ELEVON_SEAL_PANEL_LEFT_6
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_7	=	212;	//ELEVON_SEAL_PANEL_LEFT_7
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_8	=	213;	//ELEVON_SEAL_PANEL_LEFT_8
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_9	=	214;	//ELEVON_SEAL_PANEL_LEFT_9
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_10	=	215;	//ELEVON_SEAL_PANEL_LEFT_10
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_11	=	216;	//ELEVON_SEAL_PANEL_LEFT_11
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_12	=	217;	//ELEVON_SEAL_PANEL_LEFT_12
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_13	=	218;	//ELEVON_SEAL_PANEL_LEFT_13
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_14	=	219;	//ELEVON_SEAL_PANEL_LEFT_14
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_LEFT_15	=	220;	//ELEVON_SEAL_PANEL_LEFT_15
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_1	=	221;	//ELEVON_SEAL_PANEL_RIGHT_1
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_2	=	222;	//ELEVON_SEAL_PANEL_RIGHT_2
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_3	=	223;	//ELEVON_SEAL_PANEL_RIGHT_3
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_4	=	224;	//ELEVON_SEAL_PANEL_RIGHT_4
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_5	=	225;	//ELEVON_SEAL_PANEL_RIGHT_5
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_6	=	226;	//ELEVON_SEAL_PANEL_RIGHT_6
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_7	=	227;	//ELEVON_SEAL_PANEL_RIGHT_7
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_8	=	228;	//ELEVON_SEAL_PANEL_RIGHT_8
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_9	=	229;	//ELEVON_SEAL_PANEL_RIGHT_9
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_10	=	230;	//ELEVON_SEAL_PANEL_RIGHT_10
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_11	=	231;	//ELEVON_SEAL_PANEL_RIGHT_11
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_12	=	232;	//ELEVON_SEAL_PANEL_RIGHT_12
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_13	=	233;	//ELEVON_SEAL_PANEL_RIGHT_13
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_14	=	234;	//ELEVON_SEAL_PANEL_RIGHT_14
inline constexpr unsigned int GRP_ELEVON_SEAL_PANEL_RIGHT_15	=	235;	//ELEVON_SEAL_PANEL_RIGHT_15
inline constexpr unsigned int GRP_DOOR_44	=	236;	//DOOR_44
inline constexpr unsigned int GRP_DOOR_501	=	237;	//DOOR_50-1
inline constexpr unsigned int GRP_DOOR_502	=	238;	//DOOR_50-2
inline constexpr unsigned int GRP_FUSELAGE_FWD_MID_AFT	=	239;	//FUSELAGE_FWD_MID_AFT
inline constexpr unsigned int GRP_CISS_GH2_VENT_COVER	=	240;	//CISS_GH2_VENT_COVER
inline constexpr unsigned int GRP_RBUS_UMBILICAL_PLATE_HINGE_COVERS	=	241;	//RBUS_UMBILICAL_PLATE_HINGE_COVERS
inline constexpr unsigned int GRP_VENT_CAVITIES	=	242;	//VENT_CAVITIES
inline constexpr unsigned int GRP_ARROWHEAD	=	243;	//ARROWHEAD
inline constexpr unsigned int GRP_ET_DOOR_CL_LATCH_1	=	244;	//ET_DOOR_CL_LATCH_1
inline constexpr unsigned int GRP_ET_DOOR_CL_LATCH_2	=	245;	//ET_DOOR_CL_LATCH_2
inline constexpr unsigned int GRP_CHIN_PANEL_HRSI	=	246;	//CHIN_PANEL_HRSI
inline constexpr unsigned int GRP_CHIN_PANEL_RCC	=	247;	//CHIN_PANEL_RCC
inline constexpr unsigned int GRP_CCTV_BASE_CAM_A	=	248;	//CCTV_BASE_CAM_A
inline constexpr unsigned int GRP_CCTV_BASE_CAM_B	=	249;	//CCTV_BASE_CAM_B
inline constexpr unsigned int GRP_CCTV_BASE_CAM_C	=	250;	//CCTV_BASE_CAM_C
inline constexpr unsigned int GRP_CCTV_BASE_CAM_D	=	251;	//CCTV_BASE_CAM_D

inline constexpr unsigned int MAT_OMSRCS	=	0;	//OMSRCS
inline constexpr unsigned int MAT_MAIN_MATERIAL	=	1;	//MAIN_MATERIAL
inline constexpr unsigned int MAT_REFLECTIVE_MATERIAL	=	2;	//REFLECTIVE_MATERIAL
inline constexpr unsigned int MAT_WINDOWS_MATERIAL	=	3;	//WINDOWS_MATERIAL
inline constexpr unsigned int MAT_HANDRAIL_YELLOW	=	4;	//HANDRAIL_YELLOW
inline constexpr unsigned int MAT_RCC	=	5;	//RCC
inline constexpr unsigned int MAT_METAL	=	6;	//Metal

inline constexpr unsigned int TEX_SSV_OV_OV104_5THMOD	=	1;	//SSV\OV\OV-104_5thmod.dds
inline constexpr unsigned int TEX_SSV_OV_MISC	=	2;	//SSV\OV\Misc.dds
inline constexpr unsigned int TEX_SSV_OV_OMSPOD_7THMOD	=	3;	//SSV\OV\OMSpod_7thmod.dds
inline constexpr unsigned int TEX_SSV_OV_OMSPOD_7THMODA	=	4;	//SSV\OV\OMSpod_7thmod.dds
inline constexpr unsigned int TEX_SSV_KU	=	5;	//SSV\ku.dds
inline constexpr unsigned int TEX_SSV_LIGHTS	=	6;	//SSV\Lights.dds
inline constexpr unsigned int TEX_SSV_OV_LANDINGGEAR	=	7;	//SSV\OV\LandingGear.dds
inline constexpr unsigned int TEX_SSV_CCTV_CAMERAS	=	8;	//SSV\CCTV_Cameras.dds
inline constexpr unsigned int TEX_SSV_OV_MONKEYFUR	=	9;	//SSV\OV\monkeyfur.dds
inline constexpr unsigned int TEX_SSV_OV_PLBD	=	10;	//SSV\OV\PLBD.dds
inline constexpr unsigned int TEX_SSV_OV_RADIATORS	=	11;	//SSV\OV\Radiators.dds
inline constexpr unsigned int TEX_SSV_OV_PLB_WIRETRAY	=	12;	//SSV\OV\PLB_WireTray.dds
inline constexpr unsigned int TEX_SSV_OV_PLB_MLI	=	13;	//SSV\OV\PLB_MLI.dds
inline constexpr unsigned int TEX_SSV_OV_PLB_AFTBULKHEAD_FLAGPORT	=	14;	//SSV\OV\PLB_AftBulkhead_FlagPort.dds
inline constexpr unsigned int TEX_SSV_OV_PLB_FORWARDBULKHEAD	=	15;	//SSV\OV\PLB_ForwardBulkhead.dds
inline constexpr unsigned int TEX_SSV_OV_PLB_MISC	=	16;	//SSV\OV\PLB_Misc.dds
inline constexpr unsigned int TEX_SSV_OV_PLB_LATCHES	=	17;	//SSV\OV\PLB_Latches.dds

#endif// _MESH_OV_H_
