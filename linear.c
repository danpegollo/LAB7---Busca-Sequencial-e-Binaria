#include <stdio.h>
#include <stdbool.h>

int busca_linar(int v[], int n, int e){
    int contagem = 0;
    for(int i = 0; i < n; i++){
        contagem++;
        if(v[i] == e){
            printf("## A contagem foi de: %d\n", contagem);
            return i;
        }
    }
    printf("## A contagem foi de: %d\n", contagem);
    return -1;
}

void imprimir(int v[], int n) {
    printf("Vetor: [ ");
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
}

int main() {
    int n = 10;
    
    // FORMA CORRETA EM C: Inicializar o vetor direto com os valores entre chaves { }
    int dados[10] = {8, 19, 20, 2, 15, 16, 9, 15, 2, 16};
    
    bool sair = false;
    int op;

    imprimir(dados, n); // Mostra o vetor fixo na tela ao iniciar
    printf("\n");

    while (!sair) {
        printf("## Digite o número a ser buscado (ou -1 para sair): ");
        scanf("%d", &op);

        if(op == -1){
            sair = true;
        } else {
            int indice = busca_linar(dados, n, op);
            printf("## Posicao em que o elemento foi encontrado: %d \n\n", indice);
        }
    }
    printf("\n## Fim!\n");
    return 0;
}
