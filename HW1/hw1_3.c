#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int m =0;
    int temp = n;
    while(temp!=0)
    {
        m = m*10 + temp%10;
        temp/=10;
    }
    printf("%d is reversed: %d",n,m);
    return 0;
}