#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//选择语句switch语句,适用于多分支选择
//switch(整型表达式){
//case 常量1:
//	语句体1;
//	break;
//case 常量2:
//	语句体2;
//	break;
//int main() {
//	int day;
//	scanf("%d", &day);
//	switch (day) 
//	{
//	case 1://case后面只能是常量，不能是变量，不能是范围，case类似入口标签
//		printf("Monday\n");
//		break;//break跳出switch语句
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("sanday\n");
//		break;
//		//default:default可有可无，相当于else
//	default:
//		printf("输入错误\n");
//	break;
//	//deaylt和case没有顺序要求
//	}
//
//		return 0;
//}