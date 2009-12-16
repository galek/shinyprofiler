/*
The zlib/libpng License

Copyright (c) 2007-2009 Aidin Abedi, http://shinyprofiler.sourceforge.net

This software is provided 'as-is', without any express or implied warranty. In no event will
the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial 
applications, and to alter it and redistribute it freely, subject to the following
restrictions:

    1. The origin of this software must not be misrepresented; you must not claim that 
       you wrote the original software. If you use this software in a product, 
       an acknowledgment in the product documentation would be appreciated but is 
       not required.

    2. Altered source versions must be plainly marked as such, and must not be 
       misrepresented as being the original software.

    3. This notice may not be removed or altered from any source distribution.
*/

#ifndef SHINY_TOOLS_H
#define SHINY_TOOLS_H

#include "ShinyPrereqs.h"

//-----------------------------------------------------------------------------

typedef struct {
	float tickFreq;
	float invTickFreq;
	const char* suffix;
} ShinyTimeUnit;


//-----------------------------------------------------------------------------

const ShinyTimeUnit* ShinyGetTimeUnit(float ticks);

void ShinyGetTicks(shinytick_t *p);

shinytick_t ShinyGetTickFreq(void);

float ShinyGetTickInvFreq(void);

#endif // ifndef SHINY_*_H