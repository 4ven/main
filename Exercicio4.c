#include <stdio.h>
#include <math.h>

// Exercicio 4

void main()
{
    int veces, total, media;
    float variancia, desvio;
    veces = total = media = variancia = desvio = 0;
    int numeros[100];
    
    printf("Quantos numeros quer escrever? (MAX:100): ");
    scanf("%d", &veces);
    
    if( veces <= 100)
    {
        for(int i = 0; i < veces; i++)
        {
            printf("Informe um numero: ");
            scanf("%d", &numeros[i]);
            total += numeros[i];
        }
        
        media = total / veces;
        total = 0;
        
        for(int i = 0; i < veces; i++)
        {
            total += pow(numeros[i]-media, 2);
        }
        
        variancia = total / veces;
        desvio = sqrt(variancia);
        
        printf("A media é : %d \n", media);
        printf("O desvio padrao é: %f \n", desvio);
        }
}
