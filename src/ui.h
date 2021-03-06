#ifndef __ui_h__
#define __ui_h__

#include "graphics_types.h"

typedef struct UI UI;

UI* create_ui(Graphics* G);
void destroy_ui(UI* U);

void resize_ui(UI* U, int width, int height);

void add_string(UI* U, float x, float y, float scale, const char* string);
void draw_ui(UI* U);

#endif /* include guard */
