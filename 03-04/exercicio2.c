#include <stdio.h>
#include <stdlib.h>

typedef struct Habitantes{
    int idade;
    int filhos;
    char sexo;
    float salario;
}H;

int main()
{
    H habitantes[2];

    int i;
    float media = 0;

    for(i = 0; i < 2; i++){
        printf("Idade: \n");
        scanf("%d", &habitantes[i].idade);

        printf("Filhos: \n");
        scanf("%d", &habitantes[i].filhos);

        printf("Sexo: \n");
        scanf("%s", &habitantes[i].sexo);

        scanf("%f", &habitantes[i].salario);
    }

    for (i = 0; i<2; i++){
        media = media + habitantes[i].salario;
    }

    media = media/2;

    printf("%.2f", media);


    return 0;
}
