#include <stdio.h>
#include <stdbool.h>


int main()
{
    int n;
    scanf("%d", &n);
    bool isNotPrime[n + 1];
    for (int i = 2; i <= n; ++i)
        if (isNotPrime[i] == false)
        {
            printf("%d ", i);
            for (int j = 2 * i; j <= n; j += i)
                isNotPrime[j] = true;
        }
    return 0;
}