#include <stdio.h>
int main () {
    /* 
    programa que calcula o mmc e mdc de 2 numeros inteiros.
    o calculo do mmc e feito pela divisao dos numeros primos.
    o calculo do mdc e feito pelo produto dos dois numeros dividido pelo mmc.
    */
    int m,n;
    printf("digite o valor de m: ");
    scanf("%d",&m);
    printf("digite o valor de n: ");
    scanf("%d",&n);
    int m_auxiliar=m,n_auxiliar=n;
    int divisor=2,mmc=1;
    while (n!=1 || m!=1) {
        if (n % divisor==0 || m % divisor==0) {
            printf ("%d %d | %d\n",n,m,divisor);
            if (n % divisor==0) {
                n=n/divisor;
            }
            if (m % divisor==0) {
                m=m/divisor;
            }
            mmc=mmc*divisor;
        }
        else {
            divisor++;
        }
    }
    int mdc=m_auxiliar*n_auxiliar/mmc;
    printf("o valor do mmc e: %d\n", mmc);
    printf("o valor do mdc e: %d\n", mdc);
}
