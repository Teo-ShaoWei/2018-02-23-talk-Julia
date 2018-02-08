#include <stdio.h>

void hello(const char * name){
    printf("Hello, %s!\n", name);
}

// Make shared library:-
// gcc -c -fPIC hello.c
// gcc -shared -o libhello.so hello.o