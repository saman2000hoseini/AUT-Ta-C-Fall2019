#include<stdio.h>

int main()
{
    int w,h,k;
    scanf("%d%d%d",&w,&h,&k);
    int sum=0;
    for(int i=0;i<k;i++)
    {
        if(h<=0 || w<=0)
            break;
        sum+=(w+h-2)*2;
        w-=4;
        h-=4;
    }
    printf("%d",sum);
    return 0;
}
