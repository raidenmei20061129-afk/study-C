#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//结构体
//结构体可以让c语言创建新的类型出来
struct stu {
	char name[20];
	int age;
	float score;
};
int main() {
	struct stu s1 = {
	"RaidenMei",18,100.0
	};
	struct stu * pa = &s1;
	//三种打印方式
	printf("1.%s %d %1.1f\n", s1.name, s1.age, s1.score);//结构体变量.成员名
	printf("2.%s %d %1.1f\n", (*pa).name, (*pa).age, (*pa).score);//指针变量解引用后.成员名
	printf("3.%s %d %1.1f\n", pa->name, pa->age, pa->score);//指针变量->成员名
	return 0;
}