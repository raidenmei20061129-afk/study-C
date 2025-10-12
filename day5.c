#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define abc 1000//可以在大括号外定义也可以在大括号内定义
//常量
//int main() {
	//// 1.字面常量
	//3.14;//浮点型常量
	//10;//整型常量
	//'a';//字符型常量
	//"abcd";//字符串常量
	
	////2.const修饰的常量
	//const int a = 10;//a就是一个常变量--具有常属性（不能改变的变量）但本质上还是变量
	////a = 20;//错误
	//int n = 10;
	//int arr[n] = {0};//n不是常量不可做数组下标
	//const int m = 20;
	//int arr2[m] = { 0 };//m是常变量不可以做数组下标
	//printf("%d\n", a);

	////3.#define定义的标识符常量
	// #define def 2000
	//int a = abc;
	//int b = def;
	//printf("%d\n%d",a,b);
     // return 0;
//}


//enum SEX {
//	//这种枚举类型的变量未来可能取值
//	male=3,//赋初值
//female,
//secret
//};
//int main() {
//	//4.enum枚举常量；可以一一列举的常量
//	enum SEX s = male;
//	printf("%d\n",s);
//	printf("%d\n",female);
//	printf("%d\n",secret);
//
//	return 0;
//}