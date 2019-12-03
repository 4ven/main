// Samuel Sergio Garcia Espinosa

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 7

void main()
{
    int vetor[TAMANHO][TAMANHO];
    int aux = 0;

    srand(time(NULL));
    
    // Preenche o vetor
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            vetor[i][j] = rand() % 50; 
        }
    }
    
    // Mostra o vetor nao ordenado
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            printf("Valor da posicao [%d][%d] = %d \n", i, j, vetor[i][j]);
        }
        printf("\n");
    }
    
    printf("Ordenando o vetor... \n");
    
    // Ordena o vetor (metodo bolha)
    for (int i = 1; i < TAMANHO*TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO ; j++)
        {
            for(int k = 0; k < TAMANHO ; k++)
            {
                for(int linha = j; linha < TAMANHO; linha++)
                {
                    for(int coluna = 0; coluna < TAMANHO ; coluna++)
                    {
                        if( linha > j )
                        {
                            if(vetor[j][k] > vetor[linha][coluna])
                            {
                                aux = vetor[j][k];
                                vetor[j][k] = vetor[linha][coluna];
                                vetor[linha][coluna] = aux;
                            } 
                        }
                        else
                        {
                            if( coluna >= k )
                            {
                                if(vetor[j][k] > vetor[linha][coluna])
                                {
                                    aux = vetor[j][k];
                                    vetor[j][k] = vetor[linha][coluna];
                                    vetor[linha][coluna] = aux;
                                } 
                            }
                        }
                    }
                }
            }
        }
    }
    
    printf("Mostrando o vetor odenado... \n");
    
    // Mostra o vetor ordenado
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            printf("Valor da posicao [%d][%d] = %d \n", i, j, vetor[i][j]);
        }
        printf("\n");
    }
}
