#include "forest.h"

void GenerateLakes(int** terrain, int numLakes, int maxLakeSize) {
  srand(time(NULL));

  for (int i = 0; i < numLakes; ++i) {
    int x = rand() % GRID_HEIGHT;
    int y = rand() % GRID_WIDTH;

    int lakeSize = rand() % maxLakeSize + 50;

    for (int j = 0; j < lakeSize; ++j) {
      int dir = rand() % 4;
      if (terrain[x][y] == 2) {
        terrain[x][y] = 4;
      }

      if (dir == 0 && x > 0)
        x--;
      else if (dir == 1 && x < GRID_HEIGHT - 1)
        x++;
      else if (dir == 2 && y > 0)
        y--;
      else if (dir == 3 && y < GRID_WIDTH - 1)
        y++;
    }
  }
}

void SetFire(int** terrain, int numFires) {
  srand(time(NULL));

  for (int i = 0; i < numFires; ++i) {
    int x = rand() % GRID_HEIGHT;
    int y = rand() % GRID_WIDTH;

    if (terrain[x][y] == 2) {
      terrain[x][y] = 3;
    }
  }
}

void Forest() {
  int** grid = CreateGrid(2);

  GenerateLakes(grid, 15, 25);

  SetFire(grid, 15);

  Display(grid);

  FreeGrid(grid);
}
