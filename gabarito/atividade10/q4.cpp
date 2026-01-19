#include <stdio.h>
#include <string.h>

//Criando a estrutura
struct tipo_carro{
    char marca[20];
    char modelo[20];
    int ano;
};

int main(){
    //Criando uma variável do tipo tipo_carro
    struct tipo_carro gol;

    //Atribuindo valores aos campos da variável
    printf("Digite o ano:");
    scanf("%d",&gol.ano);
    printf("Digite a marca:");
    scanf("%s",gol.marca);
    printf("Digite o modelo:");
    scanf("%s",gol.modelo);

    printf("Carro \n");
    printf("Marca: %s\n",gol.marca);
    printf("Modelo: %s\n",gol.modelo);
    printf("Ano: %d\n",gol.ano);


}