#include <stdio.h>

int main()
{
    long int n, sum = 0;
    scanf("%ld", &n);
    for (int i = 1; i <= n; ++i)
        sum += i;
    printf("%ld", sum * sum - sum);
    return 0;
}
