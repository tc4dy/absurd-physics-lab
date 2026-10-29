#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char particle_a[8];
    char particle_b[8];
    int is_collapsed;
} EntangledPair;

void measure_a(EntangledPair *pair) {
    if (!pair->is_collapsed) {
        int r = rand() % 2;
        if (r == 0) {
            strcpy(pair->particle_a, "up");
            strcpy(pair->particle_b, "down");
        } else {
            strcpy(pair->particle_a, "down");
            strcpy(pair->particle_b, "up");
        }
        pair->is_collapsed = 1;
    }
}

int main() {
    srand(time(NULL));
    EntangledPair pair;
    strcpy(pair.particle_a, "unknown");
    strcpy(pair.particle_b, "unknown");
    pair.is_collapsed = 0;

    printf("Entangled pair created. State is a shared superposition.\n");
    printf("Particle A moved to Earth. Particle B moved to Mars.\n");
    
    printf("Measuring Particle A...\n");
    measure_a(&pair);
    printf("Particle A observed as: %s\n", pair.particle_a);
    
    printf("Checking Particle B instantaneously...\n");
    printf("Particle B observed as: %s\n", pair.particle_b);

    return 0;
}
