#include <stdio.h>

// 1. 指针的变量的跨度【重要】
/*
    跨度：指针变量指向的类型长度决定。
*/
void testPointerVariableWide() {
    int num = 0x01020304;
    
    char * p1;
    short * p2;
    int * p3;

    p1 = &num;
    p2 = &num;
    p3 = &num;

    printf("p1 = %p \r\n", p1); // 一个字节宽度的起始位置（地址）
    printf("p1+1 = %p \r\n", p1+1); // +1则表示每次最小跨度是一个字节的宽度
    printf("----------------------\r\n");

    printf("p2 = %p \r\n", p2); // 两个字节宽度的起始位置（地址）
    printf("p2+1 = %p \r\n", p2+1); // +1则表示每次最小跨度是两个字节的宽度
    printf("----------------------\r\n");

    printf("p3 = %p \r\n", p3); // 四个字节宽度的起始位置（地址）
    printf("p3+1 = %p \r\n", p3+1); // +1则表示每次最小跨度是四个字节的宽度
    printf("----------------------\r\n");
}

int main(int argc, char * arg[]) {
    testPointerVariableWide();
    return 0;
}

/*
test results:
$ ./day6.o         
p1 = 0x7ffeec71d80c 
p1+1 = 0x7ffeec71d80d 
----------------------
p2 = 0x7ffeec71d80c 
p2+1 = 0x7ffeec71d80e 
----------------------
p3 = 0x7ffeec71d80c 
p3+1 = 0x7ffeec71d810 
----------------------
*/