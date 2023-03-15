/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    #define TAM_MAX 10
    int vet1[TAM_MAX];
    int Maior;
    int i;
    
    for(i=0; i<TAM_MAX; i++)
        scanf("%d", &vet1[1]);
    
    Maior = vet1[0];
    for(i=0; i<TAM_MAX; i++)
        if (vet1[i] > Maior)
        Maior = vet1[i];
        
    printf("O maior numero é %d \n", Maior);
    return 0;
}
