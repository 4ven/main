#include <stdio.h>
#include <math.h>

// Exercicio 3

void main()
{
    int x, y;
    
    printf("Digite a coordenada X: ");
    scanf("%d", &x);
    
    printf("Digite a coordenada Y: ");
    scanf("%d", &y);
    
    if( x > 0 && y > 0 )
        printf("O ponto encontra-se no 1 Quadrante");
    else if( x < 0 && y > 0 )
        printf("O ponto enontra-se no 2 Quadrante");
    else if( x < 0 && y < 0 )
        printf("O ponto enontra-se no 3 Quadrante");
    else
        printf("O ponto encontra-se no 4 Quadrante");
}