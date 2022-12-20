# include <stdio.h>

int main ()
{
    float altura, maiorAltura = 0, menorAltura = 10, quantidadeDeMulheres = 0, somaDaAlturaDasMulheres = 0, somaDaAlturaDaTurma = 0, mediaDeAlturaDasMulheres, mediaDeAlturaDaTurma;
    char sexo;
    int contador;

    for (contador = 1; contador <= 50; contador ++)
    {
        printf ("Insira 'F' para feminino e 'M' para masculino: ");
        scanf (" %c", &sexo);
        printf ("Insira sua altura: ");
        scanf ("%f", &altura);
    
        somaDaAlturaDaTurma = somaDaAlturaDaTurma + altura;

        if (sexo =='F')
        {
            somaDaAlturaDasMulheres = somaDaAlturaDasMulheres + altura;
            quantidadeDeMulheres = quantidadeDeMulheres + 1;
        }

        if (altura > maiorAltura)
        {
            maiorAltura = altura;
        }
        if (altura < menorAltura)
        {
            menorAltura = altura;
        }
    }

    mediaDeAlturaDasMulheres = somaDaAlturaDasMulheres/ quantidadeDeMulheres;
    mediaDeAlturaDaTurma = somaDaAlturaDaTurma/50;

    printf ("A maior altura da turma é %.2f e a menor altura é %.2f", maiorAltura, menorAltura);
    printf ("A média de altura das mulheres é %.2f e a média de altura da turma é %.2f", mediaDeAlturaDasMulheres, mediaDeAlturaDaTurma);
    return 0;
}