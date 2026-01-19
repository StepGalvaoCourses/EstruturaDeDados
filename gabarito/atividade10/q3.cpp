#include <stdio.h>
#include <string.h>

//Criando a estrutura
struct tipo_carro{
    char marca[20];
    char modelo[20];
    int ano;
};
typedef struct tipo_carro Carro;

int main(){
    //Criando uma variável do tipo tipo_carro
    Carro gol;

    //Atribuindo valores aos campos da variável
    gol.ano = 2020;
    strcpy(gol.marca,"Volkswagem");
    strcpy(gol.modelo,"Gol");


    //Exibindo os valores
    printf("Carro \n");
    printf("Marca: %s\n",gol.marca);
    printf("Modelo: %s\n",gol.modelo);
    printf("Ano: %d\n",gol.ano);

}