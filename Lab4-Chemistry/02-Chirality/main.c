#include <stdio.h>

double scalar_triple_product(double a[3], double b[3], double c[3]) {
    double cross_bc[3];
    cross_bc[0] = b[1] * c[2] - b[2] * c[1];
    cross_bc[1] = b[2] * c[0] - b[0] * c[2];
    cross_bc[2] = b[0] * c[1] - b[1] * c[0];
    return a[0] * cross_bc[0] + a[1] * cross_bc[1] + a[2] * cross_bc[2];
}

int main() {
    double center[3] = {0.0, 0.0, 0.0};
    double sub1[3] = {1.0, 0.0, 0.0};
    double sub2[3] = {0.0, 1.0, 0.0};
    double sub3[3] = {0.0, 0.0, 1.0};

    double a[3], b[3], c[3];
    for (int i = 0; i < 3; i++) {
        a[i] = sub1[i] - center[i];
        b[i] = sub2[i] - center[i];
        c[i] = sub3[i] - center[i];
    }

    double stp = scalar_triple_product(a, b, c);
    printf("Chiral center at origin\n");
    printf("Substituent 1: (%.1f, %.1f, %.1f)\n", sub1[0], sub1[1], sub1[2]);
    printf("Substituent 2: (%.1f, %.1f, %.1f)\n", sub2[0], sub2[1], sub2[2]);
    printf("Substituent 3: (%.1f, %.1f, %.1f)\n", sub3[0], sub3[1], sub3[2]);
    printf("Chirality: %s\n", stp > 0 ? "R" : "S");

    return 0;
}
