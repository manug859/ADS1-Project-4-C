#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


int pedir_entero(char nombre) {
    int x;
    printf("Ingrese un valor entero mayor a 0 para '%c' = ", nombre);
    scanf("%d", &x);
return x;
}

bool es_primo(int N) {
    int i = 2;
    bool res = true;

    while (i < N && res) {
        res = res && !(N%i==0);
        i = i+1;
    }
    return res;
}

int nesimo_primo(int N) {
    int i = 1;
    int contador_primo = 0;
    int numero_primo = 0;

        while(contador_primo<=N) {
            
            if(es_primo(i)) {
                contador_primo = contador_primo + 1;
                numero_primo = i;
            }
        i = i+1;         
    }
    
return numero_primo;
}

int main(void) {
    int num = pedir_entero('x');
    bool menor = true;
    assert(x>=0);
    int res = nesimo_primo(num);
    printf("El primo numero %d es = %d", num, res);
return 0;
}