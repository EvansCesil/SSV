/******* SSV File Modification Notice *******
Date         Developer
2020/04/01   GLS
2020/06/20   GLS
2020/08/24   GLS
2021/01/20   GLS
2021/08/07   GLS
2021/08/23   GLS
2021/08/24   GLS
2022/03/24   GLS
2022/03/28   GLS
2022/06/13   GLS
2022/08/05   GLS
2022/09/14   GLS
2022/09/29   GLS
********************************************/
#include "DedicatedDisplay_SOP.h"
#include <MathSSV.h>
#include "../Atlantis.h"
#include <cassert>


namespace dps
{
	DedicatedDisplay_SOP::DedicatedDisplay_SOP( SimpleGPCSystem *_gpc ):SimpleGPCSoftware( _gpc, "DedicatedDisplay_SOP" )
	{
		primarydistance = 0.0;
		secondarydistance = 0.0;
		primarybearing = 0.0;
		primarybearingtype = 0;
		secondarybearing = 0.0;
		secondarybearingtype = 0;
		coursedeviation = 0.0;
		coursedeviationscale = 0.0;
		glideslopedeviation = 0.0;
		glideslopedeviationscale = 0.0;
		gsflag = false;
		return;
	}

	DedicatedDisplay_SOP::~DedicatedDisplay_SOP( void )
	{
		return;
	}

	void DedicatedDisplay_SOP::Realize( void )
	{
		return;
	}

	void DedicatedDisplay_SOP::OnPostStep( double simt, double simdt, double mjd )
	{
		switch (GetMajorMode())
		{
			case 101:
				Output_HSI_MEDS();
				break;
			case 102:
				Output_HSI_MEDS();
				break;
			case 103:
				Output_HSI_MEDS();
				break;
			case 104:
				Output_HSI_MEDS();
				break;
			case 105:
				break;
			case 106:
				break;
			case 201:
				break;
			case 202:
				break;
			case 301:
				break;
			case 302:
				break;
			case 303:
				break;
			case 304:
				Output_HSI_MEDS();
				break;
			case 305:
				Output_ADI();
				Output_HSI();
				Output_AVVI();
				Output_AMI();
				Output_HUD();
				Output_HSI_MEDS();
				break;
			case 601:
				Output_HSI_MEDS();
				break;
			case 602:
				Output_HSI_MEDS();
				break;
			case 603:
				Output_ADI();
				Output_HSI();
				Output_AVVI();
				Output_AMI();
				Output_HUD();
				Output_HSI_MEDS();
				break;
			case 801:
				break;
		}
		return;
	}

	void DedicatedDisplay_SOP::Output_ADI( void )
	{
		unsigned short tmp = 0;
		unsigned short validity1;
		unsigned short validity2;

		//// DDU ADI data (14) ////
		// ADI data validity (at bottom)
		validity1 = 0x0001;
		validity2 = 0x0001;

		// test word

		// roll sine [-1,+1]
		tmp = Quantize( sin( ReadCOMPOOL_SD( SCP_PHI ) * RAD ), -1.0, 1.0, 12 );
		WriteCOMPOOL_AIS( SCP_DDU1_ADI, 3, tmp, 14 );
		WriteCOMPOOL_AIS( SCP_DDU2_ADI, 3, tmp, 14 );
		validity1 |= 0x0004;
		validity2 |= 0x0004;

		// roll cosine [-1,+1]

		// pitch sine [-1,+1]
		tmp = Quantize( sin( ReadCOMPOOL_SD( SCP_THETA ) * RAD ), -1.0, 1.0, 12 );
		WriteCOMPOOL_AIS( SCP_DDU1_ADI, 5, tmp, 14 );
		WriteCOMPOOL_AIS( SCP_DDU2_ADI, 5, tmp, 14 );
		validity1 |= 0x0010;
		validity2 |= 0x0010;

		// pitch cosine [-1,+1]
		// yaw sine [-1,+1]
		// yaw cosine [-1,+1]
		// roll rate [-10,+10 deg/s]
		// pitch rate [-10,+10 deg/s]
		// yaw rate [-10,+10 deg/s]
		// roll error [-20,+20 deg/s]
		// pitch error [-10,+10 deg/s]
		// yaw error [-10,+10 deg/s]

		WriteCOMPOOL_AIS( SCP_DDU1_ADI, 1, validity1, 14 );
		WriteCOMPOOL_AIS( SCP_DDU2_ADI, 1, validity2, 14 );
		return;
	}

	void DedicatedDisplay_SOP::Output_HSI( void )
	{
		unsigned short tmp = 0;
		unsigned short validity1;
		unsigned short validity2;

		//// DDU HSI data (10) ////
		// HSI data validity (at bottom)
		validity1 = 0x0001;
		validity2 = 0x0001;

		// test word
		// selected course [0,360 deg]
		// heading [0,360 deg]
		// primary bearing [0,360 deg]
		// secondary bearing [0,360 deg]
		// primary distance [0,3999 NM]
		// secondary distance [0,3999 NM]
		// course deviation [-15,+15 deg]

		// glide slope deviation [-6,+6 deg]
		if (ReadCOMPOOL_SD( SCP_H ) > 1500.0)
		{
			tmp = Quantize( -((ReadCOMPOOL_IS( SCP_TG_END ) == 1) ? ReadCOMPOOL_SD( SCP_HERR ) : ReadCOMPOOL_SD( SCP_HERROR )) * 0.0012, -6.0, 6.0, 12 );
			WriteCOMPOOL_AIS( SCP_DDU1_HSI, 10, tmp, 10 );
			WriteCOMPOOL_AIS( SCP_DDU2_HSI, 10, tmp, 10 );
			validity1 |= 0x0200;
			validity2 |= 0x0200;
		}

		WriteCOMPOOL_AIS( SCP_DDU1_HSI, 1, validity1, 10 );
		WriteCOMPOOL_AIS( SCP_DDU2_HSI, 1, validity2, 10 );
		return;
	}

	void DedicatedDisplay_SOP::Output_AVVI( void )
	{
		unsigned short tmp = 0;
		unsigned short validity1;
		unsigned short validity2;

		//// DDU AVVI data (6) ////
		// AVVI data validity (at bottom)
		validity1 = 0x0001;
		validity2 = 0x0001;

		// test word

		// indicated altitude [-1k,+100k ft]
		tmp = Quantize( ReadCOMPOOL_SD( SCP_H ), -1000.0, 100000.0, 12 );
		WriteCOMPOOL_AIS( SCP_DDU1_AVVI, 3, tmp, 6 );
		WriteCOMPOOL_AIS( SCP_DDU2_AVVI, 3, tmp, 6 );
		validity1 |= 0x0004;
		validity2 |= 0x0004;

		// vertical velocity [-3k,+3k fps]

		// radar altitude [0,5k ft]
		if ((ReadCOMPOOL_IS( SCP_RA_DATA_CDR_SEL ) < 5000) && (ReadCOMPOOL_IS( SCP_RA_VALIDITY_CDR_SEL ) == 1))
		{
			tmp = Quantize( ReadCOMPOOL_IS( SCP_RA_DATA_CDR_SEL ), 0.0, 5000.0, 12 );
			WriteCOMPOOL_AIS( SCP_DDU1_AVVI, 5, tmp, 6 );
			validity1 |= 0x0010;
		}

		if ((ReadCOMPOOL_IS( SCP_RA_DATA_PLT_SEL ) < 5000) && (ReadCOMPOOL_IS( SCP_RA_VALIDITY_PLT_SEL ) == 1))
		{
			tmp = Quantize( ReadCOMPOOL_IS( SCP_RA_DATA_PLT_SEL ), 0.0, 5000.0, 12 );
			WriteCOMPOOL_AIS( SCP_DDU2_AVVI, 5, tmp, 6 );
			validity2 |= 0x0010;
		}

		// vertical acceleration [-10,+10 fps^2]
		tmp = Quantize( ReadCOMPOOL_SD( SCP_NZ ), -10.0, 10.0, 12 );
		WriteCOMPOOL_AIS( SCP_DDU1_AVVI, 6, tmp, 6 );
		WriteCOMPOOL_AIS( SCP_DDU2_AVVI, 6, tmp, 6 );
		validity1 |= 0x0020;
		validity2 |= 0x0020;

		WriteCOMPOOL_AIS( SCP_DDU1_AVVI, 1, validity1, 6 );
		WriteCOMPOOL_AIS( SCP_DDU2_AVVI, 1, validity2, 6 );
		return;
	}

	void DedicatedDisplay_SOP::Output_AMI( void )
	{
		unsigned short tmp = 0;
		unsigned short validity1;
		unsigned short validity2;

		//// DDU AMI data (6) ////
		// AMI data validity (at bottom)
		validity1 = 0x0001;
		validity2 = 0x0001;

		// test word
		// mach [0,4 M]

		// angle of attack [-15,+50 deg]
		tmp = Quantize( ReadCOMPOOL_SD( SCP_ALPHA ), -15.0, 50.0, 12 );
		WriteCOMPOOL_AIS( SCP_DDU1_AMI, 4, tmp, 6 );
		WriteCOMPOOL_AIS( SCP_DDU2_AMI, 4, tmp, 6 );
		validity1 |= 0x0008;
		validity2 |= 0x0008;

		// equivalent airspeed [0,500 knts]
		tmp = Quantize( ReadCOMPOOL_SD( SCP_KEAS ), 0.0, 500.0, 12 );
		WriteCOMPOOL_AIS( SCP_DDU1_AMI, 5, tmp, 6 );
		WriteCOMPOOL_AIS( SCP_DDU2_AMI, 5, tmp, 6 );
		validity1 |= 0x0010;
		validity2 |= 0x0010;

		// vehicle acceleration [-50,+100 fps^2]

		WriteCOMPOOL_AIS( SCP_DDU1_AMI, 1, validity1, 6 );
		WriteCOMPOOL_AIS( SCP_DDU2_AMI, 1, validity2, 6 );
		return;
	}

	void DedicatedDisplay_SOP::Output_HUD( void )
	{
		unsigned short tmp = 0;

		unsigned short IGI = ReadCOMPOOL_IS( SCP_IGI );
		unsigned short IGS = ReadCOMPOOL_IS( SCP_IGS );

		//// HUD message 1 (31) ////
		// HUD message 1 control word
		// test word

		// GPC-to-HUD flags word 1
		tmp = 0;
		if (ReadCOMPOOL_IS( SCP_HUD_WOWLON ) == 1) tmp |= 0x0001;
		if (ReadCOMPOOL_IS( SCP_HUD_ROLLOUT ) == 1) tmp |= 0x0002;
		if (ReadCOMPOOL_IS( SCP_GSENBL ) == 1) tmp |= 0x0004;
		if (ReadCOMPOOL_IS( SCP_TG_END ) == 0)
		{
			// TAEM modes
			unsigned short IPHASE = ReadCOMPOOL_IS( SCP_IPHASE );
			if (IPHASE == 0) tmp |= 0x0008;
			else if (IPHASE == 1) tmp |= 0x0010;
			else if (IPHASE == 2) tmp |= 0x0020;
			else if (IPHASE == 3) tmp |= 0x0040;
		}
		else
		{
			// Autoland modes
			unsigned short PMODE = ReadCOMPOOL_IS( SCP_PMODE );
			if (PMODE == 1) tmp |= 0x0080;
			else if (PMODE == 2) tmp |= 0x0100;
			else if (PMODE == 3) tmp |= 0x0200;
			else if (PMODE == 4) tmp |= 0x0400;
		}
		if ((ReadCOMPOOL_IS( SCP_AEROJET_FCS_PITCH ) == 2) &&
			(ReadCOMPOOL_IS( SCP_AEROJET_FCS_ROLL ) == 2)) tmp |= 0x0800;
		if ((ReadCOMPOOL_IS( SCP_TG_END ) != 0) && (ReadCOMPOOL_SD( SCP_H ) < 5000.0))// A/L and <5k
		{
			if (fabs( ReadCOMPOOL_SD( SCP_DBFOFB ) ) > 1.7125)// 5% = 1.7125�
				tmp |= 0x1000;
		}
		// HACK no info on this
		// 00-WOWLON
		// 01-ROLLOUT
		// 02-GSENBL
		// 03-S_TRN
		// 04-ACQ
		// 05-HDG
		// 06-PRFNL
		// 07-CAPT
		// 08-OGS
		// 09-FLARE
		// 10-FNLFL
		// 11-FCS CSS
		// 12-BF not trail
		// 13-
		// 14-
		// 15-
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 3, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 3, tmp, 31 );

		// GPC-to-HUD flags word 2
		tmp = 0;
		if (ReadCOMPOOL_IS( SCP_SPEEDBRAKE_POS_CREW_ALERT ) == 1) tmp |= 0x0001;
		// HACK no info on this
		// 00-SB flash
		// 01-
		// 02-
		// 03-
		// 04-
		// 05-
		// 06-
		// 07-
		// 08-
		// 09-
		// 10-
		// 11-
		// 12-
		// 13-
		// 14-
		// 15-
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 4, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 4, tmp, 31 );

		// speedbrake position
		tmp = Round( ReadCOMPOOL_SD( SCP_DSBFB_PCT ) );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 5, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 5, tmp, 31 );

		// speedbrake command
		tmp = Round( ReadCOMPOOL_SD( SCP_DSBC ) / 0.986 );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 6, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 6, tmp, 31 );

		// X position wrt runway
		tmp = Round( range( -50536.0, ReadCOMPOOL_SD( SCP_X ), 15000.0 ) ) + 50536;// shifted to "cover" view from A/L interface to rw end
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 7, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 7, tmp, 31 );

		// Y position wrt runway
		tmp = Round( range( -32768.0, ReadCOMPOOL_SD( SCP_Y ), 32768.0 ) ) + 32768;
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 8, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 8, tmp, 31 );

		// Z position wrt runway
		tmp = Round( range( -32768.0, ReadCOMPOOL_SD( SCP_Z ), 32768.0 ) ) + 32768;
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 9, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 9, tmp, 31 );

		// X velocity wrt runway
		tmp = Round( ReadCOMPOOL_SD( SCP_XDOT ) * 10.0 ) + 32768;
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 10, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 10, tmp, 31 );

		// Y velocity wrt runway
		tmp = Round( ReadCOMPOOL_SD( SCP_YDOT ) * 10.0 ) + 32768;
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 11, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 11, tmp, 31 );

		// Z velocity wrt runway

		// heading
		tmp = Round( ReadCOMPOOL_SD( SCP_HDG ) * 10.0 );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 13, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 13, tmp, 31 );

		// acc drag
		// H dot ellipsoid

		// flight path reference 2 (HACK glide slope angle from flare to final flare)
		double X = ReadCOMPOOL_SD( SCP_X );
		double X_EXP = ReadCOMPOOL_M( SCP_X_EXP, IGI, IGS, 2, 2 );
		if (X < X_EXP)
		{
			// circle
			double R = ReadCOMPOOL_M( SCP_AL_R, IGI, IGS, 2, 2 );
			double X_K = ReadCOMPOOL_M( SCP_X_K, IGI, IGS, 2, 2 );
			tmp = -Round( atan( (X - X_K) / sqrt( (R * R) - pow( X - X_K, 2 ) ) ) * DEG * 10.0 );
		}
		else
		{
			// exponential
			double Y = ReadCOMPOOL_SD( SCP_Y );
			double X_AIM = ReadCOMPOOL_SD( SCP_X_AIM );
			double H_DECAY = ReadCOMPOOL_M( SCP_H_DECAY, IGI, IGS, 2, 2 );
			double GAMMA_REF_2 = ReadCOMPOOL_SD( SCP_GAMMA_REF_2 );
			double SIGMA = ReadCOMPOOL_SD( SCP_SIGMA );
			tmp = -Round( atan( (((X - X_AIM) * tan( -GAMMA_REF_2 * RAD )) / sqrt( pow( X - X_AIM, 2 ) + (Y * Y) )) - ((H_DECAY * exp( (X_EXP - X) / SIGMA )) / SIGMA) ) * DEG * 10.0 );
		}
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 16, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 16, tmp, 31 );

		// roll error
		tmp = Round( (ReadCOMPOOL_SD( SCP_BANKERR ) + 90) * 10 );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 17, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 17, tmp, 31 );

		// pitch error
		tmp = Round( (ReadCOMPOOL_SD( SCP_NZERR ) + 5.0) * 100.0 );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 18, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 18, tmp, 31 );

		// runway heading
		if (ReadCOMPOOL_IS( SCP_RWID ) == 1) tmp = Round( ReadCOMPOOL_SD( SCP_PRI_HDG ) * 10.0 );
		else tmp = Round( ReadCOMPOOL_SD( SCP_SEC_HDG ) * 10.0 );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 19, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 19, tmp, 31 );

		// airspeed reference

		// flight path reference (HACK steep glide slope angle)
		tmp = -Round( ReadCOMPOOL_V( SCP_GAMMA_REF_1, IGS, 2 ) * 10.0 );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 21, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 21, tmp, 31 );

		// X zero
		tmp = -Round( ReadCOMPOOL_V( SCP_X_ZERO, IGI, 2 ) );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG1, 22, tmp, 31 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG1, 22, tmp, 31 );

		// altimeter error
		// energy upper limit
		// energy shuttle
		// energy lower limit
		// energy nominal
		// aileron position
		// aileron command
		// pitch adjustment
		// VV filter frequency

		//// HUD message 2 (12) ////
		// HUD message 2 control word
		// runway remaining to stop

		// runway to go minimum
		tmp = Round( ReadCOMPOOL_SD( SCP_RWTOGO ) );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG2, 3, tmp, 12 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG2, 3, tmp, 12 );

		// maximum deceleration cmd
		tmp = Round( ReadCOMPOOL_SD( SCP_HUDMAXDECEL ) * 10.0 );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG2, 4, tmp, 12 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG2, 4, tmp, 12 );

		// runway length
		if (ReadCOMPOOL_IS( SCP_RWID ) == 1) tmp = min( 15000, ReadCOMPOOL_IS( SCP_PRI_LEN ) );
		else tmp = min( 15000, ReadCOMPOOL_IS( SCP_SEC_LEN ) );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG2, 5, tmp, 12 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG2, 5, tmp, 12 );

		// auto AlterR
		// auto GamerR
		// auto X TrkerR
		// auto EaserR

		// spare (HACK "ground sideslip")
		VECTOR3 gs;
		STS()->GetGroundspeedVector( FRAME_LOCAL, gs );
		tmp = Round( ((asin( gs.x / length( gs ) ) * DEG) + 30.0) * 100.0 );
		WriteCOMPOOL_AIS( SCP_HUD1_MSG2, 10, tmp, 12 );
		WriteCOMPOOL_AIS( SCP_HUD2_MSG2, 10, tmp, 12 );
		// spare
		// <emtpy>
		return;
	}

	void DedicatedDisplay_SOP::Output_HSI_MEDS( void )
	{
		// selected runway range
		switch (GetMajorMode())
		{
			case 601:
				primarydistance = 0.0;// TODO
				break;
			case 304:
			case 602:
				primarydistance = ReadCOMPOOL_SD( SCP_TRANG );
				break;
			case 305:
			case 603:
				if (ReadCOMPOOL_IS( SCP_TG_END ) == 0) primarydistance = ReadCOMPOOL_SD( SCP_RPRED ) * FT2NM;
				else primarydistance = sqrt( (ReadCOMPOOL_SD( SCP_X ) - ReadCOMPOOL_SD( SCP_X_AIM )) * (ReadCOMPOOL_SD( SCP_X ) - ReadCOMPOOL_SD( SCP_X_AIM )) + ReadCOMPOOL_SD( SCP_Y ) * ReadCOMPOOL_SD( SCP_Y ) )* FT2NM;
				break;
			default:
				primarydistance = 0.0;
				break;
		}

		// HAC-C range
		if (GetMajorMode() == 305) secondarydistance = ReadCOMPOOL_SD( SCP_RCIR ) * FT2NM;

		// primary bearing
		switch (GetMajorMode())
		{
			case 102:
			case 103:// TODO TAL
				if ((STS()->GetMET() < 150.0) && (STS()->GetAltitude( ALTMODE_GROUND ) * MPS2FPS/*ReadCOMPOOL_SD( SCP_H )*/ < 200000.0 ))
				{
					primarybearing = -STS()->GetSlipAngle() * DEG;// HACK
					primarybearingtype = 'E';
				}
				else
				{
					primarybearing = 0.0;
					primarybearingtype = 0;
				}
				break;
			case 601:
				primarybearing = 0.0;// TODO
				primarybearingtype = 'R';
				break;
			case 304:
			case 602:
				primarybearing = -ReadCOMPOOL_SD( SCP_DELAZ ) * DEG;// WP1
				primarybearingtype = 'H';
				break;
			case 305:
			case 603:
				if (ReadCOMPOOL_IS( SCP_TG_END ) == 0)
					primarybearing = -(ReadCOMPOOL_SD( SCP_HDG ) - (ReadCOMPOOL_SD( SCP_DPSAC ) + ReadCOMPOOL_SD( SCP_PSD ) + ((ReadCOMPOOL_IS( SCP_RWID ) == 1) ? ReadCOMPOOL_SD( SCP_PRI_HDG ) : ReadCOMPOOL_SD( SCP_SEC_HDG ))));// WP1
				else
					primarybearing = atan2( -ReadCOMPOOL_SD( SCP_Y ), -(ReadCOMPOOL_SD( SCP_X ) - ReadCOMPOOL_SD( SCP_X_AIM )) ) * DEG;// WP2
				primarybearingtype = 'H';
				break;
			default:
				primarybearing = 0.0;
				primarybearingtype = 0;
				break;
		}

		// secondary bearing
		switch (GetMajorMode())
		{
			case 101:
			case 102:
			case 103:
			case 104:
				secondarybearing = 0.0;// TODO
				secondarybearingtype = 'I';
				break;
			case 601:
				secondarybearing = 0.0;// TODO
				secondarybearingtype = 'E';
				break;
			case 305:
			case 603:
				if (ReadCOMPOOL_IS( SCP_TG_END ) == 0)
				{
					secondarybearing = -(ReadCOMPOOL_SD( SCP_HDG ) - (ReadCOMPOOL_SD( SCP_PSC ) + ((ReadCOMPOOL_IS( SCP_RWID ) == 1) ? ReadCOMPOOL_SD( SCP_PRI_HDG ) : ReadCOMPOOL_SD( SCP_SEC_HDG ))));// HAC-C
					secondarybearingtype = 'C';
				}
				else
				{
					secondarybearing = 0.0;
					secondarybearingtype = 0;
				}
				break;
			default:
				secondarybearing = 0.0;
				secondarybearingtype = 0;
				break;
		}

		// CDI deviation
		switch (GetMajorMode())
		{
			case 102:
			case 103:// TODO TAL
			case 104:
				coursedeviation = 0.0;// TODO
				break;
			case 304:
			case 602:
				coursedeviation = 0.0;
				break;
			case 305:
			case 603:
				coursedeviation = atan2( ReadCOMPOOL_SD( SCP_Y ), fabs( ReadCOMPOOL_SD( SCP_X ) - ReadCOMPOOL_SD( SCP_X_AIM ) ) ) * DEG;
				break;
			default:
				coursedeviation = 0.0;
				break;
		}

		// CDI scale
		switch (GetMajorMode())
		{
			case 102:
			case 103:
			case 104:
				if (fabs( coursedeviation ) >= 50.0) coursedeviationscale = 50.0;
				else if ((fabs( coursedeviation ) >= 10.0) || STS()->GetMET() < 390.0) coursedeviationscale = 10.0;
				else coursedeviationscale = 1.0;
				break;
			case 304:
			case 602:
				coursedeviationscale = 0.0;
				break;
			case 305:
			case 603:
				coursedeviationscale = ReadCOMPOOL_IS( SCP_TG_END ) ? 2.5 : 10.0;
				break;
			default:
				coursedeviationscale = 0.0;
				break;
		}

		// GSI deviation
		switch (GetMajorMode())
		{
			case 304:
			case 602:
				glideslopedeviation = 0.0;
				gsflag = false;
				break;
			case 305:
			case 603:
				glideslopedeviation = ReadCOMPOOL_IS( SCP_TG_END ) ? ReadCOMPOOL_SD( SCP_HERR ) : ReadCOMPOOL_SD( SCP_HERROR );
				gsflag = (ReadCOMPOOL_SD( SCP_H ) < 1500.0) ? true : false;
				break;
			default:
				gsflag = true;
				break;
		}

		// GSI scale
		switch (GetMajorMode())
		{
			case 305:
			case 603:
				glideslopedeviationscale = ReadCOMPOOL_IS( SCP_TG_END ) ? 1000.0 : 5000.0;
				break;
			default:
				glideslopedeviationscale = 0.0;
				break;
		}
		return;
	}

	bool DedicatedDisplay_SOP::OnMajorModeChange( unsigned int newMajorMode )
	{
		if (newMajorMode == 0) return false;
		return true;
	}

	unsigned short DedicatedDisplay_SOP::Quantize( double val, double minval, double maxval, unsigned int numbits ) const
	{
		assert( (minval < maxval) && "DedicatedDisplay_SOP::Quantize" );
		assert( (numbits <= 16) && "DedicatedDisplay_SOP::Quantize" );

		double q = (range( minval, val, maxval ) - minval) / (maxval - minval);
		unsigned int p = 1 << numbits;

		return Round( p * q );
	}

	double DedicatedDisplay_SOP::GetSelectedRunwayRange( void ) const
	{
		return primarydistance;
	}

	double DedicatedDisplay_SOP::GetHACCRange( void ) const
	{
		return secondarydistance;
	}

	double DedicatedDisplay_SOP::GetPrimaryBearing( void ) const
	{
		return primarybearing;
	}

	char DedicatedDisplay_SOP::GetPrimaryBearingType( void ) const
	{
		return primarybearingtype;
	}

	double DedicatedDisplay_SOP::GetSecondaryBearing( void ) const
	{
		return secondarybearing;
	}

	char DedicatedDisplay_SOP::GetSecondaryBearingType( void ) const
	{
		return secondarybearingtype;
	}

	double DedicatedDisplay_SOP::GetCourseDeviation( void ) const
	{
		return coursedeviation;
	}

	double DedicatedDisplay_SOP::GetCourseDeviationScale( void ) const
	{
		return coursedeviationscale;
	}

	double DedicatedDisplay_SOP::GetGlideSlopeDeviation( void ) const
	{
		return glideslopedeviation;
	}

	double DedicatedDisplay_SOP::GetGlideSlopeDeviationScale( void ) const
	{
		return glideslopedeviationscale;
	}

	bool DedicatedDisplay_SOP::GetGSFlag( void ) const
	{
		return gsflag;
	}
}