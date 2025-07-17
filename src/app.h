#pragma once

#include "include.h"
#include "modules/forest.h"

#define UP_ARROW 72
#define DOWN_ARROW 80
#define ENTER_KEY 13

void App();

int OpenMenu(const char *options[], int count);
void ShowMenu(const char *options[], int selected, int count);