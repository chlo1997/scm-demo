#include <stdio.h>
#include <math.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

void potencia(int a, int b){
    printf("%d^%d = %d\n", a,b, pow(a,b))
}

void divide(int a, int b){
    if (b == 0)
	printf("Divisões por 0 não são permitidas")
    else
	printf("%d/%d = %d\n", a, b, a/b);
}

int main() {
    printf("Olá, Estudante!\n");
    soma(5, 3);
    multiplica(5, 3);
    return 0;
}
