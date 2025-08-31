#include <stdio.h>
#include <stdint.h>

int main () {
    printf("Hola Orga \n");

    char c = 100;
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


    printf("char(%lu): %d \n", sizeof(c),c);
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


    return 0;

}