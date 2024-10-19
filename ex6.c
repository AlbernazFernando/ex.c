#include <stdio.h>

int verifica_substring(char *str1, char *str2) {
    char *p1, *p2, *p_inicial;

    if (*str2 == '\0') {
        return 1;  
    }

    for (p1 = str1; *p1 != '\0'; p1++) {
        if (*p1 == *str2) {
            p_inicial = p1; 
            p2 = str2;

            while (*p1 == *p2 && *p2 != '\0') {
                p1++;
                p2++;
            }

            if (*p2 == '\0') {
                return 1;  
            }

            p1 = p_inicial;
        }
    }

    return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    if (verifica_substring(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string NAO ocorre dentro da primeira.\n");
    }

    return 0;
}
