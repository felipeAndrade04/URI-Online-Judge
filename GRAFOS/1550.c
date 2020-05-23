#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista* prox; 
}Lista;

typedef struct fila {
    Lista* ini;
    Lista* fim;
}Fila;

Fila* inicializa(void){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

void insere(Fila* f, float v){
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->info = v; 
    n->prox = NULL; 
    if (f->fim != NULL) 
        f->fim->prox = n;
    else 
        f->ini = n;
    f->fim = n; 
}

int vazia(Fila* f){
    if(f->ini == NULL)
        return 1;
    else
       return 0;
}

int retira (Fila* f){
    Lista* t;
    int v;
    if (vazia(f)) { 
        exit(1); 
    } 
    t = f->ini;
    v = t->info;
    f->ini = t->prox;
    if (f->ini == NULL)
        f->fim = NULL;
    free(t);
    return v;
}

void libera(Fila* f){
    Lista* q = f->ini;
    while (q!=NULL) {
        Lista* t = q->prox;
    free(q);
    q = t;
    }
    free(f);
}

int inverteNum(int x){    
    int rest;
    int numInverso = 0;
    while(x != 0){
        rest = x%10;
        numInverso = numInverso*10 + rest;
        x /= 10;
    }
    return numInverso;
}

int main(){
    int a, b, t, i;

    int indices[10001];
    int botoes[10001];

    scanf("%d",&t);

    while(t--){
        for(i = 0; i < 10002; i++) {
            indices[i] = 0;
            botoes[i] = 0;
        }

        scanf("%d %d", &a, &b);
        
        Fila* f = inicializa();

        insere(f,a);
        indices[a] = 1;
        
        while(botoes[b] == 0){
            a = retira(f);
        
            if(botoes[a+1] == 0 && a <= 10000) {
                insere(f, a+1);             
                
                botoes[a+1] = botoes[a] + 1;
                indices[a+1] = 1;                  
            }

            if(botoes[inverteNum(a)] == 0 && a <= 10000){
                insere(f,inverteNum(a));
                
                botoes[inverteNum(a)] = botoes[a] + 1;
                indices[inverteNum(a)] = 1;
            }
        }
        printf("%d\n", botoes[b]);
        libera(f);
        }
    
    return 0;
}