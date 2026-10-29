#include <stdio.h>
#include <math.h>

double godel_critical_radius(double omega) {
    return log(1.0 + sqrt(2.0)) / omega;
}

int main() {
    double omega = 1.0;
    double rc = godel_critical_radius(omega);
    printf("Gödel rotation parameter omega: %.1f\n", omega);
    printf("Critical radius for CTCs: %.4f\n", rc);

    double radii[] = {0.5, 1.0, 1.2, 1.5, 2.0};
    for (int i = 0; i < 5; i++) {
        double r = radii[i];
        printf("r = %.1f  %s\n", r, r > rc ? "CTC region" : "causal region");
    }

    return 0;
}
