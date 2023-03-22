/*
** EPITECH PROJECT, 2023
** test-repo-for-SEED-job-my-marvin
** File description:
** main
*/

int my_strlen(char const *str);
#include <stdio.h>

// how do i declare ac as not used ?


int main(int ac, char **av, char **env)
{
    if (!env[0])
        return 84;
    (void)ac;
    printf("%i\n", my_strlen(av[1]));
    return 0;
}