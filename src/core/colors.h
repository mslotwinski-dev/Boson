#pragma once

#define COLOR_RESET "\x1B[0m"
#define COLOR_YELLOW "\x1B[33m"
#define COLOR_GREEN "\x1B[32m"
#define COLOR_RED "\x1B[31m"
#define COLOR_BLUE "\x1B[34m"
#define COLOR_MAGENTA "\x1B[35m"
#define COLOR_CYAN "\x1B[36m"
#define COLOR_WHITE "\x1B[37m"
#define COLOR_BOLD "\x1B[1m"
#define COLOR_UNDERLINE "\x1B[4m"
#define COLOR_INVERSE "\x1B[7m"
#define COLOR_BRIGHT "\x1B[90m"
#define COLOR_BRIGHT_RED "\x1B[91m"
#define COLOR_BRIGHT_GREEN "\x1B[92m"
#define COLOR_BRIGHT_YELLOW "\x1B[93m"
#define COLOR_BRIGHT_BLUE "\x1B[94m"
#define COLOR_BRIGHT_MAGENTA "\x1B[95m"
#define COLOR_BRIGHT_CYAN "\x1B[96m"

const char* GetColor(int i);