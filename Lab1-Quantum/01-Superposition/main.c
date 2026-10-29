#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    double alpha;
    double beta;
} Qubit;

void measure(Qubit *q, char *result) {
    double prob_alpha = q->alpha * q->alpha;
    double prob_beta = q->beta * q->beta;
    double total = prob_alpha + prob_beta;
    double threshold = prob_alpha / total;
    
    double r = (double)rand() / (double)RAND_MAX;
    
    printf("Wave function collapsing...\n");
    if (r < threshold) {
        q->alpha = 1.0;
        q->beta = 0.0;
        sprintf(result, "|0>");
    } else {
        q->alpha = 0.0;
        q->beta = 1.0;
        sprintf(result, "|1>");
    }
}

int main() {
    srand(time(NULL));
    Qubit q = {0.8, 0.6};
    char collapsed_state[4];
    
    printf("Initial state vector: [%.2f, %.2f]\n", q.alpha, q.beta);
    printf("Probability of |0>: %.1f%%\n", (q.alpha * q.alpha) * 100.0);
    printf("Probability of |1>: %.1f%%\n", (q.beta * q.beta) * 100.0);
    
    measure(&q, collapsed_state);
    
    printf("Collapsed state: %s\n", collapsed_state);
    printf("Final state vector: [%.2f, %.2f]\n", q.alpha, q.beta);
    
    return 0;
}
