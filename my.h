#ifndef MY_H_
#define MY_H_

#define WHITE "\033[37m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define GREY "\033[30m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void help(void);
void emo_pr(char **);

#endif
