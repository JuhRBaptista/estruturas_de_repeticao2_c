#include <stdio.h>

int main ()
{
    int maiorNumeroPar, menorNumeroImpar, somaDosNumerosPares = 0, somaDosNumerosImpares = 0,
    numeroDigitado, quantidadeDeNumerosPares = 0, contador = 1;
    float mediaDosNumerosPares, mediaDosNumerosImpares;

    printf ("Insira um número qualquer: ");
    scanf ("%d", &numeroDigitado);

    if (numeroDigitado % 2 == 0)
    {
        maiorNumeroPar = numeroDigitado;
    }
    else
    { 
        menorNumeroImpar = numeroDigitado;
    }

    while (numeroDigitado >= 0)
    {
        printf ("Insira um número qualquer: ");
        scanf ("%d", &numeroDigitado);

        if (numeroDigitado %2 == 0)
        {
            somaDosNumerosPares = somaDosNumerosPares + numeroDigitado;
            
            if (numeroDigitado > maiorNumeroPar)
            {
                maiorNumeroPar = numeroDigitado;
            }
            quantidadeDeNumerosPares = quantidadeDeNumerosPares + 1;
        }
        else 
        {
            somaDosNumerosImpares = somaDosNumerosImpares + numeroDigitado;

            if (numeroDigitado < menorNumeroImpar)
            {
                menorNumeroImpar = numeroDigitado;
            }
        }
        contador = contador + 1;
    }
    
    mediaDosNumerosPares = somaDosNumerosPares/quantidadeDeNumerosPares;
    mediaDosNumerosImpares = somaDosNumerosImpares/ (contador - quantidadeDeNumerosPares);

    printf ("\n\nMédia dos números pares: %.2f\n", mediaDosNumerosPares);
    printf ("Média dos números ímpares: %.2f\n", mediaDosNumerosImpares);
    printf ("Maior número par digitado: %d\n", maiorNumeroPar);
    printf ("Menor número ímpar digitado: %d\n", menorNumeroImpar);

    return 0;
}