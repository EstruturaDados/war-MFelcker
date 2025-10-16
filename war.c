#include <stdio.h>
#include <string.h>

// Definição da struct Território
typedef struct {
    char nome[50];
    char cor[10];
    int tropas;
} Territorio;

int main () {
    Territorio territorios[5]; // vetor de território

    // Cadastro de territórios
    printf("Cadastro de Territórios:\n");
    for (int i = 1; i < 6; i++) {
        printf("Território %d:\n", i); // Incrementa o índice para exibição

        printf("Nome do território: "); // Solicita o nome do território
        scanf("%s", territorios[i].nome);

        printf("Cor do território: "); // Solicita a cor do território
        scanf("%s", territorios[i].cor);

        printf("Número de tropas: "); // Solicita o número de tropas
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // Linha em branco para melhor visualização

        // Exibe os territórios cadastrados

        printf("Territórios cadastrados:\n");
        for (int i = 0; i < 5; i++) {
            printf("Território %d:\n", i + 1);
            printf("Nome: %s\n", territorios[i].nome);
            printf("Cor do exército: %s\n", territorios[i].cor);
            printf("Número de tropas: %d\n", territorios[i].tropas);
            printf("\n");
        }

    return 0;
       
    }

}
