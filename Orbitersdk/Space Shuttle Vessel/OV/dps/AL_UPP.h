/****************************************************************************
  This file is part of Space Shuttle Vessel

  Approach and Landing Parameter Processing definition


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
2020/05/08   GLS
2020/06/20   GLS
2021/08/23   GLS
2021/08/24   GLS
2021/12/26   GLS
2021/12/29   GLS
2022/08/05   GLS
2022/09/29   GLS
********************************************/
/****************************************************************************
  This file is part of Space Shuttle Ultra

  Approach and Landing Parameter Processing definition



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
#ifndef __AL_UPP
#define __AL_UPP


#include "SimpleGPCSoftware.h"


namespace dps
{
	class AL_UPP:public SimpleGPCSoftware
	{
		private:
			OBJHANDLE hEarth;

#if 1// for OSFS2016 only, r87 fixes issue
			bool firststep;
			float QBAR_0;
			float XLFAC_0;
			float DRAG_0;
			float LOD_0;
			float ALPHA_0;
			float COSALF_0;
			float SINALF_0;
			float BETA_0;
			float PHI_0;
			float COSPHI_0;
			float SINPHI_0;
			float NY_0;
			float NZ_0;
#endif// for OSFS2016 only, r87 fixes issue

		public:
			explicit AL_UPP( SimpleGPCSystem* _gpc );
			virtual ~AL_UPP( void );

			void Realize( void ) override;

#if 1// for OSFS2016 only, r87 fixes issue
			bool OnParseLine( const char* keyword, const char* value ) override;
			void OnSaveState( FILEHANDLE scn ) const override;
#endif// for OSFS2016 only, r87 fixes issue

			void OnPreStep( double simt, double simdt, double mjd ) override;

			bool OnMajorModeChange( unsigned int newMajorMode ) override;
	};

}

#endif// __AL_UPP
