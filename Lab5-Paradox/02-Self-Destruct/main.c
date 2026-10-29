#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    printf("Executing file: %s\n", argv[0]);
    printf("Initiating self-destruct sequence...\n");
    
    if (remove(argv[0]) == 0) {
        printf("File successfully deleted from disk.\n");
    } else {
        printf("Failed to delete file.\n");
    }

    printf("Process is still alive and executing from memory.\n");
    return 0;
}
