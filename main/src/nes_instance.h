
#ifndef NES_INSTANCE_H
#define NES_INSTANCE_H

#include "../../lv_lib_100ask/lv_lib_100ask.h"
#include "../../lv_lib_100ask/src/lv_100ask_nes/lv_100ask_nes.h"
#include "../../lv_lib_100ask/src/lv_100ask_nes/InfoNES.h"
#include "../../lv_lib_100ask/src/lv_100ask_nes/InfoNES_System.h"
#include "lvgl/src/misc/lv_event.h"


// #define NES_WIDTH 256

static lv_obj_t *my_nes;
static const char * btnm_dir_map[];
static const char * btnm_menu_map[];
static const char * btnm_opt_map[];
static lv_obj_t * red_slider, * green_slider, * blue_slider, * intense_slider;
static lv_obj_t * img1;

static void file_explorer_event_cb(lv_event_t* e);
static void menu_scroll_event_cb(lv_event_t* e);
static lv_obj_t * create_text(lv_obj_t * parent, const char * icon, const char * txt, lv_menu_builder_variant_t builder_variant);
static void ctrl_btnm_event_cb(lv_event_t * e);
static void slider_event_cb(lv_event_t * e);
static lv_obj_t * create_slider(lv_obj_t * parent, const char * icon, const char * txt, int32_t min, int32_t max, int32_t val);
static void layer_top_event_cb(lv_event_t * e);
static void* lv_100ask_nes_run_wrapper(void* arg);
static void init_my_nes_front_end(lv_obj_t* parent);

void start_nes(void);

#endif // NES_INSTANCE_H
