#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    srand(time(NULL));
    int a1,b1,a2,b2,a3,b3,a4,b4,a5,b5,a6,b6;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3,&a4,&b4,&a5,&b5,&a6,&b6);
    int x1,x2,x3,y1,y2,y3,min,diff,side1,side2,side3;
    min = a1;
    diff = abs(a1-b1);
    if(a1>b1)
        min = b1;
    x1 = (rand()%(diff+1))+min;
    min = a2;
    diff = abs(a2-b2);
    if(a2>b2)
        min = b2;
    y1 = (rand()%(diff+1))+min;
    min = a3;
    diff = abs(a3-b3);
    if(a3>b3)
        min = b3;
    x2 = (rand()%(diff+1))+min;
    min = a4;
    diff = abs(a4-b4);
    if(a4>b4)
        min = b4;
    y2 = (rand()%(diff+1))+min;
    min = a5;
    diff = abs(a5-b5);
    if(a5>b5)
        min = b5;
    x3 = (rand()%(diff+1))+min;
    min = a6;
    diff = abs(a6-b6);
    if(a6>b6)
        min = b6;
    y3 = (rand()%(diff+1))+min;
    side1 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    side2 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    side3 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    printf("%d",side1+side2+side3);
    return 0;
}
