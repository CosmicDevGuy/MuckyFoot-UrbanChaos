//
// briefing.h
// mission selection, briefings
// 14 dec 98
//

//@CosmicDevGuy (2018/05/23): Updated references, so that header files could be located properly (by source and/or header files)
#include "../../MFStdLib/Headers/MFStdLib.h"

extern CBYTE BRIEFING_mission_filename[_MAX_PATH];

SBYTE BRIEFING_select(void);
SBYTE BRIEFING_next_mission(); // 0 = run out of missions

//#define OBEY_SCRIPT