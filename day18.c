#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//循环语句for
//语法for(表达式一初始化;表达式二判断;表达式三调整)
//int main() 
//{
//	int i;
//	for (i = 1; i <= 10;i++)
//	{
//		printf("%d ",i);
//
//	}
//	return 0;
//}


//循环体内改变循环变量
//int main() {
//		int i;
//		for (i = 1; i <= 10;i++)
//		{
//			printf("%d ",i);
//			//i = 5;//死循环，不可跳出循环
//		//建议不要在for循环体内修改循环变量
//		}
//
//
//	return 0;
//}


////for循环的变种
//int main() {
//	//for循环中的任意部分都可以省略
//	//判断部分省略则结果恒为真，不建议省略
//	for(;;)
//	{
//		printf("hehe\n");
//	
//	}
//
//	return 0;
//}
//
////省略与不省略
//int main() {
//	int i = 0, j = 0;
//	for (; i <= 10; i++) {
//	
//		for (; j <= 3; j++) {
//			printf("hehe\n");
//		}
//	
//	}
	//打印3次hehe


	//for (i=0; i <= 10; i++) {

	//	for (j=0; j <= 3; j++) {
	//		printf("hehe\n");
	//	}

	//}
	////打印3*3次hehe

//	return 0;
//}
//
//
////双变量
//int main() {
//	int a, b;
//	for (a = 0, b = 0; a < 2 && b < 3; a++, b++)
//	{
//		printf("hello world");
//	}
//
//	return 0;
//}





