# Trabajo practico 01

## Punto 2 - .gitignore

### ¿Por qué es conveniente incluirlo?

Es conveniente incluirlo ya que nos permite decidir el criterio que tiene git a la hora de analizar los archivos que podamos llegar a subir a la version. Esto es importante ya que podemos hacer que git ignore archivos que tengan información que no queremos que se filtre o archivos de poca importancia que no son necesarios o archivos temporales que no tiene sentido que sean agregados.

---

### ¿Cuándo se debe hacer?

Se debe hacer siempre que sea posible, más aun en proyectos de gran tamaño o que tengan información importante, etc. Basicamente es un estandar que se deberia usar para mantener tanto la limpieza como la seguridad de un proyecto.

---

### ¿Cómo configuraría el archivo .gitignore?

El archivo funciona a base de reglas basicas que se escriben linea por linea para que git entienda que contenido debe ignorar. Por ejemplo si queremos que git ignore especificamente un archivo, basta con simplemente poner en el .gitignore una linea con el nombre y extension del archivo, en el caso de ignorado.txt simplemente ponemos tal cual "ignorado.txt" en el gitignore para que este no se vea como archivo a subir al repositorio. Ademas de incluir una linea con el nombre especifico del archivo, se puede ignorar carpetas enteras, archivos que compartan una misma terminación y tambien se pueden agregar excepciones a estas reglas más generales.

---
