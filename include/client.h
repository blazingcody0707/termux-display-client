#pragma once

#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#include "InputEvent.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif
void DisplayClientInit(uint32_t width, uint32_t height, uint32_t channel);

void DisplayClientStart();

void DisplayDraw(const uint8_t *data);

void BeginDisplayDraw(const uint8_t *data);

void DisplayDestroy();

void EndDisplayDraw();

void InputInit(InputHandler handler);

void InputDestroy();

int GetInputSocket();


#ifdef __cplusplus
}
#endif
