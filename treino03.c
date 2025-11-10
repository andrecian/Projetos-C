#include <stdio.h>
int main(){
    //Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int resultado = 0;
    printf("Digte um numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    printf("Digite o terceiro numero: ");
    scanf("%d",&n3);
    resultado = n1+n2+n3;
    printf("O resultado de %d + %d + %d foi %d",n1,n2,n3,resultado);
    getchar();
    getchar();

    
    
    return 0;
}