#include <stdio.h>


long factoriel(int n)
{
    if (n == 1)
        return 1;
    return n * factoriel(n - 1);
}

long fact(int n)
{
    long fa = 1;
    for (int i = 1; i <= n; ++i)
    {
        fa *= i;
    }
    return fa;
}

long combination(int n, int r)
{
    return (factoriel(n) / (fact(n - r) * factoriel(r)));
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%ld",combination(2*n,n));
    return 0;
}
