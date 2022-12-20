#include <stdio.h>

int main ()
{
    int contador, numeroN, fatorialDeN = 1;

    printf ("Insira um número positivo N qualquer: ");
    scanf ("%d", &numeroN);

    if (numeroN > 0)
    {
        for (contador = numeroN; contador >= 1; contador --)
        {
            fatorialDeN = fatorialDeN*contador;
        }
        printf ("\nO fatorial de %d é %d.\n\n", numeroN, fatorialDeN);
    }
    else
    {
        if (numeroN == 0)
        {
            printf ("\nO fatorial de 0 é igual a 1.\n\n");
        }
        else
        {
            printf ("\nNão existe fatorial para números negativos.\n\n");
        }
    }
    return 0;
}