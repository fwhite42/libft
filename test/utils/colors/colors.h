#ifndef COLORS_H
#define COLORS_H
#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

void black(const char *text);
void red(const char *text);
void green(const char *text);
void yellow(const char *text);
void blue(const char *text);
void magenta(const char *text);
void cyan(const char *text);
void white(const char *text);

#endif
