#include <stdio.h>
int main () {
    char escala;
    printf("qual e a escala:(F/C) ");
    scanf("%c", &escala);
    float temperatura;
    printf("qual a temperatura: ");
    scanf("%f", &temperatura);
    if (escala=='f'|| escala=='F'){
        float c=5*(temperatura-32)/9;
        printf("a temperatura em celsius e: %f\n",c);
    }
    else if (escala=='c'|| escala=='C'){
        float f=(9*temperatura/5)+32;
        printf("a temperatura em fahreinheit e: %f\n",f);
    }
    else {
        printf("essa escala eu nao conheco\n");
    }
}