#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    //Crie um programa em C que armazene 4 notas de um aluno em um vetor, em seguida, calcule a média aritimética entre essas notas

    float vet[4];
    double soma, media;
    int i;

    printf("Digite numeros: ");

    for(i = 0; i < 4; i++){

        scanf("%f", &vet[i]);

    soma = soma + vet[i];

    }

    media = soma / 4;

    printf("media: %lf", media);


    return 0;
}
