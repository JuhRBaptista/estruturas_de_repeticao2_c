#include <stdio.h>

int main ()
{
    float base, altura, raio, area;
    int opção;

    do 
    {
        printf ("\n1- Calcular a área do quadrado.\n2- Calcular a área do retângulo.\n3- Calcular a área do triângulo.\n4- Calcular a área do círculo\n5- Sair do algorítmo.\n\nSelecione uma opção: ");
        scanf ("%d", &opção);

        switch (opção)
        {
            case 1: 
            printf ("\nInsira a altura do quadrado: ");
            scanf ("%f", &altura);
            printf ("Insira a base do quadrado: ");
            scanf ("%f", &base);
            area = base*altura;
            printf ("\nA área do quadrado é %.2f.\n\n", area);
            break;
            case 2: 
            printf ("\nInsira a altura do retângulo: ");
            scanf ("%f", &altura);
            printf ("Insira a base do retângulo: ");
            scanf ("%f", &base);
            area = base*altura;
            printf ("\nA área do retângulo é %.2f.\n\n", area);
            break;
            case 3: 
            printf ("\nInsira a altura do triângulo: ");
            scanf ("%f", &altura);
            printf ("Insira a base do triângulo: ");
            scanf ("%f", &base);
            area = base*altura/2;
            printf ("\nA área do triângulo é %.2f.\n\n", area);
            break;
            case 4:
            printf ("\nInsira o raio do círculo: ");
            scanf ("%f", &raio);
            area = 3.14*raio*raio;
            printf ("\nA área do círculo é %.2f.\n\n", area);
            break;
            case 5: 
            printf ("A\nlgoritmo encerrado!\n\n");
            break;
            default:
            printf ("\nOpção Inválida.\n\n");
            break;
        }
    }
    while (opção != 5);
    return 0;
}