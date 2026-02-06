#include <stdio.h>

int main() {

    int escolha1, escolha2, escolha3;
    int creditos = 0;
    int planosAtivos[5];
    int planos = 0;

    do {
        printf("Escolha uma opção\n");

        printf("1. Saldo\n");
        printf("2. Extratos\n");
        printf("3. Planos\n");
        printf("4. Sair\n");
        scanf("%d", &escolha1);

        switch (escolha1) {
            case 1:
                printf("1. Recarga de saldo\n");
                printf("2. Consultar saldo\n");
                scanf("%d", &escolha2);

                if (escolha2 == 1) {
                    printf("Digite a quantia de créditos que deseja acrescentar \n");
                    scanf("%d", &escolha3);

                    creditos += escolha3;

                    printf("Foram acrescentados %d créditos!", escolha3);
                } else {
                    printf("Seu saldo é de %d créditos", creditos);
                }
                break;

            case 2:
                printf("1. Consultar extrato\n");
                printf("2. Solicitar extrato\n");
                scanf("%d", &escolha2);

                if (escolha2 == 1) {
                    printf("Extrato...");
                } else {
                    printf("Seu extrato detalhado foi enviado ao e-mail cadastrado neste número de telefone!");
                }
                break;

            case 3:
                printf("1. Consultar planos\n");
                printf("2. Aderir plano\n");
                printf("3. Cancelar plano\n");
                scanf("%d", &escolha2);

                // CONSULTAR
                if (escolha2 == 1) {

                        printf("Planos ativos:\n");
                        for (int i = 0; i < planos; i++) {
                            printf("%d - Plano %d\n", i + 1, planosAtivos[i]);
                        }

                } else if (escolha2 == 2) {

                    int opcaoPlano;

                    printf("Selecione o plano desejado:\n");
                    printf("1. Pre-pago\n");
                    printf("2. Mensal\n");
                    scanf("%d", &opcaoPlano);

                    if (planos < 5 && (opcaoPlano == 1 || opcaoPlano == 2)) {
                        planosAtivos[planos++] = opcaoPlano;
                        printf("Plano adicionado com sucesso!\n");
                    } else {
                        printf("Plano inválido ou limite atingido.\n");
                    }

                } else if (escolha2 == 3) {

                    int indice;

                    if (planos == 0) {
                        printf("Nao ha planos para cancelar.\n");
                    } else {
                        printf("Qual plano deseja cancelar?\n");
                        for (int i = 0; i < planos; i++) {
                            printf("%d - Plano %d\n", i + 1, planosAtivos[i]);
                        }

                        scanf("%d", &indice);
                        indice--; // ajusta para índice do array

                        if (indice >= 0 && indice < planos) {
                            // desloca os elementos
                            for (int i = indice; i < planos - 1; i++) {
                                planosAtivos[i] = planosAtivos[i + 1];
                            }
                            planos--;
                            printf("Plano cancelado com sucesso!\n");
                        } else {
                            printf("Plano invalido.\n");
                        }
                    }

                }

                break;


            default:
            printf("Opção inválida!\n");
        }

    } while (escolha1 = 4);

    return 0;

}
