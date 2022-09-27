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
		{OV(22.1264832007994),300 },
		{OV(23.6674426338543),295 },
		{OV(25.3487435934679),290 },
		{OV(27.1895944658465),285 },
		{OV(29.2087639520463),280 },
		{OV(31.404046445439),275 },
		{OV(33.8138051640778),270 },
		{OV(36.4551143941726),265 },
		{OV(36.7184705013539),261 },
		{OV(42.476975160093),255 },
		{OV(45.9277745036275),250 },
		{OV(49.7292657746108),245 },
		{OV(53.8730094738964),240 },
		{OV(58.4467850336042),235 },
		{OV(63.4571400059874),230 },
		{OV(68.9846214902272),225 },
		{OV(75.0479720803675),220 },
		{OV(81.7548063745644),215 },
		{OV(89.13082496455),210 },
		{OV(97.2853236800554),205 },
		{OV(104.38597496895),201 },
		{OV(116.164333949523),195 },
		{OV(127.093551994037),190 },
		{OV(139.147726645952),185 },
		{OV(152.415943787464),180 },
		{OV(167.03520236463),175 },
		{OV(183.086540981602),170 },
		{OV(200.693980190567),165 },
		{OV(215.913764733537),160 },
		{OV(240.985276173432),155 },
		{OV(263.864171207455),150 },
		{OV(288.637574868598),145 },
		{OV(309.860549315211),141 },
		{OV(344.024300993232),135 },
		{OV(374.595728029577),130 },
		{OV(406.966448287799),125 },
		{OV(440.983646274985),120 },
		{OV(476.450026735839),115 },
		{OV(513.08162507033),110 },
		{OV(550.546191455245),105 },
		{OV(588.460371757977),100 },
		{OV(626.399087950035),95 },
		{OV(663.922190632949),90 },
		{OV(700.5808749412),85 },
		{OV(735.917061228399),80 },
		{OV(769.650565479336),75 },
		{OV(801.33981031691),70 },
		{OV(830.769181354639),65 },
		{OV(857.749006874158),60 },
		{OV(882.180103724658),55 },
		{OV(904.04287031729),50 },
		{OV(923.376960066904),45 },
		{OV(940.283115030702),40 },
		{OV(954.906167451476),35 },
		{OV(967.423419187229),30 },
		{OV(978.03247373448),25 },
		{OV(986.937978407183),20 },
		{OV(994.416267119078),15 },
		{OV(1000.45147716486),10 },
		{OV(1005.44212231048),5 },
		{OV(1009.48700319643),0 },
		{OV(1023.85050491245),-40 }
};
