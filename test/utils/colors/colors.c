#include <stdio.h>
#include "colors.h"

void black(const char *text) {
    printf("%s%s%s", BLACK, text, RESET);
}

void red(const char *text) {
    printf("%s%s%s", RED, text, RESET);
}

void green(const char *text) {
    printf("%s%s%s", GREEN, text, RESET);
}

void yellow(const char *text) {
    printf("%s%s%s", YELLOW, text, RESET);
}

void blue(const char *text) {
    printf("%s%s%s", BLUE, text, RESET);
}

void magenta(const char *text) {
    printf("%s%s%s", MAGENTA, text, RESET);
}

void cyan(const char *text) {
    printf("%s%s%s", CYAN, text, RESET);
}

void white(const char *text) {
    printf("%s%s%s", WHITE, text, RESET);
}
