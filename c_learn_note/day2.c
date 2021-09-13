// This is a learning note
#include <stdio.h>


// 定义指针的步骤
/*
    1. * 修饰指针变量名
    2. 保存什么类型变量的地址，就用该类型定义一个普通变量
    3. 从上往下整体替换
*/
void test() {
    int num = 10;
    int *p;     // 定义一个指针变量，p就是指针变量名，定义的时候*修饰p，表示p为指针变量
    p = &num;   // 建立p和num的关系，p保存num的地址， &num代表的是num起始地址，即字节首地址
   
    printf("&num = %p\r\n", &num);
    printf("p = %p\r\n", p);
}

int main(int argc, char * argv[]) {
    test();
    return 0;
}

/*
Test results:
$ ./day2.o 
&num = 0x7ffeeceab7fc
p = 0x7ffeeceab7fc
*/