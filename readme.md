# Trabajo practico 01

## Punto 2 -- .gitignore

### ¿Por qué es conveniente incluirlo?

Es conveniente incluirlo ya que nos permite decidir el criterio que tiene git a la hora de analizar los archivos que podamos llegar a subir a la version. Esto es importante ya que podemos hacer que git ignore archivos que tengan información que no queremos que se filtre o archivos de poca importancia que no son necesarios o archivos temporales que no tiene sentido que sean agregados.

---

### ¿Cuándo se debe hacer?

Se debe hacer siempre que sea posible, más aun en proyectos de gran tamaño o que tengan información importante, etc. Basicamente es un estandar que se deberia usar para mantener tanto la limpieza como la seguridad de un proyecto.

---

### ¿Cómo configuraría el archivo .gitignore?

El archivo funciona a base de reglas basicas que se escriben linea por linea para que git entienda que contenido debe ignorar. Por ejemplo si queremos que git ignore especificamente un archivo, basta con simplemente poner en el .gitignore una linea con el nombre y extension del archivo, en el caso de ignorado.txt simplemente ponemos tal cual "ignorado.txt" en el gitignore para que este no se vea como archivo a subir al repositorio. Ademas de incluir una linea con el nombre especifico del archivo, se puede ignorar carpetas enteras, archivos que compartan una misma terminación y tambien se pueden agregar excepciones a estas reglas más generales.

---

## Punto 3 -- Arreglando el codigo

### Codigo misterioso

En el codigo misterioso nos encontramos con tres funciones que procesan el numero dado de tres formas distintas.

- La primera se encarga de recibir el numero mediante un puntero y a traves de un bucle pasa por cada digito del número y lo guarda de forma inversa, osea invierte el número.
- La segunda simplemente recibe el número nuevamente mediante un puntero, y lo divide a la mitad
- La tercera nuevamente usa un bucle para pasar por cada digito del número pero utiliza una variable acumuladora para ir guardando la suma de los digitos, para luego sumarle esta suma al número que recibe la funcion.

Los cambios que hice fueron:

- Cambiar el nombre de las funciones
  - f_alpha --> invertir_numero
  - f_beta --> num_mitad
  - f_gamma --> suma_digitos  
    Me parecieron necesarios estos cambios porque no sabemos que hacen las funciones con el nombre que tenian, con estos nuevos nombres nos podemos dar una buena idea del funcionamiento de las mismas.
- Para las variables solo vi necesario cambiar el nombre de la variable "ver" usada en la funcion invertir_numero, ya que era la unica variable que no tenia un nombre intuitivo para su uso.

---

### Codigo sin funcionar

En el código sin funcionar encontramos muchos problemas, ordenados según la linea de codigo donde se encuentran son:

- No se incluye la libreria **"stdio.h"**, impidiendo el uso de **scanf** y **printf**.
- La función **duplicar_numero** no devuelve un valor y esta usando un pasaje por valor, resultando en que el número no se duplique. Se corrige o haciendo el pasaje por referencia mediante puntero o cambiando la función para que devuelva un _**int**_.
- En la linea 12 se esta pasando mal el argumento de la función **scanf** ya que la misma deberia pasar como segundo argumento la direccion de **valor1**, no su contenido. Lo solucionamos agregando un "&" antes de valor1, tal que: **&valor1**.
- En la linea 17 falta agregar un "**;**" al final de la declaración de **suma**.
- Por ultimo en la linea 23 nuevamente falta un "**;**" al final del **"return 0"**.

Con hacer estos cambios el código quedaria arreglado.

---
