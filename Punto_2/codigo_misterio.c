#include <stdio.h>
// Esta es una función que invierte el número dado por el puntero.
void invertir_numero(int* p) {
    int temp = *p;
    int inverso = 0;
    while (temp > 0) {
        inverso = (inverso * 10) + (temp % 10);
        temp = temp / 10;
    }
    *p = inverso;
}
// Esta función divide el número por 2 usando el puntero.
void num_mitad(int* p) {
    *p = *p / 2;
}
// Esta función suma los dígitos del número y luego suma ese resultado al número original.
void suma_digitos(int* p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

void procesar_enigma(int* valor_referencia) {
    invertir_numero(valor_referencia);
    num_mitad(valor_referencia);
    suma_digitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;

    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);

    // Instrucción para el alumno:
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);

    printf("Resultado final del enigma: %d\n", dato_secreto);

    return 0;
}