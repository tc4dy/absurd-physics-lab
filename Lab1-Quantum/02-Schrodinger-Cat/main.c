#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    double decay_probability;
    char state[20];
} CatBox;

void observe(CatBox *box) {
    if (strcmp(box->state, "superposition") == 0) {
        double r = (double)rand() / (double)RAND_MAX;
        if (r < box->decay_probability) {
            strcpy(box->state, "dead");
        } else {
            strcpy(box->state, "alive");
        }
    }
}

int main() {
    srand(time(NULL));
    CatBox box;
    box.decay_probability = 0.5;
    strcpy(box.state, "superposition");

    printf("Box sealed. Decay probability: %.0f%%\n", box.decay_probability * 100);
    printf("Current state: %s\n", box.state);
    
    printf("Opening the box to observe...\n");
    observe(&box);
    
    printf("Observed state: %s\n", box.state);

    return 0;
}
