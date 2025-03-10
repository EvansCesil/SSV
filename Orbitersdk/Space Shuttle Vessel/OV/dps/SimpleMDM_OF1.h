/****************************************************************************
  This file is part of Space Shuttle Vessel

  Simple Multiplexer/Demultiplexer Operational Instrumentation Forward 1
  definition


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
#ifndef _SIMPLEMDM_OF1_H_
#define _SIMPLEMDM_OF1_H_


#include "SimpleMDM.h"


namespace dps
{
	class SimpleMDM_OF1:public SimpleMDM
	{
		private:
			bool powered;

		public:
			explicit SimpleMDM_OF1( AtlantisSubsystemDirector* _director );
			virtual ~SimpleMDM_OF1();

			void Realize( void ) override;

			void busCommand( const SIMPLEBUS_COMMAND_WORD& cw, SIMPLEBUS_COMMANDDATA_WORD* cdw ) override;
			void busRead( const SIMPLEBUS_COMMAND_WORD& cw, SIMPLEBUS_COMMANDDATA_WORD* cdw ) override;

			void OnPreStep( double simt, double simdt, double mjd ) override;
	};
}

#endif// _SIMPLEMDM_OF1_H_
