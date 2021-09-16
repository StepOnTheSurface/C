#include <stdio.h>

// 1. 指针的变量的取值宽度【重要】
/*
    宽度：指针变量指向的类型决定。
*/
void testPointerVariableWide() {
    int num = 0x01020304;
    
    char * p1;
    short * p2;
    int * p3;

    p1 = &num;
    p2 = &num;
    p3 = &num;

    printf("*p1 = %#x \r\n", *p1); // 一个字节的宽度，*p1 = 0x04 
    printf("*p2 = %#x \r\n", *p2); // 两个字节的宽度，*p2 = 0x0304 
    printf("*p3 = %#x \r\n", *p3); // 四个字节的宽度，*p3 = 0x1020304
}

int main(int argc, char * arg[]) {
    testPointerVariableWide();
    return 0;
}

/*
test results:
$ ./day5.o            
*p1 = 0x4 
*p2 = 0x304 
*p3 = 0x1020304 
*/