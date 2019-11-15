#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    long n, r1, r2, r3, r4;
    double rnd;
    scanf("%ld", &n);
    rnd = (double) rand() / RAND_MAX;
    r1 = n * rnd;
    if (r1 % 2 == 1)
        r1--;
    printf("%ld\n", r1);
    rnd = (double) rand() / RAND_MAX;
    r2 = n * rnd;
    if (r2 % 2 == 1)
        r2--;
    printf("%ld\n", r2);
    rnd = (double) rand() / RAND_MAX;
    r3 = n * rnd;
    if (r3 % 2 == 1)
        r3--;
    printf("%ld\n", r3);
    rnd = (double) rand() / RAND_MAX;
    r4 = n * rnd;
    if (r4 % 2 == 1)
        r4--;
    printf("%ld", r4);
    return 0;
}