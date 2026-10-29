#include <stdio.h>

double relativistic_addition(double v1, double v2) {
    return (v1 + v2) / (1.0 + (v1 * v2));
}

int main() {
    double v1 = 0.8;
    double v2 = 0.7;
    
    double classical = v1 + v2;
    double relativistic = relativistic_addition(v1, v2);
    
    printf("Velocity 1: %.1fc\n", v1);
    printf("Velocity 2: %.1fc\n", v2);
    printf("Classical addition: %.1fc\n", classical);
    printf("Relativistic addition: %.4fc\n", relativistic);
    
    return 0;
}
