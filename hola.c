#include <stdio.h>

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

    printf("char(%lu): %d \n", sizeof(c),c);
    printf("short(%lu): %d \n", sizeof(s),s);
    printf("int(%lu): %d \n", sizeof(i),i);
    printf("long(%lu): %ld \n", sizeof(l),l);

    printf("unsigned char(%lu): %d \n", sizeof(uc), uc);
    printf("unsigned short(%lu): %d \n", sizeof(us), us);
    printf("unsigned(%lu): %d \n", sizeof(u), u);
    printf("unsigned long(%lu): %ld \n", sizeof(ul), ul);


    return 0;

}