#include "my.h"

int main(int ac, char **av)
{
    if (ac == 1) {
        printf("Type -h or --help for the usage\n");
        return (1);
    } else if (ac == 2 && strncmp(av[1], "-h", strlen(av[1])) == 0) {
        help();
        return (0);
    } else if (ac == 2 && strncmp(av[1], "--help", strlen(av[1])) == 0) {
        help();
        return (0);
    } else
        emo_pr(av);
}
