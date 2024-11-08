#include <stdio.h>


int main(){
    int idade;
    double salario;

    printf("Digite a sua idade:");
    scanf("%d",&idade);

    printf("Digite a seu salario:");
    scanf("%lf",&salario);

    printf("Idade = %d \n",idade);
    printf("Salario = %0.2lf \n",salario);
}