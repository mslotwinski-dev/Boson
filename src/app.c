#include "app.h"

void App() {
  printf("Boson!\n");

  char command[MAX_CMD_LEN];

  while (Loop(command));

  return;
}

bool Loop(char command[MAX_CMD_LEN]) {
  printf("Boson > ");
  fflush(stdout);

  if (fgets(command, MAX_CMD_LEN, stdin) == NULL) {
    Loop(command);
  }

  command[strcspn(command, "\n")] = '\0';

  if (strcmp(command, "exit") == 0) {
    return false;
  }

  printf("Wpisano: %s\n", command);
  return true;
}