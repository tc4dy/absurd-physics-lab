#include <stdio.h>

typedef struct {
    double delta_x;
    double delta_p;
} ParticleState;

void measure_position(ParticleState *p, double precision) {
    if (precision <= 0.0) return;
    p->delta_x = precision;
    p->delta_p = 1.0 / precision;
    printf("Target position precision: %g\n", p->delta_x);
    printf("Forced momentum uncertainty: %.4f\n", p->delta_p);
}

void measure_momentum(ParticleState *p, double precision) {
    if (precision <= 0.0) return;
    p->delta_p = precision;
    p->delta_x = 1.0 / precision;
    printf("Target momentum precision: %g\n", p->delta_p);
    printf("Forced position uncertainty: %.4f\n", p->delta_x);
}

int main() {
    ParticleState p;
    p.delta_x = 1.0;
    p.delta_p = 1.0;

    printf("Initial state: dx=%g, dp=%g\n", p.delta_x, p.delta_p);
    
    printf("Attempting highly precise position measurement...\n");
    measure_position(&p, 0.01);
    
    printf("Attempting highly precise momentum measurement...\n");
    measure_momentum(&p, 0.001);

    return 0;
}
