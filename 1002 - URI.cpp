#include <stdio.h>

int main() {
    float a, pi = 3.14159;

    scanf("%lf", &a);

    
    a = (a * a) * pi;

    
    printf("A=%.4lf\n", a);

    return 0;
}
