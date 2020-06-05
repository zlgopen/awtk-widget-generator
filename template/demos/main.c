/**
 * File:   main.c
 * Author: AWTK Develop Team
 * Brief:  main window sources
 *
 * Copyright (c) 2020 - 2020  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2020-05-29 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include "awtk.h"

static ret_t on_close(void* ctx, event_t* e) {
  tk_quit();

  return RET_OK;
}

ret_t application_init() {
  widget_t* win = NULL;

  template_register();

  win = window_open("main");

  widget_child_on(win, "close", EVT_CLICK, on_close, NULL); 

  return RET_OK;
}

ret_t application_exit() {
  return RET_OK;
}

#include "awtk_main.inc"

