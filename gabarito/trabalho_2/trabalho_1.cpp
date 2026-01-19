#include <stdio.h>
#include <string.h>

struct tipo_aluno{
    char nome[20];
    int matricula;
    float media;
};
typedef struct tipo_aluno Aluno;

Aluno alunos[100];
int indiceAtual = 0;


int menu(){
    int opcao;
    printf("----------SISTEMA DE ALUNOS--------\n");
    printf("1.Inserir Aluno\n");
    printf("2.Listar Aluno\n");
    printf("3.Sair\n");
    printf("Escolha uma opção:");
    scanf("%d",&opcao);
    return opcao;
}

void inserir_aluno(){
    printf("Digite a matricula:");
    scanf("%d",&alunos[indiceAtual].matricula );
    printf("Digite a nome:");
    scanf("%s",alunos[indiceAtual].nome );
    printf("Digite a media:");
    scanf("%f",&alunos[indiceAtual].media );
    indiceAtual = indiceAtual + 1;

    printf("Aluno inserido com sucesso \n");
}

void listar_alunos(){
    printf("Lista de Alunos\n");
    for(int i=0;i<indiceAtual;i++){
        printf("-------------------\n");
        printf("Nome: %s \n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula); 
        printf("Média: %f\n", alunos[i].media); 
        printf("-------------------\n");
    }
}

int main(){
    int escolha=0;
    while(escolha!=3){
        escolha = menu();
        if(escolha == 1){
            inserir_aluno();
        }else if(escolha == 2){
            listar_alunos();
        }else if(escolha == 3){
            printf("Programa Finalizado\n");
        }else{
            printf("Opcao Invalida\n");
        }
    }
}
  


