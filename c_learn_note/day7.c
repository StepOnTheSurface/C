#include <stdio.h>

// 1. &取地址符和*指针解引用符的区别
/*
    // 总结：如果&和*同时存在，可以互相抵消（从右--->左）
    // 论证：*p = num; ---> *p=*&num==num  
*/
void testPointerVariableWide() {
    int num = 0x01020304; // num的类型是int
    
    char * p1;
    short * p2;
    int * p3;

    p1 = &num; // &num的类型是char *类型
    p2 = &num; // &num的类型是short *类型
    p3 = &num; // &num的类型是int *类型
    // 如果对一个变量取地址，整个表达式的类型就是变量的类型加*; eg: &num类型就是 int *类型
    // 如果对指针变量取*整个表达式的类型是指针变量的类型减*; eg: *p1类型就是char
    // 总结：如果&和*同时存在，可以互相抵消（从右--->左）
    // 论证：*p = num; ---> *p=*&num==num

    // &*&*&num == &num

    printf("p3 = %p \r\n", p3); // p3的地址
    printf("&*&**&p3 = %p \r\n", &*&**&p3); // 等价于p3地址

    printf("&num = %p \r\n", &num); // num的地址
    printf("&*&*&num = %p \r\n", &*&*&num); // 等价于&num的地址
    
}

int main(int argc, char * arg[]) {
    testPointerVariableWide();
    return 0;
}

/*
test results:
$ ./day7.o            
p3 = 0x7ffee650b80c 
&*&**&p3 = 0x7ffee650b80c 
&num = 0x7ffee650b80c 
&*&*&num = 0x7ffee650b80c 
*/