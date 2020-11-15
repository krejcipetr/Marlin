/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

//  TEWA TT2-100KC3H-7, 100KOhm, 4066K, RP = 4K7, manually created
const temp_entry_t temptable_400[] PROGMEM = {
	{	OV(-40),1023},
	{	OV(0),1009},
	{	OV(5),1005},
	{	OV(10),1000},
	{	OV(15),994},
	{	OV(20),986},
	{	OV(25),978},
	{	OV(30),967},
	{	OV(35),954},
	{	OV(40),940},
	{	OV(45),923},
	{	OV(50),904},
	{	OV(55),882},
	{	OV(60),857},
	{	OV(65),830},
	{	OV(70),801},
	{	OV(75),769},
	{	OV(80),735},
	{	OV(85),700},
	{	OV(90),663},
	{	OV(95),626},
	{	OV(100),588},
	{	OV(105),550},
	{	OV(110),513},
	{	OV(115),476},
	{	OV(120),440},
	{	OV(125),406},
	{	OV(130),374},
	{	OV(135),344},
	{	OV(141),309},
	{	OV(145),288},
	{	OV(150),263},
	{	OV(155),240},
	{	OV(160),215},
	{	OV(165),200},
	{	OV(170),183},
	{	OV(175),167},
	{	OV(180),152},
	{	OV(185),139},
	{	OV(190),127},
	{	OV(195),116},
	{	OV(201),104},
	{	OV(205),97},
	{	OV(210),89},
	{	OV(215),81},
	{	OV(220),75},
	{	OV(225),68},
	{	OV(230),63},
	{	OV(235),58},
	{	OV(240),53},
	{	OV(245),49},
	{	OV(250),45},
	{	OV(255),42},
	{	OV(261),36},
	{	OV(265),36},
	{	OV(270),33},
	{	OV(275),31},
	{	OV(280),29},
	{	OV(285),27},
	{	OV(290),25},
	{	OV(295),23},
	{	OV(300),22}
};
