#include <stdio.h>

int main() {
    float arr[10];

    for (int i = 0; i < 10; i++) {
        printf("Endereco do elemento arr[%d]: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}
