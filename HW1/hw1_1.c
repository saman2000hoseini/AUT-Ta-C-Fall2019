#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    printf("%d", a);
    return 0;
}