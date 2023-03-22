/*
** EPITECH PROJECT, 2023
** test-repo-for-SEED-job-my-marvin
** File description:
** test_strlen
*/

int my_strlen(char const *str);
#include <stdio.h>

int main(void)
{
    int ret = 0;
    if (my_strlen("Hello World!") != 12) {
        printf("TEST 1: KO\n");
        ret += 1;
    } else printf("TEST 1: OK\n");
    if (my_strlen("Hello World!") != 12) {
        printf("TEST 2: KO\n");
        ret += 1;
    } else printf("TEST 2: OK\n");
    if (my_strlen("Hello World!") != 12) {
        printf("TEST 3: KO\n");
        ret += 1;
    } else printf("TEST 3: OK\n");
    if (my_strlen("Hello World!") != 12) {
        printf("TEST 4: KO\n");
        ret += 1;
    } else printf("TEST 4: OK\n");
    if (my_strlen("Hello World!") != 12) {
        printf("TEST 5: KO\n");
        ret += 1;
    } else printf("TEST 5: OK\n");
    printf("Total: %i/5 \n", 5 - ret);
    if (ret) printf("%i tests failed", ret);
    return ret;
}