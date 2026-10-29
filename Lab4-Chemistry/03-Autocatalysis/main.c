#include <stdio.h>

double autocatalytic_rate(double p, double a, double k1, double k2) {
    return k1 * a * p + k2 * p * p;
}

int main() {
    double a0 = 1.0;
    double p0 = 0.01;
    double k1 = 0.1;
    double k2 = 0.5;
    double dt = 0.01;
    int steps = 1000;

    double a = a0;
    double p = p0;
    printf("Initial reactant A: %.1f\n", a0);
    printf("Initial product P: %.2f\n", p0);
    printf("Rate constants: k1=%.1f, k2=%.1f\n", k1, k2);

    for (int i = 0; i < steps; i++) {
        double rate = autocatalytic_rate(p, a, k1, k2);
        double dp = rate * dt;
        p += dp;
        a -= dp;
        if (i % 100 == 0) {
            printf("t = %.2f  P = %.6f  A = %.6f\n", i * dt, p, a);
        }
    }

    printf("Final P: %.6f  Final A: %.6f\n", p, a);
    return 0;
}
