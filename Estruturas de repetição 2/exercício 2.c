#include <stdio.h>

int main ()
{
    float numero = 0;
    int quantidadeDeNumerosRecebidos = 0;

    while (numero >= 0)
    {
        printf ("Insira um número qualquer: ");
        scanf ("%f", &numero);
        quantidadeDeNumerosRecebidos = quantidadeDeNumerosRecebidos + 1;
    }
    printf ("\n\nVocê inseriu %d números.\n\n", quantidadeDeNumerosRecebidos);
    return 0;
}