#include <stdio.h>

int main ()
{
    float quantidadeDeHabitantesNoPaisA = 5000000, quantidadeDeHabitantesNoPaisB = 7000000; 
    int anosNecessáriosParaQueAUltrapasseB = 1;
    
    while (quantidadeDeHabitantesNoPaisB > quantidadeDeHabitantesNoPaisA)
    {
        quantidadeDeHabitantesNoPaisA = quantidadeDeHabitantesNoPaisA*1.03;
        quantidadeDeHabitantesNoPaisB = quantidadeDeHabitantesNoPaisB*1.02;
        anosNecessáriosParaQueAUltrapasseB = anosNecessáriosParaQueAUltrapasseB + 1;
    }  
    printf ("Serão necessários %d anos para que a população do país A ultrapasse a população do país B.\n\n", anosNecessáriosParaQueAUltrapasseB);
    return 0;
}