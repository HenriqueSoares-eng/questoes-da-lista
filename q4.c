#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("digite altura: ");
    scanf("%d", &n );
    if (n<=5) {
        printf("vc digitou um numero invalido. terminando o programa");
        exit (1);
    }
    for (int linha=0;linha<n;linha++) {
        for (int coluna=0;coluna<n;coluna++) {
            if (coluna==0) {
                printf ("X");
            }
            else if (coluna==n-1) {
                printf ("X\n");
            }
            else if (n/2==linha) {
                printf("X");
            }
            else {
                printf(" ");
            }
        }
    }
}