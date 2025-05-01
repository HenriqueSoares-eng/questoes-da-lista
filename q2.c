#include <stdio.h>
int main () {
    int qtd_positivos=0,qtd_negativos=0,n_digitado;
    do {
        printf("qual o numero: ");
        scanf("%d",&n_digitado);
        if (n_digitado>0) {
            qtd_positivos++;
        }
        else if (n_digitado<0) {
            qtd_negativos++;
        }

    } while (n_digitado!=0);
    printf("quantidade de positivos=%d\n",qtd_positivos);
    printf("quantidade de negativos=%d\n",qtd_negativos);
    if (qtd_positivos >qtd_negativos) {
        printf("quantidade positivos maior que negativos\n");
    }
    else if (qtd_positivos==qtd_negativos) {
        printf("quantidade positivos igual que negativos\n");
    }
    else {
        printf("quantidade positivos menor que negativos\n");
    }
}