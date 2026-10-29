#include <stdio.h>
#include <math.h>

double wavefunction(double x, double L, double c1, double c2) {
    double psi1 = sin(M_PI * x / L);
    double psi2 = sin(2.0 * M_PI * x / L);
    return c1 * psi1 + c2 * psi2;
}

double probability_density(double x, double L, double c1, double c2) {
    double psi = wavefunction(x, L, c1, c2);
    return psi * psi;
}

int main() {
    double L = 1.0;
    double c1 = 0.707;
    double c2 = 0.707;
    printf("Box length: %.1f\n", L);
    printf("Coefficients: c1=%.3f, c2=%.3f\n", c1, c2);

    double positions[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9};
    for (int i = 0; i < 9; i++) {
        double p = probability_density(positions[i], L, c1, c2);
        printf("x = %.1f  probability density = %.6f\n", positions[i], p);
    }

    return 0;
}
