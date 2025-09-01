#include <stdio.h>
#include <stdint.h>

int main () {
    printf("Hola Orga \n");

    char ch = 100;
    short s = -8712;
    int i = 123456;
    long l = 1234567890;

    unsigned char uc = 001;
    unsigned short us = 1500;
    unsigned u = 10034;
    unsigned long ul = 4000001;

    int8_t int8 = 10;
    int16_t int16 = 20000;
    int32_t int32 = -3210232;
    int64_t int64 = -123123125;
    uint8_t uint8 = 89;
    uint16_t uint16 = 20000;
    uint32_t uint32 = 3210232;
    uint64_t uint64 = 123123125;

    float e5_f = 0.1;
    double e5_d = 0.1;

    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
    102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
    103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
    111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};

    printf("char(%lu): %d \n", sizeof(ch),ch);
    printf("short(%lu): %d \n", sizeof(s),s);
    printf("int(%lu): %d \n", sizeof(i),i);
    printf("long(%lu): %ld \n", sizeof(l),l);

    printf("unsigned char(%lu): %d \n", sizeof(uc), uc);
    printf("unsigned short(%lu): %d \n", sizeof(us), us);
    printf("unsigned(%lu): %d \n", sizeof(u), u);
    printf("unsigned long(%lu): %ld \n", sizeof(ul), ul);

    //Ejercicio 4
    printf("int8_t(%lu): %d \n", sizeof(int8),int8);
    printf("int16_7(%lu): %d \n", sizeof(int16),int16);
    printf("int32_t(%lu): %d \n", sizeof(int32),int32);
    printf("int64_t(%lu): %ld \n", sizeof(int64),int64);

    printf("uint8_t(%lu): %d \n", sizeof(uint8), uint8);
    printf("uint16_t(%lu): %d \n", sizeof(uint16), uint16);
    printf("uint32_t(%lu): %d \n", sizeof(uint32), uint32);
    printf("uint64_t(%lu): %ld \n", sizeof(uint64), uint64);

    //Ejercicio 5
    printf("El valor 0.1 impreso como float: %f \n", e5_f);
    printf("El valor 0.1 impreso como double: %lf \n", e5_d);
    printf("Casteo de float a int: %d \n", (int) e5_f);
    printf("Casteo de float a double: %d \n", (int) e5_d);

    //lo que pasa es que ambos se "truncan" a 0 al hacerse el casteo. El compilador no da error porque entiende que es un casteo "explícito" y que el programador sabe lo que hace.
    //Distinto sería si el casteo hubiera sido implícito, porque en ese caso es el compilador el que lo hace.

    //Ejercicio 6
    size_t length = sizeof(mensaje_secreto) / sizeof(int);
    char decoded[length];
    //printf("El mensaje secreto mide: %lu" ,sizeof(mensaje_secreto));
    for (unsigned int i = 0; i < length; i++) {
        decoded[i] = (char) (mensaje_secreto[i]); // casting de int a char
    }

    for (unsigned int i = 0; i < length; i++) {
        printf("%c", decoded[i]);
    }
    //la variable length es de tipo size_t porque es el tipo que retorna la funcion sizeof (entre otras). Además, se calcula de esa manera porque sizeof
    //devuelve la cantidad de bytes que ocupa dicha variable o estructura de datos en memoria. Sin importar el "tamaño" que tenga. De esta manera, si sabemos
    //lo que ocupa en total en memoria, y lo dividimos por la cantidad de bytes que guarda para cada posición, obtendremos la cantidad de posiciones o tamaño del array.

    //size_t is the unsigned integer type of the result of sizeof (and other instructions) depending on the "Data Model"
    /*Data models
    The choices made by each implementation about the sizes of the fundamental types are collectively known as data model. Four data models found wide acceptance:

        *32 bit systems:

            LP32 or 2/4/4 (int is 16-bit, long and pointer are 32-bit) 

                -Win16 API 

            ILP32 or 4/4/4 (int, long, and pointer are 32-bit); 

                -Win32 API
                -Unix and Unix-like systems (Linux, Mac OS X) 

        *64 bit systems:

            LLP64 or 4/4/8 (int and long are 32-bit, pointer is 64-bit) 

                -Win64 API 

            LP64 or 4/8/8 (int is 32-bit, long and pointer are 64-bit) 

                -Unix and Unix-like systems (Linux, Mac OS X) 
    */

    //Ejercicio 7
    int a = 5, b = 3, c = 2, d = 1;
    printf("\n\n");
    printf("Operaciones Aritméticas: \n");
    printf("a+b*c/d = %d\n", a+b*c/d);
    printf("a%%b (resto) = %d\n", a%b);
    printf("a+=b = %d\n", a+=b); //El printf recibe a = a+b. Luego, imprime el valor final de a que va a ser el resultado de sumar 5 y 3.
    printf("a-=b = %d\n", a-=b);
    printf("a*=b = %d\n", a*=b);
    printf("a/=b = %d\n", a/=b);
    printf("a%%=b = %d\n", a%=b);
    printf("Operaciones Logicas: \n");
    printf("a: %x \nb:%x\n", a,b);
    printf("a==b = %d\n", a==b);
    printf("a!=b = %d\n", a!=b);
    printf("a&&b = %d\n", a&&b);
    printf("a||b = %d\n", a||b);
    printf("Operaciones Binarias: \n");
    printf("a|b = %x\n", a|b);
    printf("a&b = %x\n", a&b);
    printf("a<<1 = %x\n", a<<1);
    printf("a>>1 = %x\n", a>>1);


    return 0;

}