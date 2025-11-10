/* Copyright 2021 Dztech
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
    {
     //   0         1        2       3       4       5       6       7       8       9      10      11      12      13      14      15      16      17      18 

        { 0,        1,       2,      3,      4,      5,      6,      7,      8,      9,     10,     11,     12,     13,     14,     15,     19,     18,     17  },
        { 36,      35,      34,     33,     32,     31,     30,     29,     28,     27,     26,     25,     24,     23,     21,     20, NO_LED,     16,     56  },
        { 37,      38,      39,     40,     41,     42,     43,     44,     45,     46,     47,     48,     49,     22,     51,     52,     53,     54,     55  },
        { 73,      72,      71,     70,     69,     68,     67,     66,     65,     64,     63,     62,     61,     50, NO_LED, NO_LED,     59,     58,     57  },
        { 74,      75,      76,     77,     78,     79,     80,     81,     82,     83,     84,     85,     86,     60,     97,     87,     88,     89,     90  },
        { 104,    103,     102, NO_LED, NO_LED, NO_LED,    101, NO_LED, NO_LED, NO_LED,    100,     99,     98,     96,     95,     94,     93,     92,     91  }    
    }, 
    //        0            1            2            3            4            5            6            7            8            9           10           11           12           13           14           15           16           17           18 
    {
        {   0,  0 }, {  21,  0 }, {  43,  0 }, {  53,  0 }, {  69,  0 }, {  80,  0 }, {  91,  0 }, { 101,  0 }, { 117,  0 }, { 128,  0 }, { 139,  0 }, { 149,  0 }, { 160,  0 }, { 171,  0 }, { 181,  0 }, {  53, 22 }, {  43, 22 }, {  32, 22 }, {  21, 22 }, 
        { 224, 22 }, { 213, 22 }, { 203, 22 }, { 192, 22 }, { 181, 22 }, { 171, 22 }, { 160, 22 }, { 144, 22 }, { 128, 22 }, { 117, 22 }, { 107, 22 }, {  96, 22 }, {  85, 22 }, {  75, 22 }, {  64, 22 }, {  53, 22 }, {  43, 22 }, {  32, 22 }, 
        {   5, 27 }, {  16, 27 }, {  27, 27 }, {  37, 27 }, {  48, 27 }, {  59, 27 }, {  69, 27 }, {  80, 27 }, {  91, 27 }, { 101, 27 }, { 112, 27 }, { 123, 27 }, { 133, 27 }, { 149, 27 }, { 160, 27 }, { 171, 27 }, { 181, 27 }, { 192, 27 }, { 203, 33 },       
        {213,  38 }, { 203, 38 }, { 192, 38 }, { 139, 38 }, { 123, 38 }, { 112, 38 }, { 101, 38 }, {  91, 38 }, {  80, 38 }, {  69, 38 }, {  59, 38 }, {  48, 38 }, {  37, 38 }, {  27, 38 }, {  16, 38 }, {   8, 38 }, {   8, 38 },
        {   3, 52 }, {  11, 52 }, {  21, 52 }, {  32, 52 }, {  43, 52 }, {  53, 52 }, { 64,  52 }, {  75, 52 }, {  85, 52 }, { 96, 52 },  { 107, 52 }, { 117, 52 }, { 137, 52 }, { 171, 52 }, { 192, 52 }, { 203, 52 }, { 213, 58 }, { 224, 58 }, {   8, 38 },
        { 213, 64 }, { 197, 64 }, { 181, 64 }, { 171, 64 }, { 160, 64 }, { 149, 64 }, { 139, 64 }, { 131, 64 }, { 117, 64 }, {  75, 64 }, {  27, 64 }, { 13,  64 }, {   3, 64 }
    }, 
    
    {
   //   0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,  
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4
    }
};

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(73, 0xFF, 0xFF, 0xFF);
    }
    if (host_keyboard_led_state().num_lock) {
        rgb_matrix_set_color(19, 0xFF, 0xFF, 0xFF);
    }
    return true;
}
#endif
