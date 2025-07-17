#include "forest.h"

void Forest() {
  int **grid = CreateGrid(2);

  grid[15][20] = 1;  // Example fire position
  grid[16][20] = 1;  // Example fire position
  grid[17][20] = 1;  // Example fire position

  grid[20][20] = 3;  // Example fire position

  Display(grid);

  FreeGrid(grid);
}