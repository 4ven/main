#include <stdio.h>
#include <math.h>

// Exercicio 7

void main()
{
    char string[256];
    
    printf("Escreva a frase: ");
    scanf("%[^\n]", string);
     
    int tamanho = strlen(string);
    
    for (int i = tamanho; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
}