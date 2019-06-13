#include <stdio.h>
#include <math.h>

//Exercicio 6

void main()
{
    int array[7][7];
    
    // Aqui preencho a primeira coluna de todas as linhas com 1
    for(int i = 0; i < 7; i++)
    {
        array[i][0] = 1;
    }
    
    array[1][1] = 1;
    
    // Aqui preencho o resto do triangulo
    for(int i = 2; i < 7; i++) 
    {
        for(int j = 1; j <= i; j++)
        {
            if(j != i)
                array[i][j] = array[i-1][j-1] + array[i-1][j];
            else
                array[i][j] = 1;
        }
    }
    
    // Aqui mostro os dados do vetor
    for(int i = 0; i < 7; i++)
    {
        for(int j = 1; j <= 7-(i+1); j++)
            printf(" ");
         
        if( i < 5 )
            printf(" ");
            
        for(int j = 0; j <= i; j++)
            printf("%d ", array[i][j]);
            
        printf("\n");
    }
}