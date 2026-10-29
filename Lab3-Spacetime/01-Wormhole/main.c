#include <stdio.h>
#include <math.h>

double shape_function(double r, double r0) {
    return (r0 * r0) / r;
}

double embedding_profile(double r, double r0, int steps) {
    double dr = (r - r0) / steps;
    double z = 0.0;
    for (int i = 0; i < steps; i++) {
        double ri = r0 + i * dr;
        double b = shape_function(ri, r0);
        if (ri > b) {
            z += sqrt(b / (ri - b)) * dr;
        }
    }
    return z;
}

int main() {
    double r0 = 1.0;
    printf("Wormhole throat radius: %.1f\n", r0);
    printf("Throat condition b(r0) = r0: %.4f == %.1f\n", shape_function(r0, r0), r0);

    double radii[] = {1.0, 1.5, 2.0, 3.0, 5.0, 10.0};
    for (int i = 0; i < 6; i++) {
        double r = radii[i];
        double b = shape_function(r, r0);
        double z = embedding_profile(r, r0, 1000);
        printf("r = %5.1f  b(r) = %.4f  z(r) = %.4f  b(r) < r: %d\n", r, b, z, b < r);
    }

    return 0;
}
