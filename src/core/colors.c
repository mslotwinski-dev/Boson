#include "colors.h"

const char* ColorCodes[] = {
    COLOR_RESET,
    COLOR_YELLOW,
    COLOR_GREEN,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_MAGENTA,
    COLOR_CYAN,
    COLOR_WHITE,
    COLOR_BOLD,
    COLOR_UNDERLINE,
    COLOR_INVERSE,
    COLOR_BRIGHT,
    COLOR_BRIGHT_RED,
    COLOR_BRIGHT_GREEN,
    COLOR_BRIGHT_YELLOW,
    COLOR_BRIGHT_BLUE,
    COLOR_BRIGHT_MAGENTA,
    COLOR_BRIGHT_CYAN,
};

const char* GetColor(int i) {
  if (i < 0 || i >= sizeof(ColorCodes) / sizeof(ColorCodes[0])) {
    return COLOR_RESET;
  }

  return ColorCodes[i];
}
