#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//指针（初见）
// 指针就是地址
//一个内存单元是一个字节byte，一个字节8位bit，内存单元有地址
//指针大小全都是4个字节（32位系统）或者8个字节（64位系统），指针要多大的空间，取决于地址储存要多少空间
int main() {
	int a = 10;
	int* pa;//*说明pa是一个指针变量，指针变量存放的是地址 int说明pa指向的是一个int类型的数据
	pa = &a;//&取地址运算符，取变量a的地址,这就是指针变量
	*pa = 20;//*解引用操作  *pa就是通过pa里的地址，找到a，然后把20赋值给a
	printf("%d\n",a);
	printf("%p\n", pa);
	//取地址只会取变量的第一个字节的地址
	printf("%d", sizeof(int*));
	return 0;
}