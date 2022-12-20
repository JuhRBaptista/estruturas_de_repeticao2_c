#include <stdio.h>

int main ()
{
    int divisor = 2, numeroDigitado, resto = 1, numeroPrimo = 1;

    printf ("Digite um número inteiro positivo: ");
    scanf ("%d", &numeroDigitado);

    while ((divisor < numeroDigitado) && (resto!= 0))
    {
        resto = numeroDigitado % divisor;
        if (resto == 0)
        {
            numeroPrimo = 0;
        }
        divisor = divisor + 1;
    }
    if (numeroPrimo == 0)
    {
        printf ("Esse número não é primo.\n\n");
    }
    else
    {
        printf ("Esse número é primo.\n\n");
    }
    printf ("\n\n");
    return 0;
}
