[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/F4zkDqTW)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=21066495&assignment_repo_type=AssignmentRepo)
# Práctica 2: Introducción al desarrollo. Ponlo en práctica.

Apoyate en los siguientes recursos para realizar la práctica:

[Descripción de la práctica](https://revilofe.github.io/section3/u01/practica/EDES-U1.-Practica011/)


---

# P1.2 Ponlo en practica - Evaluable

## Identificación de la Actividad
- **ID de la Actividad:** P1.2
- **Módulo:** EDES
- **Unidad de Trabajo:** U1: Introducción al desarrollo de Software
- **Fecha de Creación:** 15/10/2025
- **Fecha de Entrega:** 16/10/2025
- **Alumno(s):** 
  - **Nombre y Apellidos:** Sara Romero Peralta
  - **Correo electrónico:** sromper0610@g.educaand.es
  - **Iniciales del Alumno/Grupo:** S.R.P

## Descripción de la Actividad
La actividad consiste en evaluar la relación que tienen el software y el hardware, clasificar los lenguajes de programación, comprendiendo los diferentes profesos de ejecución que tienen (compilador, interprete y máquinas virtuales) usando de ejemplo un codigo simple en cada uno de los tres programas para enseñar su ejecución
Vamos a usar para ello los siguientes tres programas:
- **Python** (lenguaje interpretado)
- **C** (lenguaje compilado)
- **Java** (lenguaje que genera código intermedio ejecutado en una máquina virtual)

Cada programa debe pedir el nombre del usuario, su año de nacimiento, calcular su edad, y mostrar en un mensaje el nombre y la edad
## Instrucciones de Compilación y Ejecución
1. **Requisitos Previos:**
   - **Entorno de desarrollo:** Visual Studio Code
   - **Sistema operativo:** Windows 11
   - **Terminal utilizada:** Git Bash
   - **Lenguajes usados:**
      - **Python** (ejecutado mediante la extensión de Python en VS Code)
      - **C** (ejecutado mediante la extensión Code Runner en VS Code)
      - **Java** (ejecutado desde la extensión de Java en VS Code)
   - No fue necesario instalar compiladores o intérpretes por separado, ya que VS code gestiona la ejecución de los tres lenguajes a través de las extensiones

2. **Pasos para Compilar el Código:**
   ```bash
   [Comando para compilar el código]
   ```

3. **Pasos para Ejecutar el Código:**
   ```bash
   [Comando para ejecutar la aplicación]
   ```

4. **Ejecución de Pruebas:**
   ```bash
   [Comandos para ejecutar pruebas, si las hubiera]
   ```

## Desarrollo de la Actividad
### Descripción del Desarrollo
[Explicación de cómo se ha abordado el desarrollo de la actividad, incluyendo las decisiones de diseño, estructura del código y enfoque de resolución de problemas. Se recomienda adjuntar diagramas o capturas de pantalla si es necesario.]

### Código Fuente
[Aquí se incluirá un enlace directo a los archivos de código fuente en el repositorio, por ejemplo, si se está usando GitHub: `src/main.java` o algún enlace directo.]

### Ejemplos de Ejecución
- **Entrada 1:** Descripción de la entrada y valor de prueba.
- **Salida Esperada 1:** Explicación de la salida esperada y el resultado de la prueba.

### Resultados de Pruebas
[Aquí se detallará cómo se ha verificado la funcionalidad del código, incluyendo resultados de pruebas automatizadas o manuales, en caso de que las haya.]

## Documentación Adicional
- **Manual de Usuario:** [Enlace a la documentación del usuario, si existe]
- **Autorización de Permisos:** Verificar que el profesor tenga permisos de lectura en el repositorio para revisar el código.

## Conclusiones
[Resumen de las conclusiones alcanzadas al desarrollar la actividad, las lecciones aprendidas, y posibles mejoras que se puedan implementar en futuras entregas.]

## Referencias y Fuentes
[Aquí se listarán las fuentes consultadas para el desarrollo de la actividad, tales como documentación oficial, artículos, o cualquier recurso externo relevante.]

### Notas Adicionales:
1. **Nombres de Archivos y Repositorios:**
   - Asegúrate de que el nombre del archivo o repositorio siga la estructura definida: `XXX-idActividad-Iniciales`.
2. **Permisos:**
   - Verifica que el profesor tenga los permisos necesarios para acceder al repositorio o documento.
3. **Formato:**
   - Si se entrega en formato PDF o Google Docs, asegúrate de cumplir con el mínimo y máximo de folios establecidos.
4. **Compilación y Ejecución:**
   - Detalla claramente cómo compilar y ejecutar el código, incluyendo las instrucciones en el archivo `README.md`.


## Respuesta a las preguntas

### Criterio de evaluación 1.a: Relación entre el Software y Hardware
#### Pregunta:
##### Describe cómo el software que has creado se ha relacionado con los componentes físicos del dispositivo (memoria RAM, procesador, preriféricos, etc) durante la ejecución de los tres lenguajes (interpretado, compilado y en máquina)
##### Puntos a incluir:
#####    - Cómo se almacenaron los datos en memoria
#####    - Qué hizo el procesador con el cógigo
#####    - Si se interactuó con peroféricos, como la pantalla para mostrar la salida
Para que los programas pudiesen ejecutarse, el procesador (CPU) tomó las instrucciones y las ejecutó, la memoria RAM guardó temporalmente la información que necesita rápidamente, no hizo uso del disco duro o SSD porque no se guardó información a largo plazo, y los periféricos se usaron para que el usuario y el software se pudiesen comunicar. De forma explayada, lo que pasó fue que:
   - Memoria RAM: el código fuente se cargó directamente en la memoria junto con los datos introducidos por el usuario. Las variables se almacenaron temporalmente en la RAM mientras el programa se ejecutaba
   - Procesador (CPU): ejecutó las instrucciones derivadas del código fuente, con la diferencia de que:
      - En Python: el intérprete leyó el código línea por línea y lo tradujo internamente a insttrucciones que la CPU pudiese ejecutar
      - En C: la CPU ejecutó directamente las instrucciones (el código ya estaba traducido al lenguaje máquina, así que la ejecución fue más rápida y directa)
      - En Java: se interpretó o compiló en tiempo de ejecución a instrucciones que el procesador pudiera entender
   - Periféricos: se necesitó del uso de la pantalla (para que el usuario pudiese ver lo que el código mostraba o pedia) y el teclado (para que el usuario pudiese introducir los valores que el código solicitaba)
No se hizo uso del disco duro ya que no se necesitó guardar información a largo plazo (más allá que almacenar los propios programas)

### Criterio de evaluación 1.c: Diferenciación entre el Código Fuente, Código objeto y Ejecutable
#### Preguntas:
##### 1. Explica cómo el código fuente que escribiste se transformó en código objeto y ejecutable en el caso de los lenguajes compilados. ¿Generaste archivos intermedios (código objeto)? ¿Qué nombres tomaron estos archivos?
Lenguaje compilado (C):
   - Código fuente: archivo "programa.c", contiene las instrucciones legibles por humanos (como pedir el nombre y año de nacimiento y calcular la edad de usuario)
   - Código objeto: al compilar, el compilador genera un archivo intermedio (programa.o). Este archivo contiene instrucciones en lenguaje máquina, que todavía no puede ejecutarse solo, ya que debe enlazarse con otras partes y bibliotecas necesarias
   - Código ejecutable: al enlazar el código objeto, se obtiene un archivo ejecutable (programa.ex en mi caso, ya que uso Windows). La CPU puede ejecutar directamente este archivo, mostrando la salida final del programa

Lenguaje interpretado (Python):
   - Código fuente: archivo "programa.py", que contiene las instrucciones en Python
   - Código objeto y código ejecutable: python no genera estos códigos. El intérprete lee el código fuente línea por línea y lo traduce internamente a instruciones que la CPU puede ejecutar

Lenguaje con Máquina Virtual (Java):
   - Código fuente: archivo "programa.java" contiene las instrucciones escritas en Java
   - Código intermedio (Bytecode): al compilar, se genera un archivo .class que contiene bytecode, un código intermedio independiente del sistema operativo
   - Código ejecutable: no tiene, en Java, el bytecode se traduce a lenguaje máquina, gestionando la memoria RAM, el procesador y los periféricos para mostrar la salida final


##### 2. Para los lenguajes interpretados, describe cómo el código fuente se ejecutó directamente, sin generar archivos de código objeto o ejecutable

