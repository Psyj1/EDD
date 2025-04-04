#include <stdio.h>
#include <stdlib.h>

typedef struct Livro{
    char titulo[1000];
    int ano;
    int numero;
    float preco;
}L;

int main()
{
    L livro[5];

    int i, num, media;


    for(i = 0; i < 5; i++){
        scanf("%d", &num);
    }

    media = num/5;

    printf("%d", num);

    return 0;
}
