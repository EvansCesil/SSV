// ======================================================
// Created by ssvmeshc 1.1
// Input file: panelA6U.msh
// ======================================================

#ifndef _MESH_PANELA6U_H_
#define _MESH_PANELA6U_H_

inline constexpr unsigned int NUMGRP_A6U_VC = 85;

inline constexpr unsigned int GRP_PANEL_A6U_VC	=	0;	//panel
inline constexpr unsigned int GRP_GUARD_A6U_VC	=	1;	//guard
inline constexpr unsigned int GRP_S1_A6U_VC	=	2;	//S1
inline constexpr unsigned int GRP_S5_A6U_VC	=	3;	//S5
inline constexpr unsigned int GRP_S6_A6U_VC	=	4;	//S6
inline constexpr unsigned int GRP_S7_A6U_VC	=	5;	//S7
inline constexpr unsigned int GRP_S32_A6U_VC	=	6;	//S32
inline constexpr unsigned int GRP_S33_A6U_VC	=	7;	//S33
inline constexpr unsigned int GRP_S34_A6U_VC	=	8;	//S34
inline constexpr unsigned int GRP_S35_A6U_VC	=	9;	//S35
inline constexpr unsigned int GRP_S36_A6U_VC	=	10;	//S36
inline constexpr unsigned int GRP_S39_A6U_VC	=	11;	//S39
inline constexpr unsigned int GRP_S40_A6U_VC	=	12;	//S40
inline constexpr unsigned int GRP_S41_A6U_VC	=	13;	//S41
inline constexpr unsigned int GRP_S42_A6U_VC	=	14;	//S42
inline constexpr unsigned int GRP_S43_A6U_VC	=	15;	//S43
inline constexpr unsigned int GRP_S44_A6U_VC	=	16;	//S44
inline constexpr unsigned int GRP_S45_A6U_VC	=	17;	//S45
inline constexpr unsigned int GRP_S46_A6U_VC	=	18;	//S46
inline constexpr unsigned int GRP_S47_A6U_VC	=	19;	//S47
inline constexpr unsigned int GRP_S2_A6U_VC	=	20;	//S2
inline constexpr unsigned int GRP_S4_A6U_VC	=	21;	//S4
inline constexpr unsigned int GRP_S37_A6U_VC	=	22;	//S37
inline constexpr unsigned int GRP_R1_A6U_VC	=	23;	//R1
inline constexpr unsigned int GRP_R2_A6U_VC	=	24;	//R2
inline constexpr unsigned int GRP_R3_A6U_VC	=	25;	//R3
inline constexpr unsigned int GRP_R4_A6U_VC	=	26;	//R4
inline constexpr unsigned int GRP_R5_A6U_VC	=	27;	//R5
inline constexpr unsigned int GRP_S8_A6U_VC	=	28;	//S8
inline constexpr unsigned int GRP_S9_A6U_VC	=	29;	//S9
inline constexpr unsigned int GRP_S10_A6U_VC	=	30;	//S10
inline constexpr unsigned int GRP_S11_A6U_VC	=	31;	//S11
inline constexpr unsigned int GRP_S12_A6U_VC	=	32;	//S12
inline constexpr unsigned int GRP_S13_A6U_VC	=	33;	//S13
inline constexpr unsigned int GRP_S14_A6U_VC	=	34;	//S14
inline constexpr unsigned int GRP_S15_A6U_VC	=	35;	//S15
inline constexpr unsigned int GRP_S16_A6U_VC	=	36;	//S16
inline constexpr unsigned int GRP_S17_A6U_VC	=	37;	//S17
inline constexpr unsigned int GRP_S18_A6U_VC	=	38;	//S18
inline constexpr unsigned int GRP_S19_A6U_VC	=	39;	//S19
inline constexpr unsigned int GRP_S20_A6U_VC	=	40;	//S20
inline constexpr unsigned int GRP_S21_A6U_VC	=	41;	//S21
inline constexpr unsigned int GRP_S22_A6U_VC	=	42;	//S22
inline constexpr unsigned int GRP_S23_A6U_VC	=	43;	//S23
inline constexpr unsigned int GRP_S24_A6U_VC	=	44;	//S24
inline constexpr unsigned int GRP_S25_A6U_VC	=	45;	//S25
inline constexpr unsigned int GRP_S26_A6U_VC	=	46;	//S26
inline constexpr unsigned int GRP_S27_A6U_VC	=	47;	//S27
inline constexpr unsigned int GRP_S28_A6U_VC	=	48;	//S28
inline constexpr unsigned int GRP_S29_A6U_VC	=	49;	//S29
inline constexpr unsigned int GRP_S30_A6U_VC	=	50;	//S30
inline constexpr unsigned int GRP_S31_A6U_VC	=	51;	//S31
inline constexpr unsigned int GRP_DS1_A6U_VC	=	52;	//DS1
inline constexpr unsigned int GRP_DS2_U_A6U_VC	=	53;	//DS2_U
inline constexpr unsigned int GRP_DS2_L_A6U_VC	=	54;	//DS2_L
inline constexpr unsigned int GRP_DS3_U_A6U_VC	=	55;	//DS3_U
inline constexpr unsigned int GRP_DS3_L_A6U_VC	=	56;	//DS3_L
inline constexpr unsigned int GRP_DS4_U_A6U_VC	=	57;	//DS4_U
inline constexpr unsigned int GRP_DS4_L_A6U_VC	=	58;	//DS4_L
inline constexpr unsigned int GRP_DS8_A6U_VC	=	59;	//DS8
inline constexpr unsigned int GRP_DS9_A6U_VC	=	60;	//DS9
inline constexpr unsigned int GRP_DS10_A6U_VC	=	61;	//DS10
inline constexpr unsigned int GRP_DS11_A6U_VC	=	62;	//DS11
inline constexpr unsigned int GRP_DS12_U_A6U_VC	=	63;	//DS12_U
inline constexpr unsigned int GRP_DS12_L_A6U_VC	=	64;	//DS12_L
inline constexpr unsigned int GRP_DS13_U_A6U_VC	=	65;	//DS13_U
inline constexpr unsigned int GRP_DS13_L_A6U_VC	=	66;	//DS13_L
inline constexpr unsigned int GRP_S38_PUSHWHEEL_10M_A6U_VC	=	67;	//S38_pushwheel_10m
inline constexpr unsigned int GRP_S38_PUSHWHEEL_10S_A6U_VC	=	68;	//S38_pushwheel_10s
inline constexpr unsigned int GRP_S38_PUSHWHEEL_1M_A6U_VC	=	69;	//S38_pushwheel_1m
inline constexpr unsigned int GRP_S38_PUSHWHEEL_1S_A6U_VC	=	70;	//S38_pushwheel_1s
inline constexpr unsigned int GRP_S38_PUSHWHEEL_CASE_A6U_VC	=	71;	//S38_pushwheel_case
inline constexpr unsigned int GRP_S38_PUSHWHEEL_PUSHBUTTON_DOWN_10M_A6U_VC	=	72;	//S38_pushwheel_pushbutton_down_10m
inline constexpr unsigned int GRP_S38_PUSHWHEEL_PUSHBUTTON_DOWN_10S_A6U_VC	=	73;	//S38_pushwheel_pushbutton_down_10s
inline constexpr unsigned int GRP_S38_PUSHWHEEL_PUSHBUTTON_DOWN_1M_A6U_VC	=	74;	//S38_pushwheel_pushbutton_down_1m
inline constexpr unsigned int GRP_S38_PUSHWHEEL_PUSHBUTTON_DOWN_1S_A6U_VC	=	75;	//S38_pushwheel_pushbutton_down_1s
inline constexpr unsigned int GRP_S38_PUSHWHEEL_PUSHBUTTON_UP_10M_A6U_VC	=	76;	//S38_pushwheel_pushbutton_up_10m
inline constexpr unsigned int GRP_S38_PUSHWHEEL_PUSHBUTTON_UP_10S_A6U_VC	=	77;	//S38_pushwheel_pushbutton_up_10s
inline constexpr unsigned int GRP_S38_PUSHWHEEL_PUSHBUTTON_UP_1M_A6U_VC	=	78;	//S38_pushwheel_pushbutton_up_1m
inline constexpr unsigned int GRP_S38_PUSHWHEEL_PUSHBUTTON_UP_1S_A6U_VC	=	79;	//S38_pushwheel_pushbutton_up_1s
inline constexpr unsigned int GRP_S38_THUMBWHEEL_10M_A6U_VC	=	80;	//S38_thumbwheel_10m
inline constexpr unsigned int GRP_S38_THUMBWHEEL_10S_A6U_VC	=	81;	//S38_thumbwheel_10s
inline constexpr unsigned int GRP_S38_THUMBWHEEL_1M_A6U_VC	=	82;	//S38_thumbwheel_1m
inline constexpr unsigned int GRP_S38_THUMBWHEEL_1S_A6U_VC	=	83;	//S38_thumbwheel_1s
inline constexpr unsigned int GRP_S38_THUMBWHEEL_CASE_A6U_VC	=	84;	//S38_thumbwheel_case

#endif// _MESH_PANELA6U_H_
