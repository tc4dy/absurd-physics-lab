#include <stdio.h>
#include <math.h>

void calculate_dilated_time(double proper_time, double velocity_fraction, double *factor, double *dilated_time) {
    *factor = 1.0 / sqrt(1.0 - (velocity_fraction * velocity_fraction));
    *dilated_time = proper_time * (*factor);
}

int main() {
    double proper_time = 10.0;
    double velocity = 0.8;
    double factor, dilated;

    calculate_dilated_time(proper_time, velocity, &factor, &dilated);

    printf("Velocity: %.0f%% the speed of light\n", velocity * 100);
    printf("Proper time on spaceship: %.1f years\n", proper_time);
    printf("Lorentz factor: %.4f\n", factor);
    printf("Time passed on Earth: %.4f years\n", dilated);

    return 0;
}
