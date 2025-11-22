#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
//函数的递归
//通常将一个大型复杂问题转化为相似的规模较小的问题，比如计算阶乘
//在函数中调用函数

////实例：打印一个数的各个位数
//int result(x) //反向打印
//{
//	int a=x;
//	if (x > 0)
//	{
//		printf("%d ", a % 10);
//		result(x / 10);
//	}
//	else
//		return 0;
//}
//
//int result1(y) //正向打印
//{
//	int a = y,b;
//	if (y > 0)
//	{
//		b = a % 10;
//		result1( y / 10);
//		printf("%d ", b);
//	}
//	else
//		return 0;
//}
//
//int main() 
//{
//	int a;
//	scanf("%d", &a);
//	result(a);
//	printf("\n");
//	//Sleep(5000);
//	result1(a);
//	return 0;
//}

//栈溢出(Stack overflow)
//void test(int n) 
//{
//	if (n < 100000)
//	{
//		test(n + 1);
//	}
//}
//
//int main() 
//{
//	test(1);
//	return 0;
//}

//栈区：函数的形参，局部变量
//堆区：动态内存分配的malloc/free calloc realloc
//静态区：全局变量，静态变量

////练习1.打印字符串长度函数，不能有临时变量（模拟strlen函数）
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);//递归最好不用++
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main() 
//{
//	char arr1[20] = "hello world" ;
//	printf("%d\n", my_strlen(arr1));
//	return 0;
//}

////练习2：求n的阶乘
//int result(int x) 
//{
//	if (x > 0)
//	{
//		return x * result(x - 1);
//	}
//	else
//		return 1;
//}
//
//int main() 
//{
//	int a;
//	scanf("%d",&a);
//	printf("%d", result(a));
//	return 0;
//
//}

//练习3：求第n个斐波那契数列
long long int result(int n) //可以解决问题，但是效率太低
{
	if (n == 1 || n == 2) 
	{
		return 1;
	}
	else 
	{
		return result(n - 1) + result(n - 2);
	}
}

long long result1(int n)//迭代更高效
{
	if (n == 1 || n == 2)
		return 1;
	long long a = 1, b = 1, c = 0;
	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main() 
{
	int a;
	scanf("%d", &a);
	//printf("%11d", result(a));
	printf("%11d", result1(a));
	return 0;
}

