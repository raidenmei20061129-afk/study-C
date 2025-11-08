#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>//用于strlen函数
#include<windows.h> //用于Sleep和system（"cls"）函数
#include <stdlib.h>  // 用于exit函数
//do while循环
//结构do
//   循环语句；
//while（表达式）先循环再判断
//特点：循环体至少执行一次

//int main() {
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i<=10);
//	return 0;
//}

//break and contine
//int main() {
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;//省略continue后面的循环，输出结果为1 2 3 4 光标死循环
//			if (i == 7)
//				break;//跳出所有的循环
//			printf("%d ", i);
//			i++;
//		} while (i <= 10);
//
//	return 0;
//}


//练习1计算n的阶乘

//int main() {
//	int a;
//	int b;
//	int c=1;
//	scanf("%d", &a);
//	while (a > 0) {
//		b = a;
//		c = c * b;
//		a--;
//	}
//	printf("%d", c);
//
//
//	return 0;
//}


//练习2.计算!1+!2...!10

//int main() {
//	int a=10;
//	int b;
//	int c,i=0;
//	for (a; a > 0; a--) {
//		c = 1;
//		for (b = 1; b <= a; b++) {
//			c = c * b;
//		}
//				i= i+ c;
//						}
//	
//	printf("%d", i);
//return 0;
//
//	
//}



//int ADD(int a) {
//	int b = 1;
//	while (a > 0)
//	{
//		
//		b = b * a;
//		a--;
//	}
//	return b;
//}
//int main() 
//{
//	int A=10, B=9, C=8, D=7, E=6, F=5, G=4, H=3, I=2, J=1, SAM;
//	//int num[10];
//	A = ADD(A);
//	B= ADD(B);
//	C = ADD(C);
//	D = ADD(D);
//	E = ADD(E);
//	F = ADD(F);
//	G= ADD(G);
//	H= ADD(H);
//	I = ADD(I);
//	J = ADD(J);
//	SAM = A + B + C + D + E + F + G + H + I + J;
//	printf("%d" ,SAM);
//
//	return 0;
//}


//练习3，折半查找
//int main() {
//	int a;//要查找的数值
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int R, L;
//	int out;//输出的数值
//	int num;//平均值
//	int q = sizeof(arr) / sizeof(arr[0]);//数组大小
//	L = 0;
//	R = q+1 ;
//	scanf("%d",&a);
//	while (1)
//	{
//		num = (R + L) / 2;
//		if (num < a)
//			L = num;
//		else if (num > a)
//			R = num;
//		else if (num = a )
//		{
//			out = num;
//			printf("%d\n", out);
//			break;
//		}
//	}
//	return 0;
//}


//练习4，打印渐变字符
int main() {
	char arr1[] = { "welconme to world" };
	char arr2[] = { "#################" };
	int right;
	int left;
	left =0;
	right = strlen(arr1) - 1;//计算字符数组的长度用strlen sizeof计算会多计算一个\0 strlen要引用头文件string.h
	while (left <= right) 
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);//Sleep单位为毫秒，要引用头文件windows.h
		system("cls");//清空屏幕 cleen screem
	}
	printf("%s\n", arr2);


	return 0;
}

//练习5.模拟用户登录
int main() {
	char key[] = "RaidenMei061129";;
	char in[50];//输入
	int num;//输错次数
	num = 0;
	while (num < 3) {
		printf("请用户输入密码");
		scanf("%s", &in);
		if (strcmp(in, key) == 0)//strcmp比较字符串内容
		{
			printf("输入成功，正在登录，请稍后...");
			break;
		}
		else {
			num++;
			if (num == 1) {
				system("cls");
				printf("密码输入错误，您还剩2次机会\n");
				printf("请用户输入密码");
			}
			else if (num == 2) {
				system("cls");
				printf("密码输入错误，您还剩1次机会\n");
				printf("请用户输入密码");

			}
			else if (num == 3) {
				system("cls");
				printf("密码输入错误，今日以达到上限，正在退出程序");
				exit(0);
			}
		}

	}
		return 0;

}