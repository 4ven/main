
#include <stdio.h>
#include <string.h>

//void modificarVetor(char* vetor)
//{
//    for(int i = 0; i < 10; i++)
//    {
//        if(&vetor[i] == 'a')
//            &vetor[i] = 'z';
//    }
//}

//void modificarNum(int* num)
//{
//    *num = 15;
//}

//void main()
//{
//    Exercicio 1
    
//    int total = 0;
//    
//    for(int i = 1; i <= 20; i++)
//    {
//        if( i % 2 == 0 )
//            total += i;  
//    }
//    printf("%d \n", total);
    
//    Exercicio 2
    
//    char string[10];
//    int tamanho = 0;
//    
//    printf("Escreva um texto de no maximo 10 carateres: ");
//    scanf("%s", string);
//    
//    tamanho = strlen(string);
//    
//    printf("A string contem: %d letras \n", tamanho);
    
//    Exercicio 3
    
//    int num = 10;
//    
//    printf("Valor antes da funçao: %d \n", num);
//    
//    modificarNum(&num);
//    
//    printf("Valor depois da funçao: %d \n", num);
    
//   Exercicio 4
    
//    char vetor[10];
//    
//    printf("Digite o texto de no maximo 10 carateres: ");
//    scanf("%s", vetor);
//    
//    printf("Imprimindo o vetor antes da modificaçao: \n");
//    for(int i = 0; i < 10; i++)
//    {
//        printf(" %c ", vetor[i]);
//    }
//    printf("\n");
//    
//    modificarVetor(&vetor[0]);
//    
//    printf("Imprimindo o vetor depois da modificaçao: \n");
//    for(int i = 0; i < 10; i++)
//    {
//        printf(" %c ", vetor[i]);
//    }
//    printf("\n");
    
//   Exercicio 5
    
//    int num, cem, cinquenta, vinte, dez, cinco, dois;
//    
//    num=cem=cinquenta=vinte=dez=cinco=dois=0;
//    
//    printf("Digite um numero: ");
//    scanf("%d", &num);
//    
//    cem = num / 100;
//    num -= (cem * 100);
//    
//    cinquenta = num / 50;
//    num -= (cinquenta * 50);
//    
//    vinte = num / 20;
//    num -= (vinte * 20);
//    
//    dez = num / 10;
//    num -= (dez * 10);
//    
//    cinco = num / 5;
//    num -= (cinco * 5);
//    
//    dois = num / 2;
//    num -= (dois * 2);
//    
//    printf("NOTAS: \n");
//    printf("%d nota(s) de 100 \n", cem);
//    printf("%d nota(s) de 50 \n", cinquenta);
//    printf("%d nota(s) de 20 \n", vinte);
//    printf("%d nota(s) de 10 \n", dez);
//    printf("%d nota(s) de 5 \n", cinco);
//    printf("%d nota(s) de 2 \n", dois);  
//}