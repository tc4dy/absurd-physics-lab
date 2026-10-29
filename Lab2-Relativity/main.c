#include <stdio.h>
#include <math.h>

void calculate_contracted_length(double proper_length, double velocity_fraction, double *factor, double *contracted_length) {
    *factor = 1.0 / sqrt(1.0 - (velocity_fraction * velocity_fraction));
    *contracted_length = proper_length / (*factor);
}

int main() {
    double proper_length = 100.0;
    double velocity = 0.9;
    double factor, contracted;

    calculate_contracted_length(proper_length, velocity, &factor, &contracted);

    printf("Velocity: %.0f%% the speed of light\n", velocity * 100);
    printf("Proper length: %.1f meters\n", proper_length);
    printf("Lorentz factor: %.4f\n", factor);
    printf("Contracted length: %.4f meters\n", contracted);

    return 0;
}
