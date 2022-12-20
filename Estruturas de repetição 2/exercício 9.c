#include <stdio.h>

int main ()
{
    float deposito, retirada, saldo = 0;
    char opção;

    do
    {
        printf ("\n\n(a) Depósito\n(b) Retirada\n(c) Saldo\n(d) Sair da Conta\nSelecione uma opção: ");
        scanf (" %c", &opção);

        switch (opção)
        {
            case 'a': 
            printf ("\nInsira o valor da operação: \n");
            scanf ("%f", &deposito);
            printf ("Depósito realizado com sucesso!\n");
            saldo = saldo + deposito;
            break;
            case 'b':
            printf ("\nInsira o valor da operação: \n");
            scanf ("%f", &retirada);
            printf ("Retirada realizada com sucesso!\n");
            saldo = saldo - retirada;
            break;
            case 'c':
            printf ("\nO seu saldo é de %.2f reais.\n", saldo);
            break;
            case 'd':
            printf ("\nVocê saiu da sua conta.\n\n");
            break;
            default: 
            printf ("Operação Inválida.");
            break;
        }
    }
    while (opção != 'd');
    return 0;
}