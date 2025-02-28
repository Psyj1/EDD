#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    //Crie um programa em C para armazenar números fornecidos pelos usuários em 2 vetores inteiros de 5 elementos cada. Em seguida, imprima a soma das posições equivalentes
    
    int vet1[5], vet2[5];
    int i;
    int soma;

    printf("Digite 5 valores para o primeiro vetor: ");
    for (i = 0; i<5; i++){
        scanf("%d", &vet1[i]);
        scanf("%d", &vet2[i]);
    }

    for(i = 0; i<5; i++){

    soma = vet1[i] + vet2[i];
    printf("Seus valores eh: %d\n", soma);

    }



    return 0;

}
