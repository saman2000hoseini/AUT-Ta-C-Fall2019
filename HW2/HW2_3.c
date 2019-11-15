#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    // caculates the (a) section of problem 3
    double rA = a/(a+b) + b/(b+c) + c/(c+d);
    printf("a: %.2lf\n", rA);

    // caculates the (b) section of problem 3
    double rB = exp(log2(fabs(a))+sin(b)+tan(c));
    printf("b: %.2lf\n", rB);

    // caculates the (c) section of problem 3
    double rC = a * (b + a) * b * (log(c));
    printf("c: %.2lf\n", rC);

    // caculates the (d) section of problem 3
    double rD = pow(1/pow(a, 1.2)+2/pow(b, 2.3), 4.5);
    printf("d: %.2lf", rD);
    return 0;
}