#include <stdio.h>

long c(int n, int m)
{
    if (m == 0)
        return 1;
    if (m == 1)
        return n;
    if (n == m)
        return 1;
    return c(n - 1, m - 1) + c(n - 1, m);
}


int main()
{
    int n;
    scanf("%d",&n);
    printf(c(2*n,n));
}