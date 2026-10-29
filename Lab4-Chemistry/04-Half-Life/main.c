#include <stdio.h>
#include <math.h>

double remaining_amount(double N0, double half_life, double t) {
    double lam = log(2.0) / half_life;
    return N0 * exp(-lam * t);
}

int main() {
    double N0 = 100.0;
    double half_life = 5.0;
    printf("Initial amount: %.1f\n", N0);
    printf("Half-life: %.1f years\n", half_life);

    int times[] = {0, 5, 10, 15, 20, 25, 30};
    for (int i = 0; i < 7; i++) {
        double N = remaining_amount(N0, half_life, (double)times[i]);
        printf("t = %3d years  remaining = %.4f  (%.1f%%)\n", 
               times[i], N, (N / N0) * 100.0);
    }

    return 0;
}
