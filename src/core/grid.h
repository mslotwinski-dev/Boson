#pragma once

#include "../include.h"
#include "colors.h"

#define GRID_WIDTH 100
#define GRID_HEIGHT 40
#define GRID_SIZE (GRID_WIDTH * GRID_HEIGHT)

int **CreateGrid(int defaultValue);
void FreeGrid(int **grid);
void Display(int **grid);