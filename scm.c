#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

void divide(int a, int b) {
    if (b == 0) {
        printf("Impossível dividir por 0!");
    } else {
        printf("%d / %d = %.2f\n", a, b, a / (float)b);
    }
}

int main() {
    printf("Olá, Estudante!\n");
    soma(5, 3);
    multiplica(5, 3);
    divide(5, 3);
    return 0;
}
