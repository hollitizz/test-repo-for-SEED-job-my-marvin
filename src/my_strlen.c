/*
** EPITECH PROJECT, 2023
** test-repo-for-SEED-job-my-marvin
** File description:
** my_strlen
*/


int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}