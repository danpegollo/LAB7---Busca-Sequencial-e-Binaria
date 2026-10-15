#include <stdio.h>
#include <stdbool.h>

int busca_binaria(int v[], int n, int e){
    int menor_indice = 0;
    int maior_indice = n - 1;
    int indice_medio;
    int contagem = 0;

    while (maior_indice >= menor_indice) {
        contagem++;
        
        indice_medio = (maior_indice + menor_indice) / 2;
        
        if (v[indice_medio] == e) {
            printf("## A contagem foi de: %d\n", contagem);
            return indice_medio;
        }
        else if (v[indice_medio] > e) {
            maior_indice = indice_medio - 1; // Descarta a metade direita
        }
        else {
            menor_indice = indice_medio + 1; // Descarta a metade esquerda
        }
    }

    printf("## A contagem foi de: %d\n", contagem);
    return -1;
}

void imprimir(int v[], int n) {
    printf("Vetor (Ordenado): [ ");
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
}

int main() {
    int n = 10;
    int dados[10] = {2, 4, 7, 15, 18, 25, 43, 84, 85, 131};
    
    bool sair = false;
    int op;

    imprimir(dados, n);
    printf("\n");

    while (!sair) {
        printf("## Digite o número a ser buscado (ou -1 para sair): ");
        scanf("%d", &op);

        if(op == -1){
            sair = true;
        } else {
            int indice = busca_binaria(dados, n, op);
            printf("## Posicao em que o elemento foi encontrado: %d \n\n", indice);
        }
    }
    printf("\n## Fim!\n");
    return 0;
}
