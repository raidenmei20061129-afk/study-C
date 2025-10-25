#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fun = 50;//全局变量，整个工程中都可以访问
static int fun_static = 100;//静态全局变量，只能在本文件中访问，不能被其他文件访问
int abc(int a, int b) {
	return a + b;
}
static int cba(int c, int d) {

	return c - d;
}