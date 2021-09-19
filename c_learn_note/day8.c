#include <stdio.h>

// 1. 通过数组元素的指针变量遍历数组
void testArrayPointerVariabl() {
    int num = 0x01020304; // num的类型是int
    
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;

    int *p = &arr[0]; // p保存了第0个元素的地址（首元素地址）
    printf("*p = %d\n", *p);

    p++; // p = p + 1;
    printf("*p = %d\n", *p);

    p = &arr[0];
    for (i = 0; i < n; i++) {
        // printf("%d ", arr[i]);
        printf("%d ", *(p+i)); // p+i代表的是第i个元素的地址，*(p+i)代表的是第i个元素的值
    }
}

int main(int argc, char * arg[]) {
    testArrayPointerVariabl();
    return 0;
}

/*
test results:
$ ./day8.o            
*p = 10
*p = 20
10 20 30 40 50    
*/