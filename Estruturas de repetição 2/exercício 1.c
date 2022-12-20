#include <stdio.h>

int main ()
{
    float somaDosNumerosPositivos = 0, totalDeNumerosNegativos = 0, numero;
    int contador;

    for (contador = 1; contador <= 20; contador ++)
    {
        printf ("Insira um número qualquer: ");
        scanf ("%f", &numero);

        if (numero >= 0)
        {
            somaDosNumerosPositivos = somaDosNumerosPositivos + numero;
        }
        else
        {
            totalDeNumerosNegativos = totalDeNumerosNegativos + 1;
        }
    }
    printf ("\n\nA soma dos números positivos inseridos é %.2f e você inseriu %.2f números negativos.\n\n", somaDosNumerosPositivos, totalDeNumerosNegativos);
    return 0;

}