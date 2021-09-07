// This is a learning note
#include <stdio.h>

void test() {
    printf("sizeof(char *):         %d\r\n", sizeof(char *));
    printf("sizeof(short *):        %d\r\n", sizeof(short *));
    printf("sizeof(int *):          %d\r\n", sizeof(int *));
    printf("sizeof(long *):         %d\r\n", sizeof(long *));
    printf("sizeof(float *):        %d\r\n", sizeof(float *));
    printf("sizeof(double *):       %d\r\n", sizeof(double *));
    printf("sizeof(double *******): %d\r\n", sizeof(double *******));
}

int main(int argc, char * argv[]) {
    test();
    return 0;
}

/*
Test results:
$ ./day1.o 
sizeof(char *):         8
sizeof(short *):        8
sizeof(int *):          8
sizeof(long *):         8
sizeof(float *):        8
sizeof(double *):       8
sizeof(double *******): 8
*/
