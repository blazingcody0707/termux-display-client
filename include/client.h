#pragma once

#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#include "termuxdc_event.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif
int display_client_init(uint32_t width, uint32_t height, uint32_t channel);

int display_client_start();

int display_draw(const uint8_t *data);

int begin_display_draw(const uint8_t *data);

void display_destroy();

int end_display_draw();

void event_socket_init(InputHandler handler);

void event_socket_destroy();

int get_input_socket();

int event_wait(termuxdc_event *event);

#ifdef __cplusplus
}
#endif
