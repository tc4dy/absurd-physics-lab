#include <stdio.h>
#include <math.h>

double schwarzschild_radius(double mass) {
    double G = 6.67430e-11;
    double c = 299792458.0;
    return 2.0 * G * mass / (c * c);
}

double time_dilation_factor(double r, double rs) {
    if (r <= rs) return 0.0;
    return sqrt(1.0 - rs / r);
}

int main() {
    double mass = 1.989e30;
    double rs = schwarzschild_radius(mass);
    printf("Mass: %.3e kg\n", mass);
    printf("Schwarzschild radius: %.4f m\n", rs);

    double factors[] = {2.0, 1.5, 1.1, 1.01, 1.001};
    for (int i = 0; i < 5; i++) {
        double r = rs * factors[i];
        double td = time_dilation_factor(r, rs);
        printf("r = %.4f m  (%.3f rs)  time dilation = %.6f\n", r, factors[i], td);
    }

    return 0;
}
