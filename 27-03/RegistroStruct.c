#include <stdio.h>
#include <stdlib.h>

//Criacao do tipo de dados aluno
typedef struct Aluno{
    char nome[30];
    int RA;
    float nota;
}A;

int main()
{
    A alunos[2];

    //Preenchimento dos campos de a1
    printf("Informe o  nome: \n");
    scanf("%s", alunos[0].nome);
    printf("Informe o  RA de a1: \n");
    scanf("%d", &alunos[0].RA);
    printf("Informe a nota do a1: \n");
    scanf("%f", &alunos[0].nota);

    //Preenchimento dos campos de a2
    printf("Informe o  nome do a2: \n");
    scanf("%s", alunos[1].nome);
    printf("Informe o  RA de a2: \n");
    scanf("%d", &alunos[1].RA);
    printf("Informe a nota do a2: \n");
    scanf("%f", &alunos[1].nota);

    //Exibir as informacoes
    printf("Nome 1: %s", alunos[0].nome);
    printf("RA 1: %d", alunos[0].RA);
    printf("Nota 1: %f", alunos[0].nota);
    printf("Nome 2: %s", alunos[1].nome);
    printf("RA 2: %d", alunos[1].RA);
    printf("Nota 2: %f", alunos[1].nota);

    return 0;
}