#include <stdio.h>

int main() {
    printf("hola mundo\n");

    int* puntero;
    int valor = 5;
    puntero = &valor;
    printf("El valor contenido en el puntero es: %d\n", *puntero);
    printf("la dirección de memoria almacenada en el puntero es: %p\n", puntero);
    printf("la dirección de memoria de la variable valor es: %p\n", &valor);
    printf("la dirección de memoria del puntero es: %p\n", &puntero);
    printf("el tamaño de la variable valor es: %d bytes\n", sizeof(valor));
    return 0;
}
