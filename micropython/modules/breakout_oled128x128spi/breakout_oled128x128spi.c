#include "breakout_oled128x128spi.h"

/***** Constants *****/
// enum buttons
// {
//     BUTTON_A = 0,
//     BUTTON_B,
//     BUTTON_X,
//     BUTTON_Y,
// };


////////////////////////////////////////////////////////////////////////////////////////////////////
// breakout_oled128x128spi Module
////////////////////////////////////////////////////////////////////////////////////////////////////

/***** Module Functions *****/
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_oled128x128spi_init_obj, breakout_oled128x128spi_init);
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_oled128x128spi_get_width_obj, breakout_oled128x128spi_get_width);
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_oled128x128spi_get_height_obj, breakout_oled128x128spi_get_height);
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_oled128x128spi_update_obj, breakout_oled128x128spi_update);
// STATIC MP_DEFINE_CONST_FUN_OBJ_3(breakout_oled128x128spi_set_pixel_obj, breakout_oled128x128spi_set_pixel);
// STATIC MP_DEFINE_CONST_FUN_OBJ_0(breakout_oled128x128spi_clear_obj, breakout_oled128x128spi_clear);
// STATIC MP_DEFINE_CONST_FUN_OBJ_1(breakout_oled128x128spi_is_pressed_obj, breakout_oled128x128spi_is_pressed);

/***** Globals Table *****/
STATIC const mp_map_elem_t breakout_oled128x128spi_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_breakout_oled128x128spi) },
//     { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&breakout_oled128x128spi_init_obj) },    
//     { MP_ROM_QSTR(MP_QSTR_get_width), MP_ROM_PTR(&breakout_oled128x128spi_get_width_obj) },
//     { MP_ROM_QSTR(MP_QSTR_get_height), MP_ROM_PTR(&breakout_oled128x128spi_get_height_obj) },
//     { MP_ROM_QSTR(MP_QSTR_update), MP_ROM_PTR(&breakout_oled128x128spi_update_obj) },
//     { MP_ROM_QSTR(MP_QSTR_set_pixel), MP_ROM_PTR(&breakout_oled128x128spi_set_pixel_obj) },
//     { MP_ROM_QSTR(MP_QSTR_clear), MP_ROM_PTR(&breakout_oled128x128spi_clear_obj) },
//     { MP_ROM_QSTR(MP_QSTR_is_pressed), MP_ROM_PTR(&breakout_oled128x128spi_is_pressed_obj) },        
//     { MP_ROM_QSTR(MP_QSTR_BUTTON_A), MP_ROM_INT(BUTTON_A) },
//     { MP_ROM_QSTR(MP_QSTR_BUTTON_B), MP_ROM_INT(BUTTON_B) },
//     { MP_ROM_QSTR(MP_QSTR_BUTTON_X), MP_ROM_INT(BUTTON_X) },
//     { MP_ROM_QSTR(MP_QSTR_BUTTON_Y), MP_ROM_INT(BUTTON_Y) },
};
STATIC MP_DEFINE_CONST_DICT(mp_module_breakout_oled128x128spi_globals, breakout_oled128x128spi_globals_table);

/***** Module Definition *****/
const mp_obj_module_t breakout_oled128x128spi_user_cmodule = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&mp_module_breakout_oled128x128spi_globals,
};

////////////////////////////////////////////////////////////////////////////////////////////////////
MP_REGISTER_MODULE(MP_QSTR_breakout_oled128x128spi, breakout_oled128x128spi_user_cmodule, MODULE_BREAKOUT_OLED128X128SPI_ENABLED);
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////