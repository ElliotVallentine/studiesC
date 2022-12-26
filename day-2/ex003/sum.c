#include <stdio.h>

int main() {

    int num, sum;
    const int num2 = 5;

    printf("informe um número: ");
    scanf("%i", &num);

   sum = num + num2;
   printf("o valor %i somado a %i é resultante em: %i\n",num, num2, sum);

}