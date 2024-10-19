#include <stdio.h>

int main() {

    int inteiro = 10;
    float real = 20.5;
    char caractere = 'A';

    int *ptr_inteiro;
    float *ptr_real;
    char *ptr_char;

    ptr_inteiro = &inteiro;
    ptr_real = &real;
    ptr_char = &caractere;
  
    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *ptr_inteiro = 30;
    *ptr_real = 40.75;
    *ptr_char = 'B';

    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
