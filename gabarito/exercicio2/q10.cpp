#include <stdio.h>

int main() {
    int opcao = -1;

    while (opcao != 0){
        // Exibe o menu de opções
        printf("\n1 - Adicionar\n");
        printf("2 - Editar\n");
        printf("3 - Pesquisar\n");
        printf("4 - Remover\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Adicionar\n");
        } else if (opcao == 2) {
            printf("Editar\n");
        } else if (opcao == 3) {
            printf("Pesquisar\n");
        } else if (opcao == 4) {
            printf("Remover\n");
        } else if (opcao == 0) {
            printf("Fim do programa\n");
        } else {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}