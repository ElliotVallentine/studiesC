#include <stdio.h>

int main() {
    int idade = 0;

    printf("Idade inicial: %i\n", idade);
    printf("informe uma idade: ");
    scanf("%i", &idade);

    printf("Idade informada: %i anos\n", idade);
}