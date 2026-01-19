#include <stdio.h>

int telefones[100];
int posicao = 0;

int menu(){
    int opcao;
    printf("----------SISTEMA DE TELEFONES--------\n");
    printf("1.Inserir telefone\n");
    printf("2.Listar telefones\n");
    printf("3.Sair\n");
    printf("Escolha uma opção:");
    scanf("%d",&opcao);
    return opcao;
}

void inserir_telefone(){
    int telefone;
    printf("Digite o telefone:");
    scanf("%d",&telefones[posicao]);
    printf("Telefone inserido com sucesso!!!\n");
    posicao = posicao+1;
}

void listar_telefones(){
    for(int i =0; i<=posicao-1;i++){
        printf("%d", telefones[i]);
    }
}
int main(){
    int escolha=0;
    while(escolha!=3){
        escolha = menu();
        if(escolha == 1){
            inserir_telefone();
        }else if(escolha == 2){
            listar_telefones();
        }else if(escolha == 3){
            printf("Programa Finalizado\n");
        }else{
            printf("Opcao Invalida\n");
        }
    }
}
