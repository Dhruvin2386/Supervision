#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("sample.txt can't open.\n");
        return 1;
    }
    fclose(file);
    return 0;
}