#include <stdio.h>
#include <math.h>

double lorentz_factor(double v) {
    return 1.0 / sqrt(1.0 - v * v);
}

int main() {
    double L = 10.0;
    double v = 0.8;
    double gamma = lorentz_factor(v);
    double t_stationary = 2.0 * L / v;
    double t_traveler = 2.0 * L / (gamma * v);

    printf("Distance to destination: %.1f light-years\n", L);
    printf("Velocity: %.1fc\n", v);
    printf("Lorentz factor: %.4f\n", gamma);
    printf("Stationary twin elapsed time: %.4f years\n", t_stationary);
    printf("Traveling twin elapsed time: %.4f years\n", t_traveler);
    printf("Age difference: %.4f years\n", t_stationary - t_traveler);

    return 0;
}
