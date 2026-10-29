#include <stdio.h>
#include <math.h>

void tidal_terms(double r, double *radial, double *transverse) {
    double G = 6.67430e-11;
    double M = 1.989e30;
    double factor = G * M / (r * r * r);
    *radial = 2.0 * factor;
    *transverse = -factor;
}

int main() {
    double r = 1.0e7;
    double x_parallel = 1.0;
    double x_perp = 1.0;
    double dt = 1.0e-4;
    int steps = 1000;

    printf("Black hole mass: %.3e kg\n", 1.989e30);
    printf("Radial coordinate: %.1e m\n", r);
    printf("Initial radial separation: %.1f m\n", x_parallel);
    printf("Initial transverse separation: %.1f m\n", x_perp);

    for (int i = 0; i < steps; i++) {
        double a_parallel, a_perp;
        tidal_terms(r, &a_parallel, &a_perp);
        x_parallel += 0.5 * a_parallel * dt * dt;
        x_perp += 0.5 * a_perp * dt * dt;
    }

    printf("Final radial separation: %.6e m\n", x_parallel);
    printf("Final transverse separation: %.6e m\n", x_perp);

    return 0;
}
