#include <stdio.h>

typedef struct Entity {
    struct Entity *origin;
} Entity;

int main() {
    Entity a;
    Entity b;
    
    a.origin = &b;
    b.origin = &a;
    
    printf("Entities created.\n");
    printf("Entity A's origin is Entity B: %d\n", a.origin == &b);
    printf("Entity B's origin is Entity A: %d\n", b.origin == &a);
    printf("The causal loop is closed. Neither object has an independent origin.\n");
    
    return 0;
}
