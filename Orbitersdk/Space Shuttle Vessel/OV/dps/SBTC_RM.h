/****************************************************************************
  This file is part of Space Shuttle Vessel

  Speedbrake/Thrust Controller Redundancy Management definition


  Space Shuttle Vessel is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  Space Shuttle Vessel is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Space Shuttle Vessel; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

  See https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html or
  file SSV-LICENSE.txt for more details.

  **************************************************************************/
/******* SSV File Modification Notice *******
Date         Developer
2020/04/01   GLS
2020/05/08   GLS
2020/06/20   GLS
2021/07/03   GLS
2021/08/23   GLS
2021/08/24   GLS
2022/06/04   GLS
2022/08/05   GLS
********************************************/
/****************************************************************************
  This file is part of Space Shuttle Ultra

  Speedbrake/Thrust Controller Redundancy Management definition



  Space Shuttle Ultra is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  Space Shuttle Ultra is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Space Shuttle Ultra; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

  See https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html or
  file Doc\Space Shuttle Ultra\GPL.txt for more details.

  **************************************************************************/
#ifndef _dps_SBTC_RM_H_
#define _dps_SBTC_RM_H_


#include "SimpleGPCSoftware.h"
#include <discsignals.h>


namespace dps
{
	/**
	 * @brief	Implementation of the SBTC RM software that runs in the GPCs.
	 *
	 * This class handles the RM of SBTC signals.
	 */
	class SBTC_RM:public SimpleGPCSoftware
	{
		private:
			DiscInPort LeftSBTC[3];
			DiscInPort RightSBTC[3];

			double SBTC_L;
			bool SBTC_L_DG;
			bool SBTC_TO_L;
			double SBTC_R;
			bool SBTC_R_DG;
			bool SBTC_TO_R;

		public:
			explicit SBTC_RM( SimpleGPCSystem* _gpc );
			~SBTC_RM( void );

			void Realize( void ) override;

			void OnPostStep( double simt, double simdt, double mjd ) override;

			bool OnParseLine( const char* keyword, const char* value ) override;
			void OnSaveState( FILEHANDLE scn ) const override;

			bool OnMajorModeChange( unsigned int newMajorMode ) override;

			void GetSBTCData_L( double &sbtc, bool &DG, bool &to ) const;
			void GetSBTCData_R( double &sbtc, bool &DG, bool &to ) const;
	};
}


#endif// _dps_SBTC_RM_H_