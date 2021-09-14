// This is a learning note
#include <stdio.h>


// 定义指针的步骤
/*
    1. * 修饰指针变量名
    2. 保存什么类型变量的地址，就用该类型定义一个普通变量
    3. 从上往下整体替换
*/

// 指针变量的使用，通过p对所保存的地址空间进行读写操作
void test() {
    int num = 10;
    int *p;     // 定义一个指针变量，p就是指针变量名，定义的时候*修饰p，表示p为指针变量
    p = &num;   // 建立p和num的关系，p保存num的地址， &num代表的是num起始地址，即字节首地址
   
    printf("&num = %p\r\n", &num);
    printf("p = %p\r\n", p);

    printf("*p = %d\r\n", *p);
    printf("num = %d\r\n", num);

    *p = 100; // *p等价于给num取值为100，num = 100;
    printf("*p = %d\r\n", *p);
    printf("num = %d\r\n", num);
}

int main(int argc, char * argv[]) {
    test();
    return 0;
}

/*
$ ./day3.o            
&num = 0x7ffee6f867fc
p = 0x7ffee6f867fc
*p = 10
num = 10
*p = 100
num = 100
*/