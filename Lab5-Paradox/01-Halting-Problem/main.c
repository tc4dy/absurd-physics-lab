#include <stdio.h>

void paradox(int prediction) {
    if (prediction) {
        while (1) {}
    }
}

int main() {
    int prediction = 0;
    printf("Analyzer predicts halt: %d\n", prediction);
    printf("Executing program...\n");
    paradox(prediction);
    printf("Program halted.\n");
    return 0;
}
