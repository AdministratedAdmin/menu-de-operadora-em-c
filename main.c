#include <stdio.h>

int main() {

    int escolha1, escolha2, escolha3, planos;
    float creditos;

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

            if escolha2 == 1 {
                printf("Digite a quantia de créditos que deseja acrescentar \n");
                scanf("%f", &escolha3);

                $creditos = $creditos + $escolha3

                printf("Foram acrescentados %f créditos!", $creditos);
            } else {
                printf("Seu saldo é de %f créditos", $creditos);
            }

        case 2:
            printf("1. Consultar extrato\n");
            printf("2. Solicitar extrato\n");
            scanf("%d", &escolha2);

            if escolha2 == 1 {
                printf("Extrato...");
            } else {
                printf("Seu extrato detalhado foi enviado ao e-mail cadastrado neste número de telefone!");
            }

        case 3: // CRIAR UMA LISTA DE PLANOS E FAZER UM MÉTODO DE REMOÇÃO!!!!!!!!!!!!!
            printf("1. Consultar planos\n");
            printf("2. Aderir plano\n");
            printf("3. Cancelar plano\n");
            scanf("%d", &escolha2);

            if escolha2 == 1 {
                printf($planos)
            }
            if escolha2 == 2 {
                printf("Selecione o plano desejado:\n");
                printf("1. Pré-pago\n");
                printf("2. Mensal\n");
                scanf("%d", &planos);
            }
            if escolha2 == 3 {
                printf("Selecione o plano que deseja cancelar:\n");
                printf("1. Pré-pago\n");
                printf("2. Mensal\n");
                scanf("%d", &planos);
            }


        default:
        prinft("Saindo")
    }

    return 0;

}
