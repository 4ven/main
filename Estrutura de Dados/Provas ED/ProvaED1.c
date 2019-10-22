// Samuel Sergio Garcia Espinosa

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 *  Exercicio 1
 * 
typedef struct No{
    char carater;
    struct No *prox;
} No;

No* ultimoNoAdicionado = NULL;

void adicionarDado(char carater)
{
    No* ponteiroNo;
    
    ponteiroNo = (No *) malloc(sizeof (ponteiroNo));
    ponteiroNo->carater = carater;
    ponteiroNo->prox = NULL;
    
    if (ultimoNoAdicionado == NULL)
        ultimoNoAdicionado = ponteiroNo;
    else
    {
        ponteiroNo->prox = ultimoNoAdicionado;
        ultimoNoAdicionado = ponteiroNo;
    }
}

void printFormat01(No* ponteiroNo)
{
    printf("[%c(%p)|%p]\n", ponteiroNo->carater, ponteiroNo, ponteiroNo->prox);
    printf("                  |\n");
    printf("                  V\n");
    printf("      -------------\n");
    printf("      |\n");
    printf("      V\n");
}

void printFormat02(No* ponteiroNo)
{
    printf("[%c(%p)|%p]\n", ponteiroNo->carater, ponteiroNo, ponteiroNo->prox);
    printf("                  |\n");
    printf("                  V\n");
    printf("                 NULL\n");
}

void imprimirLista()
{
    No* ponteiroNo;
    int quantidadePalavras = 0;
    
    if (ultimoNoAdicionado == NULL)
    {
        printf("Lista vazia.\n");
        return;
    }
    
    ponteiroNo = ultimoNoAdicionado;
    
    while (ponteiroNo != NULL)
    {
        if( ponteiroNo->carater == ' ' )
        {
            quantidadePalavras++;
        }
        
        ponteiroNo = ponteiroNo->prox;
    }
    
    printf("\n\n Quantidade de palavras: %d \n\n", quantidadePalavras+1);
}

void main(int argc, char** argv)
{
    // Adiciona os carateres na lista encadeada
    for (int i = 1; i < argc; i++)
    {
        char carateresPalavra[(int)strlen(argv[i])];
        
        if( i > 1 )
            adicionarDado(' ');
        
        for(int j = 0; j < (int)strlen(argv[i]); j++)
            carateresPalavra[j] = argv[i][j];
        
        for(int j = 0; j < (int)strlen(carateresPalavra); j++)
            adicionarDado(carateresPalavra[j]);
    }
    
    imprimirLista();
}   
*/

/*
 * Exercicio 2
 * 
int charToInt(char c)
{
    switch(c)
    {
        case 'a': return 1; 
        case 'b': return 2; 
        case 'c': return 3; 
        case 'd': return 4; 
        case 'e': return 5; 
        case 'f': return 6; 
        case 'g': return 7; 
        case 'h': return 8; 
        case 'i': return 9; 
        case 'j': return 10; 
        case 'k': return 11; 
        case 'l': return 12; 
        case 'm': return 13; 
        case 'n': return 14; 
        case 'o': return 15; 
        case 'p': return 16; 
        case 'q': return 17; 
        case 'r': return 18; 
        case 's': return 19; 
        case 't': return 20; 
        case 'u': return 21; 
        case 'v': return 22; 
        case 'w': return 23; 
        case 'x': return 24; 
        case 'y': return 25; 
        case 'z': return 26;
    }
}

void main()
{
    char palavra[20];
    char aux;
    
    printf("Escreva uma palavra: ");
    scanf("%s", &palavra);
    
    for (int i = 1; i < strlen(palavra); i++)
    {
        for (int j = 0; j < strlen(palavra) - 1; j++)
        {
            if (charToInt(palavra[j]) > charToInt(palavra[j + 1]))
            {
                aux = palavra[j];
                palavra[j] = palavra[j + 1];
                palavra[j + 1] = aux;
            }
        }
    }
    
    printf("Palavra Ordenada: ");
    for (int i = 0; i < strlen(palavra); i++)
    {   
        printf("%c", palavra[i]);
    }
    printf("\n");
}
*/