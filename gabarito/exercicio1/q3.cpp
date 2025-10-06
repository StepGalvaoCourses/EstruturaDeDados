#include <stdio.h>

int main(){
    double altura = 0;
    double peso = 0;
    double imc = 0;

    printf("Digite a altura: ");
    scanf("%lf",&altura);
    printf("Digite o peso: ");
    scanf("%lf",&peso);

    imc = peso / (altura * altura);
    printf("IMC = %lf \n",imc);
}