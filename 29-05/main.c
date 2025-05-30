#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto{
  char nome[30];
  int quantidade;
  struct Produto *prox;
    
}P;

    //funcao cria novo elemento
    Produto* criarElemento(){
        //alocar novo elemento de forma dinamica
        Produto *novo = (Produto*)malloc(sizeof(Produto));
        // Verifica se a alocação ocorreu corretamente
        if(!novo){
            print("\n Erro ao alocar novo elemento! \n");
            exit(1);
        }
        novo->prox = NULL;
        return novo;
    }
    
    //inserir um elemento no inicio
    void inserirInicio(Produto *cabeca, char *nome, char quantidade){
        Produto *novo = criarElemento();
        printf("\n Informe o nome do produto: \n");
        scanf("%s", &novo->nome);
        printf("\n Informe a quantidade do produto: \n");
        scanf("%s", &novo->quantidade);
        novo->prox = cabeca->prox;
        cabeca->prox = novo;
    }
    
    void inserirMeio(Produto *cabeca){
        char nome[30];
        //o campo nome sera usado como chave para a busca
        printf("\n Informe apos qual valor voce deseja inserir: \n");
        scanf("%s", &nome);
        //criar o novo elemento que deve ser inserido
        Produto *novo = criarElemento();
        printf("\n Informe o nome do produto: \n");
        scanf("%s", &novo->nome);
        printf("\n Informe a quantidade do produto: \n");
        scanf("%s", &novo->quantidade);
        //permite percorrer cada elemento
        Produto *atual = cabeca;
        
        while((atual->prox != NULL) && (atual->nome != nome)){
            atual = atual->prox;
        }
    }
    
    
    //inserir
    void inserirFim(Produto *cabeca){
        Produto *novo = criarElemento();
        printf("\n Informe o nome do produto: \n");
        scanf("%s", &novo->nome);
        printf("\n Informe a quantidade do produto: \n");
        scanf("%s", &novo->quantidade);
        //atual permite com que a lista seja percorrida
        Produto *atual = cabeca;
        //enquanto o campo proximo nao for nul ainda existem elementos a serem visitados e nao chegou ao fim da lista
        while((atual->prox != NULL) && (strcmp(atual->nome,nome)== 0)){
            atual = atual->prox;
        }
        if(atual == NULL){
            printf("\n Nome informado nao encontrado! \n");
            return 1;
        }
        //elemento novo deve apontar para o elemento que era vizinho do elemento atual
        novo->prox = atual->prox;
        //elemento atual deve apontar para o novo elemento
        atual->prox=novo;
    }
    
    void removerInicio(Produto *cabeca){
        //verifica se a lista esta vazia
        if(cabeca->prox == NULL){
            printf("\n Lista vazia! \n");
        }else{ //a lista possui elemento a ser removido
            //descobrir o primeiro elemento
            Produto *primeiro = cabeca->prox;
            //faz a cabeca apontar para o segundo elemento
            cabeca->prox = primeiro->prox;
            //libera memoria ao remover o primeiro elemento
            free(primeiro);
        }
    }
    
    void removerFim(Produto *cabeca){
        if(cabeca->prox == NULL){
            printf("\n Lista vazia \n");
        }else{
            Produto *atual = cabeca->prox;
            Produto *anterior = cabeca;
            
            while(atual->prox != NULL){
                anterior = atual;
                atual = atual->prox;
            }
            anterior->prox =NULL;
            free(atual);
        }
    }

    void removerMeio(Produto *cabeca){
        
        char nome[30];
        if(cabeca->prox == NULL){
            printf("\n Lista vazia \n");
        }else{
            printf("\n Informe o nome a ser removido: \n");
            scanf("%s", &nome);
            
            Produto *atual = cabeca->prox;
            Produto *anterior = cabeca;
            
            while(atual != NULL){
                if(!strcmp(atual->nome,nome)){
                    anterior->prox = atual->prox;
                    free(atual);
                }else{
                    anterior = atual;
                    atual = atual->prox;
                }
            }
        }
    }
    
    void imprimirLista(Produto *cabeca){
        Produto *atual = cabeca->prox;
        
        while(atual != NULL){
            printf("\n Nome: %s ", atual->nome);
            printf("\n Quantidade: %d\n",atual->quantidade);
            atual = atual->prox;
        }
    }
int main(){
    int op;
    Produto *cabeca = criarElemento;
    do{
        printf("1 - Inserir no inicio \n");
        printf("2 - Inserir no meio \n");
        printf("3 - Inserir no fim \n");
        printf("4 - Remover no inicio \n");
        printf("5 - Remover no meio \n");
        printf("6 - Remover no fim \n");
        printf("7 - Imprimir lista \n");
        printf("0 - SAIR");
        scanf("%d", &op);
        
        switch(op){
        case 1:
            inserirInicio(cabeca);
            break;
        case 2:
            inserirMeio(cabeca);
            break;
        case 3:
            inserirFim(cabeca);
            break;
        case 4:
            removerInicio(cabeca);
            break;
        case 5:
            removerMeio(cabeca);
            break;
        case 6:
            removerFim(cabeca);
            break;
        case 7:
            imprimirLista(cabeca);
            break;
        case 0:
            printf("\n Tchau\n");
            break;
        default:
            printf("\n Opcao invalida! \n");
        }
        
    }while(op!=0);
    return 0;
}