#include <stdio.h>

int main(){
    double salario, inss, ir;
    printf("Digite o seu salario:");
    scanf("%lf",&salario);

    if(salario<=2000.00){
        ir = 0;
        inss = salario * 0.07;
    }else{
        ir = salario * 0.15;
        inss = salario * 0.10;
    }

    printf("Salario = R$ %lf\n", salario);
    printf("Imposto de Renda = R$ %lf\n", ir);
    printf("INSS = R$ %lf\n", inss);
}