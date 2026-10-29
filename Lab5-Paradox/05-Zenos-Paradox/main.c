#include <stdio.h>

int main() {
    double distance = 100.0;
    int steps = 0;

    printf("Initial distance to target: %.1f meters\n", distance);
    printf("Beginning the infinite subdivision...\n");

    while (distance > 1e-15) {
        distance /= 2.0;
        steps++;
    }

    printf("Target reached after %d subdivisions.\n", steps);
    printf("Final calculated distance: %e\n", distance);

    return 0;
}
