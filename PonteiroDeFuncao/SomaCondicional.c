#include<stdio.h>

int quadrado(int a) {
    return a * a;
}

int cubo(int a) {
    return a * a * a;
}

int soma_condicional(int a, int b, int (*ptr)()) {
    a = (*ptr)(a);
    b = (*ptr)(b);

    return a + b;
}

int main() {
    // ponteiro para função com que retorna int
    int (*fp)();

    fp = quadrado;
    
    int soma = soma_condicional(2, 3, fp);
    printf("Soma de quadrados = %d\n", soma);

    fp = cubo;
    
    soma = soma_condicional(2, 3, fp);
    printf("Soma de cubos = %d\n", soma);

    return 0;
}
