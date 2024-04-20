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

#include "../../../inc/MarlinConfigPre.h"

#include "../bedlevel.h"

class LevelingBilinear {
public:
   bed_mesh_t z_values;
   xy_pos_t grid_spacing, grid_start;
   xy_uint8_t grid_points;

private:
   xy_float_t grid_factor;
   xy_pos_t cached_rel;
   xy_int8_t cached_g;

   void extrapolate_one_point(const uint8_t x, const uint8_t y, const int8_t xdir, const int8_t ydir);

  #if ENABLED(ABL_BILINEAR_SUBDIVISION)
    #define ABL_GRID_POINTS_VIRT_X (GRID_MAX_CELLS_X * (BILINEAR_SUBDIVISIONS) + 1)
    #define ABL_GRID_POINTS_VIRT_Y (GRID_MAX_CELLS_Y * (BILINEAR_SUBDIVISIONS) + 1)

     float z_values_virt[ABL_GRID_POINTS_VIRT_X][ABL_GRID_POINTS_VIRT_Y];
     xy_pos_t grid_spacing_virt;
     xy_float_t grid_factor_virt;

    float virt_coord(const uint8_t x, const uint8_t y);
    float virt_cmr(const float p[4], const uint8_t i, const float t);
    float virt_2cmr(const uint8_t x, const uint8_t y, const_float_t tx, const_float_t ty);
    void subdivide_mesh();
  #endif

public:
  void reset();
  void set_grid(const xy_pos_t& _grid_spacing, const xy_pos_t& _grid_start, const xy_uint8_t& _grid_points);
  void extrapolate_unprobed_bed_level();
  void print_leveling_grid(const bed_mesh_t *_z_values=nullptr);
  void refresh_bed_level();
  bool has_mesh() { return !!grid_spacing.x; }
  bool mesh_is_valid() { return has_mesh(); }
  float get_mesh_x(const uint8_t i) { return grid_start.x + i * grid_spacing.x; }
  float get_mesh_y(const uint8_t j) { return grid_start.y + j * grid_spacing.y; }
  float get_z_correction(const xy_pos_t &raw);
  constexpr float get_z_offset() { return 0.0f; }

  #if IS_CARTESIAN && DISABLED(SEGMENT_LEVELED_MOVES)
     void line_to_destination(const_feedRate_t scaled_fr_mm_s, uint16_t x_splits=0xFFFF, uint16_t y_splits=0xFFFF);
  #endif
};

extern LevelingBilinear bedlevel;
