#include <stdio.h>
#include <stdlib.h>

float cuadrado(float num) {
    return num * num;
}

void cuadrado2(float* num) {
    *num = (*num) * (*num);
}
void mostrar_dir_cont(float* num) {
    printf("La dirección de memoria de num es: %p\n", num);
    printf("El contenido de num es: %f\n", *num);
}
void Invertir(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void orden(float* a, float* b) {
    if (*a > *b) {
        Invertir(a, b);
    }
}
int main() {
    float valor1 = 5;
    float valor2 = 10;
    mostrar_dir_cont(&valor1);   // muestro direccion y contenido de valor1 (5)
    mostrar_dir_cont(&valor2);   // muestro direccion y contenido de valor2 (10)
    Invertir(&valor1, &valor2);  // invierto los valores (valor1 -> 10, valor2 -> 5)
    mostrar_dir_cont(&valor1);   // muestro direccion y contenido de valor1 despues de invertir (10)
    mostrar_dir_cont(&valor2);   // muestro direccion y contenido de valor2 despues de invertir (5)
    orden(&valor1, &valor2);     // ordeno los valores (valor1 -> 5, valor2 -> 10)
    cuadrado2(&valor1);          // calculo el cuadrado de valor1 y lo guardo en valor1 (valor1 -> 25)
    mostrar_dir_cont(&valor1);   // muestro direccion y contenido de valor1 (25)
    mostrar_dir_cont(&valor2);   // muestro direccion y contenido de valor2 (10)
    orden(&valor1, &valor2);     // ordeno los valores (como 25 > 10, entonces valor1 -> 10, valor2 -> 25)
    mostrar_dir_cont(&valor1);   // muestro direccion y contenido de valor1 (10)
    mostrar_dir_cont(&valor2);   // muestro direccion y contenido de valor2 (25)
    // todas estas operaciones las hice para mostrar momento a momento como cambian las direcciones y los valores segun el uso de las funciones. Chequeando asi que funcionen.
    return 0;
}