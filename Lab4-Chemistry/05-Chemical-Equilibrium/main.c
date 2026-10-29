#include <stdio.h>
#include <math.h>

void solve_equilibrium(double a0, double b0, double c0, double K, 
                       double *a_out, double *b_out, double *c_out) {
    double x = 0.0;
    double dx = 0.001;
    for (int i = 0; i < 10000; i++) {
        double a = a0 - x;
        double b = b0 - x;
        double c = c0 + x;
        if (a <= 0.0 || b <= 0.0) break;
        double Q = c / (a * b);
        if (fabs(Q - K) < 1e-6) break;
        if (Q < K) x += dx;
        else x -= dx;
    }
    *a_out = a0 - x;
    *b_out = b0 - x;
    *c_out = c0 + x;
}

int main() {
    double a0 = 1.0, b0 = 1.0, c0 = 0.0;
    double K = 4.0;
    double a, b, c;

    printf("Initial concentrations: A=%.1f, B=%.1f, C=%.1f\n", a0, b0, c0);
    printf("Equilibrium constant K = %.1f\n", K);

    solve_equilibrium(a0, b0, c0, K, &a, &b, &c);
    double Q = c / (a * b);

    printf("Equilibrium concentrations: A=%.6f, B=%.6f, C=%.6f\n", a, b, c);
    printf("Reaction quotient Q = %.6f\n", Q);

    return 0;
}
