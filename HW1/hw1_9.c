#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int start = 1;
    int end = 1024;
    int pishmarg = 0;
    int mid = (start + end) / 2;
    while (end - start > 0 && pishmarg < 10)
    {
        if (n > mid)
        {
            start = mid;
            mid = (mid + end) / 2;
        } else
        {
            end = mid;
            mid = (start + mid) / 2;
        }
        pishmarg++;
    }
    printf("%d %d",pishmarg,end);
    return 0;
}