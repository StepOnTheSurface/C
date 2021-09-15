#include <stdio.h>

// 1. 指针变量的类型【重要】
/*
    只将指针变量名拖黑，剩下啥类型，指针变量自身就是啥类型;
    eg: int *p; 将p拖黑，剩下int *就是p的自身类型
*/

// 2. 指针变量所指向的类型【重要】
/*
    将指针变量名和离它最近的一个*一起拖黑，剩下啥类型，就指向啥类型。
    int *p ---> int 
    int **p ---> int * 
    int ****p ---> int ** 
    int *****p ---> int *** 
    int *(n个*)p ---> int n个*
    
    1. 指向xx类型 == 保存xx类型变量的地址
    eg: int num = 10;
        int * p;
        p = &num;// p指向num == p保存了num的地址; p指向int类型，即保存int类型的地址
*/
int main(int argc, char * argv[]) {
    int num = 10;
    int *p;
    p = &num;
    printf("*p =  %d\r\n", *p);
    printf("num =  %d\r\n", num);
    printf("p =  %p\r\n", p);
    printf("&num = %p\r\n", &num);
    return 0;
}

/*

$ ./day4.o            
*p =  10
num =  10
p =  0x7ffee76f380c
&num = 0x7ffee76f380c
*/
