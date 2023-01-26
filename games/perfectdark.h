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

#define PD_defaultratio 0x803CD680 // 16:9 ratio default
#define PD_defaultfov 0x802EAA5C // field of view default
#define PD_defaultfovzoom 0x802EACFC // field of view default for zoom
#define PD_defaultzoominspeed 0x802DA8F8 // default zoom in speed
#define PD_defaultzoomoutspeed 0x802DA924 // default zoom out speed
#define PD_introcounter 0x800624C4 // counter for intro
#define PD_controlstyle 0x80372728 // instruction reads the current controller style
#define PD_reversepitch 0x803727A0 // instruction reads the current reverse pitch option
#define PD_pickupyaxisthreshold 0x803CAE78 // y axis threshold on picking up weapons
#define PD_weapontable 0x8006FF1C // weapon pointer table, used to change view model positions
#define PD_radialmenutimer 0x802EA2BC // time instruction for radial menu to appear (15 ticks)
#define PD_radialmenualphainit 0x803D2CDC // initial alpha value for all menus
#define PD_blurfix 0x802DB68C // nop gap on chr function to store our blur fix
#define PD_hiresoption 0x80322D9C // argument used to set hires mode on within options
#define PD_camspylookspringup 0x802F13E8 // save instruction for adjusted camspy look spring pitch
#define PD_camspylookspringdown 0x802F143C // save instruction for adjusted camspy look spring pitch
/*
  ???
*/
#define PD_debugtext 0x803C79F0 // debug text (used to check if PD is running)
