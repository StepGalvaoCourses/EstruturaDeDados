#include <stdio.h>

#define MAX_ALUNOS 100

float notas[MAX_ALUNOS];
int totalNotas = 0;

int menu()
{
    int opcao;
    printf("\n--- SISTEMA DE NOTAS ESCOLARES ---\n");
    printf("1. Registrar Nota\n");
    printf("2. Listar Notas\n");
    printf("3. Relatorio Final\n");
    printf("4. Finalizar\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void inserir_nota()
{
    printf("Digite a nota do aluno: ");
    scanf("%f", &notas[totalNotas]);
    printf("Nota registrada com sucesso!\n");
    totalNotas++;
}

void listar_notas()
{
    printf("\n--- LISTA DE NOTAS ---\n");
    if (totalNotas == 0)
    {
        printf("Nenhuma nota cadastrada.\n");
    }
    else
    {
        for (int i = 0; i < totalNotas; i++)
        {
            printf("Aluno %d: %.1f\n", i + 1, notas[i]);
        }
    }
}

void gerar_relatorio(){
    if (totalNotas == 0){
        printf("\nNao ha dados para gerar o relatorio.\n");
    }
    else{
        float soma = 0;
        int aprovados = 0;
        int reprovados = 0;

        for (int i = 0; i < totalNotas; i++){
            soma += notas[i];
            if (notas[i] >= 7.0){ // Critério de aprovação: 7.0
                aprovados++;
            }
        }
        reprovados = totalNotas - aprovados;

        printf("\n--- RELATORIO DA TURMA ---\n");
        printf("Media da turma: %.2f\n", soma / totalNotas);
        printf("Total de aprovados: %d\n", aprovados);
        printf("Total de reprovados: %d\n", reprovados);
        printf("--------------------------\n");
    }
}

int main(){

    int opcao = 1;

    while (opcao != 3){
        opcao = menu();
        if (opcao == 1)
        {
            inserir_nota();
        }
        else if (opcao == 2)
        {
            listar_notas();
        }
        else if (opcao == 3){
            gerar_relatorio();
        }
        else if (opcao == 4){
            printf("Sistema encerrado.\n");
        }else{
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}