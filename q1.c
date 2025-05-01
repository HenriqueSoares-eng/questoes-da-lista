#include <stdio.h>
int main () {
    int nascimento,atual=2025;
    printf("que ano nasceu: ");
    scanf("%d", &nascimento);
    int idade=atual-nascimento;
    printf("a idade e %d\n", idade);
    if (idade==50) {
        printf("a idade no fim de %d e =50\n",atual);
    }
    else if (idade < 50 ) {
        int falta=50-idade;
        int ano=atual+falta;
        printf("o ano que vai fazer 50 anos e %d\n",ano);
    }
    else {
        int passou=idade-50;
        int ano=atual-passou;
        printf("o ano que fez 50 foi %d\n",ano);
    }
}
   