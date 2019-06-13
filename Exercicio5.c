#include <stdio.h>
#include <math.h>

// Exercicio 5

void main()
{
    for(int i = 1; i <= 9; i++ )
    {
        printf("Tabuada do %d: \n", i);
        
        for(int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d \n", i, j, i*j);
        }
    }
}