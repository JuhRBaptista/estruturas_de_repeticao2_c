#include <stdio.h>

int main ()
{
    int contador = 2, numeroDigitado, menorNumeroDigitado, maiorNumeroDigitado;

    printf ("Digite um número qualquer: ");
    scanf ("%d", &numeroDigitado);
    maiorNumeroDigitado = numeroDigitado;
    menorNumeroDigitado = numeroDigitado;

    while (contador <= 3)
    {
        printf ("Digite um número qualquer: ");
        scanf ("%d", &numeroDigitado);

        if (numeroDigitado > maiorNumeroDigitado)
        {
            maiorNumeroDigitado = numeroDigitado;
        }
        if (numeroDigitado < menorNumeroDigitado)
        {
            menorNumeroDigitado = numeroDigitado;
        }
        contador = contador + 1;
    }

    printf ("\nO maior número digitado foi %d e o menor número digitado foi %d.\n\n", maiorNumeroDigitado, menorNumeroDigitado);
    return 0;
}