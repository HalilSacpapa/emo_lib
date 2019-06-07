#include "my.h"
#include "struct.h"

int check_syntax(char **av, int i)
{
    int len = (strlen(av[i]) - 1);

    if (len > 3)
        if (av[i][0] == ':' && av[i][len] == ':')
            if (av[i][1] != ' ' && av[i][len - 1] != ' ')
                return (0);
    return (1);
}

void emo_pr(char **av)
{
    int check = 0;

    for (int i = 1; av[i] != NULL; i++)
        for (int j = 0; EMO_CMD[j].emo != NULL; j++)
            if (strncmp(av[i], EMO_CMD[j].emo, strlen(av[i])) == 0)
                if (check_syntax(av, i) == 0) {
                    printf("%s", EMO_CMD[j].str);
                    check++;
                }
    if (check != 0)
        printf("\n");
}
