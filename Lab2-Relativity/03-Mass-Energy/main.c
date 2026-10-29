#include <stdio.h>

int main() {
    const long double C = 299792458.0L;
    double mass = 0.001;
    
    long double energy = mass * (C * C);
    
    printf("Mass converted: %.3f kg\n", mass);
    printf("Speed of light: %.0Lf m/s\n", C);
    printf("Energy released: %.4Le Joules\n", energy);
    
    return 0;
}
