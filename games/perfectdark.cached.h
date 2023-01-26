//==========================================================================
// Mouse Injector Plugin
//==========================================================================
// Copyright (C) 2016-2021 Carnivorous
// Copyright Perfect Dark decomp compatability (C) 2023 Catherine Reprobate
// All rights reserved.
//
// Mouse Injector is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
// or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, visit http://www.gnu.org/licenses/gpl-2.0.html
//==========================================================================

/*
    address 0x8009a024
    symbol g_Vars offset 0x64
*/
#define JOANNADATA(X) (unsigned int)EMU_ReadInt(0x8009A024 + (X * 0x4)) // player pointer address (0x4 offset for each players)
/*
    address 0x80070750
    symbol g_PlayersWithControl
*/
#define PD_menu(X) 0x80070750 + (X * 0x4) // player menu flag (0 = PD is in menu) (0x4 offset for each players)

/*
    address 0x8009a26c
    symbol g_Vars offset 0x2ac
*/
#define PD_camera 0x8009A26C // camera flag (1 = gameplay, 2 & 3 = ???, 4 = multiplayer sweep, 5 = gameover screen, 6 = cutscene mode, 7 = force player to move: extraction's dark room)
/*
    address 0x80084014
    symbol var80084014
*/
#define PD_pause 0x80084014 // menu flag (1 = PD is paused)
/*
    address 0x800624e4
    symbol g_TitleNextStage
*/
#define PD_stageid 0x800624E4 // stage id
/*
  ???
*/
#define PD_debugtext 0x803C79F0 // debug text (used to check if PD is running)
/*
    address 0x800acba6
    symbol g_MpSetup offset 0x1e
*/
#define PD_mppause 0x800acb88 + 0x1e // used to check if multiplayer match is paused
