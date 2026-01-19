#include <stdio.h>
#include <string.h>


struct tipo_livro{
    int ISBN;
    char titulo[20];
    int numero_paginas;
};

typedef struct tipo_livro Livro;

int main(){
    Livro biblioteca[2];
    for(int i =0; i<2; i++){
        printf("Digite o ISBN:");
        scanf("%d",&biblioteca[i].ISBN);
        printf("Digite o título:");
        scanf("%s",biblioteca[i].titulo);
        printf("Digite o número de páginas:");
        scanf("%d",&biblioteca[i].numero_paginas);
    }

    for(int i =0; i<2;i++){
        printf("++++++++++++++++++++++Livro+++++++++++++++\n");
        printf("Nome: %s\n",biblioteca[i].titulo);
        printf("Paginas: %d\n",biblioteca[i].numero_paginas);
        printf("ISBN: %d\n",biblioteca[i].ISBN);
    }
}

