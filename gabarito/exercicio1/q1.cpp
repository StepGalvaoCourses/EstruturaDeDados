#include <stdio.h>

int main(){
    double altura, largura;
    double area,perimetro;

    printf("Digite a altura: ");
    scanf("%lf",&altura);
    printf("Digite a largura: ");
    scanf("%lf",&largura);

    area = altura * largura;
    perimetro = 2*altura + 2*largura;

    printf("Area = %lf m2 \n",area);
    printf("Perimetro = %lf m \n",perimetro);



}