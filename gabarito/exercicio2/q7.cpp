#include <stdio.h>

int main(){
    double salario , porcentagem, salario_final, aumento;
    printf("Digite seu salario:");
    scanf("%lf", &porcentagem);
    printf("Digite a porcentagem do aumento:");
    scanf("%lf", &salario);
    aumento = salario * porcentagem/100;
    salario_final = salario + aumento;
    printf("Salario Final = %lf", salario_final);
}
