#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//常见关键字

//typedef类型重定义
typedef unsigned int uint;//给unsigned int类型起别名为UINT
int main() {
	unsigned int b = 10;
	uint a = 10;//使用typedef起的别名来定义变量
	return 0;
}

//static静态变量
//1.static修饰局部变量，局部静态变量的生命周期是整个程序运行期间，作用域仍然是局部
//2.static修饰全局变量，改变了全局变量的作用域，使得该全局变量只能在本文件内使用，不能被其他文件访问
//3.static修饰函数，改变了函数的作用域，使得该函数只能在本源文件内使用，不能被其他源文件访问

//局部静态变量
void jack(){
	static  //局部静态变量,生命周期是整个程序运行期间a出循环后不销毁，依旧保留上次的值，本质是改变了变量的存储位置，从栈区变为静态区 
		int a = 1;
	a += 2;
	printf("%d ", a);
	return a;
}

int main() {
	int i = 0;
	while (i < 10) {
		jack();
		i++;
	
	}
	return 0;
}


//全局静态变量；函数静态变量
//extern声明外部符号的变量
extern int fun;//声明外部变量fun------11.1.c中定义的全局变量
extern int fun_static;
extern int abc(int a, int b);//声明外部函数abc------11.1.c中定义的函数
extern int cba(int c, int d);//声明外部函数cba------11.1.c中定义的静态函数，报错，静态函数只能在本文件中访问
int main() {
	printf("%d\n", fun);//访问11.1.c中定义的全局变量fun
	//printf("%d\n", fun_static);//访问11.1.c中定义的静态全局变量fun_static，报错，静态全局变量只能在本文件中访问
	int sam = abc(10, 20);//调用11.1.c中定义的函数abc
	//int SAM = bcd(10, 20);//调用11.1.c中定义的静态函数cba，报错，静态函数只能在本文件中访问
		return 0;
}


