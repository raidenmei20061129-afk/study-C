#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//循环语句while（见day7）   do while   for

//int main() {
//	int i = 0;
//	//在while循环中break用于永久的终止循环,continue用于跳出本次循环，继续下次循环
//	while (i <= 100)
//	{
//		//i++;
//		printf("%d ", i);
//		if (i >= 10)
//		{
//			continue;//跳出本次循环，继续下次循环
//		}
//
//		if (i >= 50) {
//			break;//跳出整个循环
//		}
//		
//		i++;
//	}
//
//	return 0;
//}

//练习1
//int main() {
//	int ch;
//	ch = getchar();
//	while ((ch = getchar())!= EOF//eof通常为-1
//		) {
//		putchar(ch);
//	}
//}

//练习2
int main() {
	char num[20] = { 0 };
	char i,a;
	printf("请输入密码:)");
	//数组本身就是地址，scanf中不需要&
	scanf("%s", num);
	while ((i = getchar()) != '\n');
	{
		getchar();
}
	//清理缓冲区
	printf("请确认密码（Y/N） :) ");
	scanf("%c", &a);
	if (a == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
}

