#include "./grid.h"

int **CreateGrid(int defaultValue) {
  int **grid = malloc(GRID_HEIGHT * sizeof(int *));
  for (int i = 0; i < GRID_HEIGHT; i++) {
    grid[i] = malloc(GRID_WIDTH * sizeof(int));
    for (int j = 0; j < GRID_WIDTH; j++) {
      grid[i][j] = defaultValue;
    }
  }
  return grid;
}

#define MAX_LINE_LEN 4096

void Display(int **grid) {
  printf("\033[H");

  for (int i = 0; i < GRID_HEIGHT; i++) {
    char line[MAX_LINE_LEN] = "";
    const char *lastColor = NULL;

    for (int j = 0; j < GRID_WIDTH; j++) {
      const char *color = GetColor(grid[i][j]);

      if (color != lastColor) {
        strcat(line, color);
        lastColor = color;
      }

      strcat(line, "██");
    }

    strcat(line, "\033[0m");
    printf("%s\n", line);
  }
}

void FreeGrid(int **grid) {
  for (int i = 0; i < GRID_HEIGHT; i++) {
    free(grid[i]);
  }
  free(grid);
}