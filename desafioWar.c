#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main (){
    Territorio territorios[5];

    printf("Digite 1 para cadastrar territórios\n");
    printf("Digite 2 para listar os territórios\n");
    printf("Digite 3 para sair\n");
    printf("Digite a opção desejada: ");
    int opcao;
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("### Cadastro de Territórios ###\n\n");
        for (int i = 0; i < 5; i++) {
            printf("Território %d:\n", i+1);
            printf("Digite o nome do território: ");
            scanf("%s", territorios[i].nome);
            printf("Digite a cor do território: ");
            scanf("%s", territorios[i].cor);
            printf("Digite o número de tropas: ");
            scanf("%d", &territorios[i].tropas);
            printf("\n");
        }
        printf("Todos os territórios foram cadastrados com sucesso!\n\n");

        // Exibe os dados de cada território após o cadastro
        printf("=== Territórios cadastrados ===\n");
        for (int i = 0; i < 5; i++) {
            printf("Território %d\n", i+1);
            printf("Nome : %s\n", territorios[i].nome);
            printf("Cor  : %s\n", territorios[i].cor);
            printf("Tropas: %d\n", territorios[i].tropas);
            printf("--------------------------\n");
        }
        break;
    case 2:
        printf("### Lista de Territórios ###\n\n");
        for (int i = 0; i < 5; i++) {
            printf("Território %d:\n", i+1);
            printf("Nome: %s\n", territorios[i].nome);
            printf("Cor: %s\n", territorios[i].cor);
            printf("Tropas: %d\n\n", territorios[i].tropas);
        }
        break;
    case 3:
        printf("Saindo do programa...\n");
        return 0;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

    return 0;
}
