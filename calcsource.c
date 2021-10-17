#include<stdio.h>
#include "funcoes/funcoes.h"

int main( void )
{
    int numero1, numero2, opcao;
    float resultado, cont;
    printf("\n===== Calculadora simples =====\n");
    
    printf("Digite dois numeros abaixo:\n");
    printf("1°: ");
    scanf("%d", &numero1);
    printf("2°: ");
    scanf("%d", &numero2);
    
    printf("\n");
    printf("=≠=≠=≠=≠=≠= Digite: ≠=≠=≠=≠=≠=≠\n");
    printf("        [1] para Somar\n        [2] para Subtrair\n        [3] para Multiplicar\n        [4] para Dividir\n>> ");
    scanf("%d", &opcao);
    
    while ( cont == 0 )
    {
        if ( opcao > 4 || opcao == 0 )
        {
            printf("Opção inválida\n>> ");
            scanf("%d", &opcao);
        }
        else{ break; }
    }
    
    if ( opcao == 1 )
    {
        resultado = numero1 + numero2;
    }
    else
    {
        if ( opcao == 2 )
        {
            resultado = numero1 - numero2;
        }
        else
        {
            if ( opcao == 3 )
            {
                resultado = numero1 * numero2;
            }
            else
            {
                if ( opcao == 4 )
                {
                    resultado = numero1 / numero2; 
                }
            }
        }
    }
    
    printf("=≠=≠=≠=≠=≠=≠=≠=≠=≠=≠=≠=≠=≠=≠=≠=\n");
    printf("O resultado é: %.2f\n", resultado);
    
    return 0;
}
