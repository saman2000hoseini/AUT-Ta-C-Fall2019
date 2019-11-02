#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int nd = 0;
    int m = 0;
    while(n!=0)
    {
        m*=10;
        m+= n%10;   //m = m + n mod 10
        n/=10;  // n = n/10
        nd++;
    }
    int r = 0;
    while(m!=0)
    {
        nd--;
        int d=m%10;
        if(d==0)
            r*=10;
        r*=10;
        r+=d;
        m/=10;
    }
    while(nd>0)
    {
        r *= 100;
        nd--;
    }
    printf("%d",r);
    return 0;
}