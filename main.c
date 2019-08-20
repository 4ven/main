
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 10000

void main(int argc, char** argv)
{
    srand(time(NULL));
    clock_t tempoInicial, tempoFinal;
    long tempo1 = 0, tempo2 = 0, tempo3 = 0, aux = 0, qComp = 0, qTrocas = 0;
    int eleito, menor, posicaoDoMenor;
    
    int escolha = 0;
    
    printf("Cual metodo de ordenaçao quer usar?: Bolha(1) Selection(2) ");
    scanf("%d", &escolha);
    
    if(escolha == 1) // Metodo Bolha
    {
        // Vetor com valores ordenados crescentemente
        int vetor1[TAMANHO]; 

        tempoInicial = clock();

        for (int i = 0; i <= TAMANHO; i++)
            vetor1[i] = i+1;

        for (int i = 1; i < TAMANHO; i++)
        {
            for (int j = 0; j < TAMANHO - 1; j++)
            {
                qComp++;
                if (vetor1[j] > vetor1[j + 1])
                {
                    aux = vetor1[j];
                    vetor1[j] = vetor1[j + 1];
                    vetor1[j + 1] = aux;
                    qTrocas++;         
                }
            }
        }

        tempoFinal = clock();
        tempo1 = tempoFinal;

        printf("Vetor com valores ordenados crescentemente \n"); 
        mostrarDados(qComp, qTrocas, tempoFinal);

        tempoFinal = 0;
        qComp = 0;
        qTrocas = 0;

        // Vetor com valores ordenados decrescentemente
        int vetor2[TAMANHO]; 

        tempoInicial = clock();

        int count = 0;
        for (int i = TAMANHO; i >= 1; i--)
        {
            vetor2[count] = i;
            count++;
        }       

        for (int i = 1; i < TAMANHO; i++)
        {
            for (int j = 0; j < TAMANHO - 1; j++)
            {
                qComp++;
                if (vetor2[j] > vetor2[j + 1])
                {
                    aux = vetor2[j];
                    vetor2[j] = vetor2[j + 1];
                    vetor2[j + 1] = aux;
                    qTrocas++;         
                }
            }
        }

        printf("\n");

        tempoFinal = clock();
        tempo2 = tempoFinal;

        printf("Vetor com valores ordenados decrescentemente \n");
        mostrarDados(qComp, qTrocas, tempoFinal);

        tempoFinal = 0;
        qComp = 0;
        qTrocas = 0;

        // Vetor com valores ordenados aleatoriamente
        int vetor3[TAMANHO]; 

        tempoInicial = clock();

        for (int i = 0; i < TAMANHO; i++)
            vetor3[i] = rand() % 10; 

        for (int i = 1; i < TAMANHO; i++)
        {
            for (int j = 0; j < TAMANHO - 1; j++)
            {
                qComp++;
                if (vetor3[j] > vetor3[j + 1])
                {
                    aux = vetor3[j];
                    vetor3[j] = vetor3[j + 1];
                    vetor3[j + 1] = aux;
                    qTrocas++;         
                }
            }
        }

        printf("\n");

        tempoFinal = clock();
        tempo3 = tempoFinal;

        printf("Vetor com valores aleatoriamente \n");
        mostrarDados(qComp, qTrocas, tempoFinal);

        tempoFinal = 0;
        qComp = 0;
        qTrocas = 0;
    }
    else if(escolha == 2) // Metodo Selection
    {
        // Vetor com valores ordenados crescentemente
        int vetor1[TAMANHO]; 

        tempoInicial = clock();

        for (int i = 0; i <= TAMANHO; i++)
            vetor1[i] = i+1;

        for (int i = 0; i < TAMANHO-2; i++)
        {
            eleito = vetor1[i];
            menor = vetor1[i+1];
            posicaoDoMenor = i+1;
            for (int j = i+1; j < TAMANHO; j++)
            {        
                qComp++;
                if (vetor1[j] < menor)
                {
                    qTrocas++;
                    menor = vetor1[j]; 
                    posicaoDoMenor = j;
                }
            }
            if( menor < eleito )
            {          
                vetor1[i] = vetor1[posicaoDoMenor];
                vetor1[posicaoDoMenor] = eleito;
            }
        }

        tempoFinal = clock();
        tempo1 = tempoFinal;

        printf("Vetor com valores ordenados crescentemente \n"); 
        mostrarDados(qComp, qTrocas, tempoFinal);

        tempoFinal = 0;
        qComp = 0;
        qTrocas = 0;

        // Vetor com valores ordenados decrescentemente
        int vetor2[TAMANHO]; 

        tempoInicial = clock();

        int count = 0;
        for (int i = TAMANHO; i >= 1; i--)
        {
            vetor2[count] = i;
            count++;
        }       

        for (int i = 0; i < TAMANHO-2; i++)
        {
            eleito = vetor2[i];
            menor = vetor2[i+1];
            posicaoDoMenor = i+1;
            for (int j = i+1; j < TAMANHO; j++)
            {            
                qComp++;
                if (vetor2[j] < menor)
                {
                    qTrocas++;
                    menor = vetor2[j]; 
                    posicaoDoMenor = j;
                }
            }
            if( menor < eleito )
            {
                
                vetor2[i] = vetor2[posicaoDoMenor];
                vetor2[posicaoDoMenor] = eleito;
            }
        }

        printf("\n");

        tempoFinal = clock();
        tempo2 = tempoFinal;

        printf("Vetor com valores ordenados decrescentemente \n");
        mostrarDados(qComp, qTrocas, tempoFinal);

        tempoFinal = 0;
        qComp = 0;
        qTrocas = 0;

        // Vetor com valores ordenados aleatoriamente
        int vetor3[TAMANHO]; 

        tempoInicial = clock();

        for (int i = 0; i < TAMANHO; i++)
            vetor3[i] = rand() % 10; 

        for (int i = 0; i < TAMANHO-2; i++)
        {
            eleito = vetor3[i];
            menor = vetor3[i+1];
            posicaoDoMenor = i+1;
            for (int j = i+1; j < TAMANHO; j++)
            {         
                qComp++;
                if (vetor3[j] < menor)
                {
                    qTrocas++;
                    menor = vetor3[j]; 
                    posicaoDoMenor = j;
                }
            }
            if( menor < eleito )
            {       
                vetor3[i] = vetor3[posicaoDoMenor];
                vetor3[posicaoDoMenor] = eleito;
            }
        }

        printf("\n");

        tempoFinal = clock();
        tempo3 = tempoFinal;

        printf("Vetor com valores aleatoriamente \n");
        mostrarDados(qComp, qTrocas, tempoFinal);

        tempoFinal = 0;
        qComp = 0;
        qTrocas = 0;
    }
    
    
    
    
     /*
    for (int i = 0; i < TAMANHO; i++)
        printf("vetor 3 %d\t", vetor3[i]);
    
    printf("\n");
    //Ordena vetor pelo metodo da bolha
    for (int i = 1; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    //Mostra valores do vetor ordenado   
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);*/
    
}

void mostrarDados(long comp, long trocas, long tempo)
{
    printf("Quantidade de comparaçoes: %ld \n", comp);
    printf("Quantidade de trocas: %ld \n", trocas);
    printf("Tempo gasto: %ld", tempo);
    printf("\n");
}

