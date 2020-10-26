#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/***Standard input output. Las líneas con # son procesadas por el preprocesador antes de que el programa se compile
Esta indica que incluye las bibliotecas Standard input output
En cmd--> gcc.level_1_hello_world.c -o holamundo.exe
En cmd--> gcc holamundo.exe
***/

//Función principal. La ejecución empieza aquí
int funcion_principal_main() 
{
    printf("Hello world!");
    return 0;
}
//Fin función main

//Operadores
int operadores_main(){

    int num1, num2, resultado;
    int a = 12;
    int b = 3;

    //Mensaje para pedir los números
    //scanf(%d,&myvariable)
    //"Primer argumento es el tipo de dato, un entero en este caso -->%d
    //"Segundo: la variable donde vamos a alamacenar ese valor--> &myvariable
    
    printf("Ingresa el primer valor: ");
    scanf("%d",&num1);
    printf("Ingresa el segundo valor: ");
    scanf("%d",&num2);

    //resultado = num1 + num2;

    /*Ejemplo 1:
    Primero ejecutará los paréntesis. a debe esperar a su paréntesis y b también
    Y el + esperará al resultado de las dos operaciones

    (num1+num2)
    (b+num2)
    a*(num1+num2)
    b*(b+num2)
    a+b

    resultado = a*(num1 + num2) + b*(b+num2);
    */

   /*Ejemplo 2:
   Si hay varias multiplicaciones siempre se empieza de izquierda a derecha:
   Orden ejecución:
   a*b
   (a*b)*num1
   ((a*b)*num1) + num2/
    resultado = a*b*num1+num2;

    */

    printf("Resultado: %d", resultado);

    return 0;
}

//Fin operadores

/*Directivas del preprocesador
INCLUDE:

#include <stdio.h>
#include "nombre del archivo" 

La diferencia es la ruta donde el prep buscará el archivo a incluir
Si está entre comillas lo busca en el mismo directorio donde está el archivo
que va a compilarse y si está entre <> va a buscarlo en los encabezados de 
la biblioteca standard

DEFINE
Crea constantes simbólicas y macros

#define PI 3.14.159 --> constante. Inmutable.
#define CUBO(a) a*a*a ---> Esto es una macro definida por mí para calcular el cubo de un número. Más rápidas que las funciones en tiempo de ejecución

*/

#define PI 3.14159
#define CUBO(numAlCubo) numAlCubo*numAlCubo*numAlCubo


int condicionales_y_macros_main(){

    int edad;

    printf ("Ingresa tu edad: ");
    scanf("%d",&edad);

    if( edad >= 18){
        printf("Eres mayor de edad\n");
    }else{
        printf("No eres mayor de edad\n");
    }

    //Macro
    int suma;
    suma = PI + 3;
    printf("El resultado es : %i\n", suma);

    int numAlCubo = 3;
    printf("El número al cubo es: %i",CUBO(numAlCubo));
    

    return 0;
}

int variables_main(){

    char letra = 'y'; //tamaño de 1 byte. Rango de 0 a 255 -> Caracteres del código ASCII que podemos utilizar
    printf("%c \n",letra);
 
    int numInt = 20; //tamaño 2 bytes. Rango -32768 a 32767
    printf("%i \n",numInt);
    short numShort = -1; //Es un entero corto. tamaño 2 bytes. Rango -128 a 127
    printf("%i \n",numShort);
    long numLong = 5932; //Es un entero largo (%li). tamaño 4 bytes. Rango -2147483648 a 2147483647
    printf("%li \n",numLong); //(%i o %li)
    unsigned int unsign = 25; //Tamaño 2 bytes. Rango de 0 a 65535
    printf("%i \n",unsign);

    //Números reales

    float numFloat = 72.537; //tamaño 4 bytes
    printf("%f \n",numFloat);
    printf("%.2f \n",numFloat); // %.2 Para redondear decimales. Si el último número del float es mayor que 5 lo Redondea hacia arriba
    //Y si es menor que 5 lo redondea hacia abajo
    double numDouble = 1234.122326; // Tamaño 8 bytes
    printf("%lf \n",numDouble); //(%f o %lf)
    printf("%.2lf \n",numDouble); //redondear decimales

    return 0;
}

int conversion_tipos_de_datos_main(){
    //Palabras reservadas y conversión de tipos de datos
    //Hay 32 palabras reservadas

    //Conversión de tipos de datos
    int numEntero = 80; //80 en ASCII es una P, por eso (char) lo convierte a P
    // printf("entero %i\nflotante %.2f\ndouble %.3f\ncaracter %c\n",numEntero,(float)numEntero,(double)numEntero,(char)numEntero);
    
    //Ahora hacemos una operación:
    float numFloat = 45.3;
    float suma = (float) numEntero + numFloat;
    printf("%.2f",suma);
    return 0;
}

int bucle_for_main(){
    // Bucle for
    int contador = 0;
    for(contador = 1; contador <= 10; contador++){
        //En la primera vuelta contador vale 1
        printf("%i\n", contador);
    }

    return 0;
}

int bucle_while_main(){
    //bucle while
    //Se ejecuta mientras la condición sea verdadera

    int contador = 0;

    while (contador <= 10){
        printf("%i\n", contador);
        contador++;
    }

    return 0;
}

int bucle_do_while_main(){
    //Do while
    //Se ejecuta un bloque AL MENOS UNA VEZ de instrucciones y DESPUÉS evalúa una condición

    int contador = 1;
    do{
        printf("%i\n", contador);
        contador++;

    }while(contador <= 10);

    return 0;
}

int switch_instruction_main(){
    //Switch: etiquetas keys y un caso default
    int casos;
    //printf("Ingresa un numero:\n");
    //scanf("%i", &casos);

    printf("Ingresa una letra:\n");
    scanf("%c", &casos);

    switch(casos){
        case '1': //Sin comillas cuando es número
        printf("Elegiste el primer caso\n");
        break;
        case '2':
        printf("Elegiste el segundo caso\n");
        break;
        default:
        printf("No encontramos tu caso\n");
        break;
    }

    return 0;
}

int one_array_main(){
    //Arrays: conjunto de datos alamacenados dentro de una variable
    //Se pueden cambiar sus propiedades pero SÓLO DE UN MISMO TIPO
    //No cambian de tamaño, son estáticos

    //Array unidimensional,  multidimensional o matrices
    int myArray[4] = {0,1,2,3}; //Array con 4 elementos. 4 es la dimensión de mi array
    printf("%i\n", myArray[2]); //Imprime el valor que haya en la posición 2.

    int sizeA;
    printf("Ingresa size del array:\n");
    scanf("%i", &sizeA);
    int edades[sizeA];

    for(int i= 0; i < sizeA; i++){
        printf("Ingresa la edad %i\n", i+1);
        scanf("%i", &edades[i]);
    }
    printf("Los valores del array son:\n");
    for(int i = 0; i < sizeA; i++){
        printf("%i \n", edades[i]);
    }
    

    return 0;
}

int array_miltidimensional_main(){
    //Array multidimensional

    int multi[2][3] = {{5,3,1},{6,4,2}}; //[2][3] --> 2 filas, 3 columnas. 
    /*Visualmente el array:
    columna>>> 0 1 2
    fila 0 >>> 5 3 1
    fila 1 >>> 6 4 2
    */

    //printf("%i\n",multi[1][1]); //Imprime valor 4
    printf("%i\n",multi[1][2]); //Imprime valor 2

    return 0;
}

int break_continue_main(){
    //Break and continue : manejar el flujo del programa
    //Break para o se sale de la ejecución, de un bucle por ejemplo
    //Continue seguimos pero se salta un paso 

    int num = 0;
    
    while(num<=7){

        num++;
        if(num == 2){
            //break;
            continue; //El continue es un "pasa de este valor" Si pongo continue aquí no va a hacer nada con el valor que está manejando (el 2) y si tenemos el num++ debajo, no incrementará su valor y se romperá el programa
        }              //Por eso el num++ está comentado abajo y puesto arriba
        printf("%i\n", num);
        //num++;
    }

    return 0;
}


long funcion_Factorial(long numero); //Aquí definimos el prototipo de nuestra función para que la pueda llamar después !******!!!
int funciones_recursivas_main(){
    //Funciones recursivas
    //Ejemplo: cálculo de número factorial
    /*el factorial de 5 es 5! = 5*4*3*2*1 ó 5*4!
    ...
    1! = 1
    0! = 1
    */
   int num;
   printf("Ingresa un numero para su calculo factorial:\n");
   scanf("%i",&num);
   for(int i = 0; i <= num; i++){
       printf("%ld\n",funcion_Factorial(i));
   }

/*
Salida de enviar 5:
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120

*/
    return 0;
}

long funcion_Factorial (long numero){
    if(numero <= 1){
        return 1;
    }else{
        return numero*funcion_Factorial(numero-1); //Restamos uno porque se multiplica por el siguiente descendente
    }
}

//Funciones de retorno
int mi_suma(); //declaro mi funcion
int NUM3 = 3; //variable global
 
int funciones_retorno_main(){
    //Funciones de retorno
    int valor1, valor2;

    printf("Ingresa un numero: \n");
    scanf("%i",&valor1);
    printf("Ingresa otro numero: \n");
    scanf("%i",&valor2);
    printf("El resultado es: %i\n", mi_suma(valor1,valor2));
    return 0;
}

int mi_suma(int numero1,int numero2){ //Especificar qué tipo de dato recibo
    int resultado = numero1+numero2+NUM3;
    return resultado;
}
//Fin funciones retorno

//Funciones básicas. 
//Siempre se deben declarar antes que la función que las llame en el código
void saludo(){ //Void no devuelve nada
    printf("Hola");
    return; //Ponemos return para devulver algún valor, este no devuelve nada porque está declarada void.
}
int sumar(){
    int num1 = 12;
    int num2 = 4;
    int suma = num1 + num2;
    printf("%i",suma);
    return suma;
}

int funciones_basicas_main(){
    //Funciones básicas

    //saludo();
    //sumar();

    return 0; // Devuelve un entero
}

//Fin funciones básicas

//Apuntadores
//Un apuntador es una variable cuyo valor son direcciones de memoria.
int apuntadores_main(){

    //Cuando declaramos la variable decimos al compilador el nombre y el tipo
    int a = 2;//Cuando el compilador encuentra la palabra reservada del tipo de variable, reserva en la memoria el tamaño para ese tipo de variable.
    int *apt = &a; //Declaramos una variable apuntador con el asterisco, para que el compilador reserve los datos necesarios para alojar una dirección en memoria.
    //Asignando el valor de una variable a un apuntador, sabremos qué lugar ocupa en la memoria.
    //Con el &, en scandf, lo que hacemos es indicarle la dirección en memoria en donde se va a almacenar.
    printf("%i\n",*apt); //Nos va a imprimir el valor de a. 
    printf("%p\n", apt); // %p Nos va a imprimir en hexadecimal la posición en memoria del apuntador
    return 0;
}


//Llamada de función por valor
int funcion_cubo(int number); //Prototipo de mi función
int funcion_por_valor_main(){
    //Llamada de funciones por valor
    int num = 5;
    printf("Valor original%i\n", num);
    num = funcion_cubo(num);
    printf("El nuevo valor%i\n", num);
    return 0;
}

int funcion_cubo(int number){
    return number * number * number;
}

//Llamada de función por referencia
//Son de tipo void
void funcion_cubo_ref(int *number); //Prototipo de mi función

int funcion_por_referencia_main(){
    //Llamada de funciones por referencia:este es el main
    int num = 5;
    printf("Valor original%i\n", num);
    funcion_cubo_ref(&num); //Pasamos la referencia de num
    printf("El nuevo valor%i\n", num);
    return 0;
}

void funcion_cubo_ref(int *number){
    *number =  *number * *number * *number;
}
//Fin llamadas funciones por valor y por referencia


//Operador sizeof: Operador unario, indica el tamaño en bytes de cualquier tipo de dato
//Aparece durante la compilación de un programa
int size_of_main(){
    //main
    float miarray[20];
    printf("El numero de bytes del array es: %lu\n",sizeof(miarray)); //%lu --> long unsigned
    //Son 80 bytes. Al ser de tipo float (4 bytes) lo multiplica por el tamaño del array 20 = 80.
    return 0;
}

//size_t: tipo definido por el estandard de C como un tipo entero y el valor que debemos devolver no debe tener signo, van a ser valores positivos.
size_t getSize(float *puntero);//Prototipo de mi función utilizando puntero
int size_t_main(){
    float miarray[20];
    printf("El numero de bytes del array es: %lu\n",sizeof(miarray)); //%lu --> long unsigned
    printf("El numero devuelto por getsize es:%lu\n",getSize(miarray));
    return 0;
}
size_t getSize(float *puntero){
    return sizeof(*puntero);
}

//Fin sizeof y sizet

//Estructuras: colección de 1 o más tipos de elementos denominados miembros, estos pueden ser de un tipo de dato diferente.

struct perro{
    char nombre[30]; //Que el nombre tenga como máximo 30 caracteres
    int edadMeses;
    float peso;
}perro1={"Malarkita",8,3.50},
perro2={"Dianita",18,2.30};

int estructuras_main(){

    printf("El peso de %s es %.2f y tiene %i meses\n", perro1.nombre, perro1.peso, perro1.edadMeses);
    printf("El peso de %s es %.2f y tiene %i meses\n", perro2.nombre, perro2.peso, perro2.edadMeses);
    return 0;

}

//Fin estructuras

//Nota: C no deja alamacenar espacios en blanco en los arrays. Calle_Pez_numero_7, por ejemplo
//Arrays de estructuras: alamacenar dentro de un array varias variables de estructuras

struct user_perro{
    char nombre[30];
    float peso;
    int edad;
}perros[3]; //Aquí ponemos el tamaño del array. Habrá 3 perros.

int array_de_estructuras_main(){

    for(int i = 0; i < 3; i++){ //3, los elementos de mi estructura
        printf("%i Ingresa el nombre de tu mascota: \n", i+1);
        scanf("%s", &perros[i].nombre); //El nombre de la posición en la que estemos
        printf("%i Ingresa el peso de tu mascota: \n", i+1);
        scanf("%f", &perros[i].peso);
        printf("%i Ingresa la edad de tu mascota: \n", i+1);
        scanf("%i", &perros[i].edad);
    }

    for (int i = 0; i < 3; i++){
        printf("%i El nombre es: %s\n",i+1,perros[i].nombre);
        printf("%i El peso es: %.2f\n",i+1,perros[i].peso);
        printf("%i La edad es: %i\n",i+1,perros[i].edad);
    }

    return 0;
}

//Fin de array de estructuras

//Estructuras anidadas

#define length 2 //Variable global
struct owner {
    char nombre [30];
    char direccion[40];
};
struct dog {
    char nombre [30];
    int edad;
    struct owner owner_dog; //Variable owner_Dog que es la otra estructura anidada
}dogs[length];

int estructuras_anidadas_main(){

    for (int i= 0; i < length; i++){ 
        printf("Nombre del perro: ");
        scanf("%s", &dogs[i].nombre);
        printf("Edad del perro: ");
        scanf("%i", &dogs[i].edad);
        printf("Nombre del propietario: ");
        scanf("%s", &dogs[i].owner_dog.nombre);
        printf("Direccion del propietario: ");
        scanf("%s", &dogs[i].owner_dog.direccion);
        printf("\n");
    }

    for (int i = 0; i < length; i++){
        printf("El nombre del perro es: %s\n", dogs[i].nombre);
        printf("La edad del perro es: %i\n", dogs[i].edad);
        printf("Nombre del propietario: %s\n", dogs[i].owner_dog.nombre);
        printf("Direccion del propietario: %s\n", dogs[i].owner_dog.direccion);
    }

    return 0;
}

//Fin estructuras anidadas

//NOTA: A partir del capítulo 25 hay que buscar en youtube por "25 Curso básico de C, 26 Curso básico de C ...."
//https://www.youtube.com/watch?v=oaWTrIZJ4Bs&t=15s&ab_channel=codigofacilito


//Asignación dinámica de memoria
//Memoria estática: No optimizamos la memoria. SI tenemos array[30] y solo ocupamos 15, los otros 15 no se aprovechan
//Memoria dinámica: Se reserva en tiempo de ejecución, por lo que su tamaño varía al tiempo de ejecutarse
//Ejemplo1:


//Librería para malloc()--> #include <stdlib.h>

int asignar_memoria_dinamica_main(){
    int num_carac = 10;
    char * puntero;
    puntero = malloc(num_carac*sizeof(char)); //Con malloc() lo que hacemos es reservar memoria para los caracteres que vamos a ingresar (10 caracteres en el ejemplo)
    //malloc hará num_carac * 10
    if(NULL == puntero){
        printf("Error al asignar memoria"); //Si la var viene nula habrá error
    }else{
        printf("Se ha asignado memoria");
    }
    return 0;
}
//Fin ejemplo1
//Ejemplo 2
//Librería para poder trabajar con strings --> include <string.h> 
#define length 2 
int size; //Almacenará el tamaño de los caracteres que ingresemos

struct dogD {
    char nombre [20];
    char *puntero_nombre;
}dogsD[length];

int asignar_memoria_dinamica_y_librar_main(){

    for (int i= 0; i < length; i++){ 
        printf("Ingrese el nombre del perro:\n");
        // scanf("%s", &dogsD[i].nombre); //El user introduce el nombre. Si metemos espacios en blanco scanf cree que ya ha terminado.
        //gets(dogsD[i].nombre); //También sirve para pedir el nombre del usuario. ES INSEGURA porque no limita lo que introduce el usuario
        fgets(dogsD[i].nombre, 20, stdin); //fgets recibe 3 params: 1º el puntero o variable donde se va a almacenar la informacion,
        //2º el tamaño de nuestro array, o campo..., y 3º de dónde salen los datos (los introduce el usuario. Para eso es stdin (standard input, obtiene los valores del teclado, incluido espacio, intro))
        //Con fgets puedo meter espacios en blanco, que cuentan como un caracter, así como la tecla intro, que cuenta como otro
        size = strlen(dogsD[i].nombre);
        printf("%i\n", size);
        //Asignamos la memoria con el tamaño que queremos:char es porque metemos caracteres
        dogsD[i].puntero_nombre = malloc(size*sizeof(char));
            if(NULL == dogsD[i].puntero_nombre){
                printf("Error al asignar memoria\n");
            }else{
                //Asignamos la memoria
                //strcpy hace una copia: (destino, fuente)
                //El destino es la variable donde asignaremos los datos
                //La fuente donde hemos almacenado los datos
                strcpy(dogsD[i].puntero_nombre, dogsD[i].nombre);
                
            }
    }

    for (int i = 0; i < length; i++){
        printf("El nombre del perro es %s\n", dogsD[i].puntero_nombre); 
        //Liberamos memoria de la variable puntero. Accedemos a él mediante '->'
        free(dogsD->puntero_nombre);      
    }

    return 0;
}
//Fin ejemplo 2
//Fin asignación dinámica de memoria y liberar

//Listas enlazadas
//Colección de estructuras autoreferenciadas llamadas nodos.
//Con listas enlazadas pordemos referenciar y guardar datos en tiempo de ejecución.
//No es necesario definir cuántos espacios va a tener nuestra lista
//Estructuras autoreferenciadas: Contienen un miembro apuntador que apunta a una estructura del mismo tipo
//Un nodo es una estructura que se crea con memoria dinámica
//Typedef nos permite crear sinónimos para nuestras estructuras

typedef struct nodo {
    char *nombre;
    struct nodo *sig; //Creamos otra estructura como nodo
}Libro;

//Al tener typedef en mi estructura y agregar 'Libro' al final lo que hacemos es poder crear más variables de tipo 'nodo' 

/*typedef int entero;
//Ahora 'entero' lo puedo utilizar para declarar mis variables que van a ser de tipo entero.
entero edad;
entero portal;*/

//Esta función nos va a devolver un puntero de tipo Libro. Es el valor de vuelta de mi función.
//El puntero se lo pasamos como parámetro '*Lista'
Libro *listaLibro(Libro *Lista){ 
    Lista = NULL;
    return Lista;
}

//Va a recibir la lista donde se va a colocar y el nombre. Va a devolver un puntero de tipo Libro.
Libro *agregar_libro(Libro *Lista, char *nombre){
    
    Libro *nuevoLibro, *aux;

    //Ahora tenemos que reservar memoria para este nuevo libro
    nuevoLibro = (Libro*)malloc(sizeof(Libro)); //Aquí hacemos referencia a nuestra estructura typeof arriba en nodo
    nuevoLibro ->nombre = nombre;
    nuevoLibro->sig = NULL; //Por defecto decimos que el siguiente libro es null
    if(Lista == NULL){
        Lista = nuevoLibro;//Si la lista está vacía, mete el nuevo libro
    }else{
        //Agregar más elementos a la lista
        //Al agregar se sobreescribe la lista y podemos perder lo guardado
        //Necesitamos una variable auxiliar para guardar lo que ya tenemos
        aux = Lista;
        while(aux->sig != NULL){
            aux = aux->sig; //aux va guardando elementos hasta que el siguiente nodo sea null
        }
        //Cuando no haya más elementos, guardará el nuevo libro
        aux->sig = nuevoLibro;
    }
    return Lista;
}

int funciones_enlazadas_main(){

    Libro *Lista = listaLibro(Lista);
    Lista = agregar_libro(Lista, "El Quijote");
    Lista = agregar_libro(Lista, "El camino");

    while(Lista != NULL){//Que me muestre la lista de libros hasta que el libro siguiente sea null ->sig
        printf("%s\n",Lista->nombre);
        Lista = Lista->sig;
    }

    return 0;
}

//Fin listas enlazadas

