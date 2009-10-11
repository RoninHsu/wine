/* Definition for CoreAudio drivers : wine multimedia system
 *
 * Copyright 2005-2007 Emmanuel Maillard
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_COREAUDIO_H
#define __WINE_COREAUDIO_H

#include "wine/debug.h"

extern LONG CoreAudio_WaveInit(void);
extern void CoreAudio_WaveRelease(void);

extern LONG CoreAudio_MIDIInit(void);
extern LONG CoreAudio_MIDIRelease(void);

extern LONG CoreAudio_MixerInit(void);
extern void CoreAudio_MixerRelease(void);

/* fourcc is in native order, where MSB is the first character. */
static inline const char* wine_dbgstr_fourcc(unsigned long fourcc)
{
    char buf[4] = { (char) (fourcc >> 24), (char) (fourcc >> 16),
                    (char) (fourcc >> 8),  (char) fourcc };
    return wine_dbgstr_an(buf, sizeof(buf));
}

#endif /* __WINE_COREAUDIO_H */
