#include <stdio.h>

#define MAX_MEDICOES 100

float temperaturas[MAX_MEDICOES];
int totalRegistros = 0;

int menu()
{
    int opcao;
    printf("\n--- SISTEMA DE TEMPERATURA IFPI ZONA SUL ---\n");
    printf("1. Inserir Temperatura\n");
    printf("2. Relatorio\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void inserir_temperatura()
{
    printf("Digite a temperatura medida: ");
    scanf("%f", &temperaturas[totalRegistros]);
    printf("Temperatura registrada com sucesso!\n");
    totalRegistros++;
}

void gerar_relatorio(){
    
    printf("\n--- RELATORIO DE MEDICOES ---\n");
    int soma = 0; // Reinicia a soma para o calculo

    for (int i = 0; i < totalRegistros; i++)
    {
        printf("%.2f C\n", temperaturas[i]);
        soma += temperaturas[i];
    }

    float media = soma / totalRegistros;

    printf("-----------------------------\n");
    printf("Total de registros: %d\n", totalRegistros);
    printf("Media das temperaturas: %.2f C\n", media);
    printf("-----------------------------\n");
}

int main()
{
    int totalRegistros = 0;
    int opcao = 1;
    float soma, media;

    while (opcao != 3){
        opcao = menu();

        if (opcao == 1){
            inserir_temperatura();
        }else if (opcao == 2){
            gerar_relatorio();
        }else if (opcao == 3){
            printf("Sistema Encerrado \n");
        }else{
            printf("Opcao invalida!\n");
        }
    }
    return 0;
}