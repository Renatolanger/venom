#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    do {
        printf("Escolha sua opcao:\n");
        printf("1 - Devs\n");
        printf("2 - Projeto\n");
        printf("3 - Analista\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao) {
            case 1: {
                printf("Devs\n");
                break;
            }
            case 2: {
                printf("Projeto\n");
                break;
            }
            case 3: {
                printf("Analista\n");
                break;
            }
            case 4: {
                printf("Saindo...\n");
                break;
            }
            default: {
                printf("Opcao invalida\n");
                break;
            }
        }
    } while(opcao != 4);

    return 0;
}
