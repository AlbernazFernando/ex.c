#include <stdio.h>

int main() {

    int var1, var2;

    printf("Endereco de var1: %p\n", (void*)&var1);
    printf("Endereco de var2: %p\n", (void*)&var2);

    if (&var1 > &var2) {
        printf("O maior endereco e: %p (var1)\n", (void*)&var1);
    } else {
        printf("O maior endereco e: %p (var2)\n", (void*)&var2);
    }

    return 0;
}
