#include <stdio.h>

int gcd(int a, int b)
{
    while (b > 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


int main()
{
    int n;
    scanf("%d", &n);
    int p = 1;
    for (int i = 1; i <= n; ++i)
    {
        // calculating lcm (lowest common multiple = k.m.m :D)
        p = (p * i) / gcd(p, i);
    }
    printf("%d", p);
    return 0;
}