#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//常量与宏定义
//define预处理指令
//1.define定义符号常量
#define PI 3.14159
int main()
{
	//使用符号常量
	float r = 2.0;
	float area = PI * r * r;
	printf("半径为%.2f的圆的面积是%.2f\n", r, area);
	return 0;
}


//2.define定义宏
#define add(X,Y) (X+Y)
int main() {
	printf("%d\n", add(2, 3));//输出5等效于2+3
	printf("%d\n", 4 * add(2, 3));//输出14等效于4*2+3


	return 0;
}