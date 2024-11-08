#include <stdio.h>

int soma(int a, int b){
    int resultado = a + b;
    return resultado;
}

int main(){
    int num1,num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    int r = soma(num1,num2);
    printf("%d",r);
}