#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nAntes da troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    trocar(&A, &B);

    printf("\nApos a troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
