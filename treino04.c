#include <stdio.h>
int main(){
    // Leia um número real e imprima o resultado do quadrado desse número.
    float n1 = 0;
    float resultado = 0;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    resultado = n1 * n1;
    printf ("%.2f",resultado);
    getchar();
    getchar();

    return 0;
}