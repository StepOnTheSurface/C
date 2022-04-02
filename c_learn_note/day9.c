#include "stdio.h" 

// 1. 数组指针，eg: 需求，定义一个变量保存数组首地址,+1将跳过整个数组
void arrayPointerTest() {    
    int arr[5] = {10, 20, 30, 40, 50};
    // *p; 定义指针变量
    // int arr[5];
    // int *p[5]; 从上往下依次替换，但是[]优先级高于*所以要加(): int (*p)[5]
    // int (*p)[5]; 数组指针
    int (*p)[5]; // 数组指针，本质是一个指针变量，只是该变量保存的是数组的首地址,它的数据类型为：int [5]
    p = &arr; // 数组首地址

    printf("%ld \r\n", sizeof(p));
    printf("p     = %ld \r\n", p);
    printf("p + 1 = %ld \r\n", p+1); // +1将跳过5*4=20个字节，即跳过整个数组

    // 如何通过p来求取数组arr[3]即40的值
    // 1. p = &arr
    // 2. *p = *&arr
    // 3. *p = arr
    // 4. *p + 3 = arr + 3 // 地址
    // 5. *(*p + 3) = *(arr + 3) // *解引用取值
    // 结论：对数值指针取*得到数组元素地址；
    //      对数组首地址取*得到数组元素地址。
     
    printf("arr[3] = %ld \r\n", arr[3]);
    printf("%ld \r\n", *(*p + 3));
    // 转换过程 // *(*p + 3) == *(*(p + 0) + 3) == *(p[0] + 3) == p[0][3]
    printf("%ld \r\n", *(*(p + 0) + 3));
    printf("%ld \r\n", *(p[0] + 3));
    printf("%ld \r\n", p[0][3]);

} 

int main () {
    arrayPointerTest();
    return 1;
}

/*
test results:
$ ./day9.o 
8 
p     = 140732707670128 
p + 1 = 140732707670148 
arr[3] = 40 
40 
40 
40 
40 
*/