#include <stdio.h>

const int MAX_TELEFONE = 100;
int telefones[MAX_TELEFONE];
int totalTelefones = 0;

int menu(){
    int opcao;
    printf("\n--- SISTEMA DE TELEFONES ---\n");
    printf("1. Adicionar telefone\n");
    printf("2. Listar telefones\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void inserir_telefone(){
    int telefone = 0;
    printf("++++++++++++++++++++++++++++++++++++++++\n");
    printf("Digite o telefone (apenas numeros): ");
    scanf("%d", &telefone);
    telefones[totalTelefones] = telefone; 

    printf("Telefone adicionado com sucesso!\n");
    totalTelefones++;
    printf("++++++++++++++++++++++++++++++++++++++++\n");
}

void listar_telefones(){
    printf("+++++++++++++ Telefones Adicionado +++++++++++++++++\n");

    for (int i = 0; i < totalTelefones; i++){
        printf("%d. %d\n", i + 1, telefones[i]);
    }
    printf("++++++++++++++++++++++++++++++++++++++++\n");
}

int main(){

    int opcao = 0;

    while (opcao != 3){
        opcao = menu();

        if(opcao == 1){
            inserir_telefone();
        }else if(opcao == 2){
            listar_telefones();
        }else if(opcao == 3){
            printf("++++++++++++++++++++++++++++++++++++++++\n");
            printf("Fim do Programa \n");
            printf("++++++++++++++++++++++++++++++++++++++++\n");
        }else{
            printf("++++++++++++++++++++++++++++++++++++++++\n");
            printf("Opção inválida");
            printf("++++++++++++++++++++++++++++++++++++++++\n");
        }
    }
    return 0;
}