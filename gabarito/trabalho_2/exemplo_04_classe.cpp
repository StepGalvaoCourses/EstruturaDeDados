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
    
    int indice = 0;
    
    printf("Digite o ISBN:");
    scanf("%d",&biblioteca[indice].ISBN);
    printf("Digite o título:");
    scanf("%s",biblioteca[indice].titulo);
    printf("Digite o número de páginas:");
    scanf("%d",&biblioteca[indice].numero_paginas);
    indice++;
    
    
    printf("Digite o ISBN:");
    scanf("%d",&biblioteca[indice].ISBN);
    printf("Digite o título:");
    scanf("%s",biblioteca[indice].titulo);
    printf("Digite o número de páginas:");
    scanf("%d",&biblioteca[indice].numero_paginas);


    for(int i =0; i<2;i++){
        printf("++++++++++++++++++++++Livro+++++++++++++++\n");
        printf("Nome: %s\n",biblioteca[i].titulo);
        printf("Paginas: %d\n",biblioteca[i].numero_paginas);
        printf("ISBN: %d\n",biblioteca[i].ISBN);
    }
}

