#include <stdio.h>
#include <assert.h>

int pedir_entero(char name) {
    int entero;
    printf("Ingrese un valor para %c : ", name);
    scanf("%d", &entero);
return entero;
}

int hola_hasta(int x) {
    while(x>0) {
        printf("Hola\n");
        x--;
    }
return x;
}

int main(void) {
    int x;
    x = pedir_entero('x');
    assert(x>0);
    hola_hasta(x);
return 0;
}