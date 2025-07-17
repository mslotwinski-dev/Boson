#include "app.h"

const char *menuoptions[] = {"Fire in forest"};

void App() {
  SetConsoleOutputCP(CP_UTF8);

  printf("\x1B[33mBoson\033[0m\n");
  printf("Press any key to start...\n");

  _getch();

  int selected = OpenMenu(menuoptions, 1);

  switch (selected) {
    case 0: Forest(); break;
    default: printf("Nieznana opcja\n"); break;
  }
}

int OpenMenu(const char *options[], int count) {
  int selected = 0;
  int ch;

  while (true) {
    ShowMenu(options, selected, count);
    ch = _getch();

    if (ch == 0 || ch == 224) {
      ch = _getch();

      if (ch == UP_ARROW && selected > 0)
        selected--;
      else if (ch == DOWN_ARROW && selected < count - 1)
        selected++;
    } else if (ch == ENTER_KEY) {
      break;
    }
  }

  system("cls");

  return selected;
}

void ShowMenu(const char *options[], int selected, int count) {
  system("cls");

  printf("\x1B[33mBoson\033[0m\n");
  printf("Select preset:\n");

  for (int i = 0; i < count; i++) {
    if (i == selected)
      printf("> %s\n", options[i]);
    else
      printf("  %s\n", options[i]);
  }
}