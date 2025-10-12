#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
////选择结构
//int main() {
//	int input;
//	printf("你要好好学习C语言吗？(1/0)\n");
//	scanf("%d", &input);
//	if (input = 1)
//	{
//		printf("你会有个好结果的，加油");
//	}
//	else
//	{
//		{
//			printf("还不快改正");
//		}
//
//	return 0;
//}


//循环语句
int main() {
	int line = 0;
	while (line <30000)
	{
		printf("我要努力写代码，争取早日成为程序员！\n");
		printf("当前累计代码量:%d行\n", line);
			line++;
		}
	if (line == 30000)
	{
		printf("代码量达到3万行，恭喜你，成为了一名合格的程序员！\n");
	}

	return 0;
}