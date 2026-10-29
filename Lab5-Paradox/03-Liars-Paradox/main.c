#include <stdio.h>

int main() {
    int statement_is_true = 1;
    int iterations = 0;

    while (iterations < 10) {
        statement_is_true = !statement_is_true;
        printf("Evaluation %d: Statement is %s\n", iterations + 1, statement_is_true ? "true" : "false");
        iterations++;
    }

    printf("The system cannot stabilize.\n");
    return 0;
}
