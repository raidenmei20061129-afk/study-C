#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数的集成
//1.创建头文件.h文件，并且声名对应函数
//2.创建对应函数文件比如文件add.h
//3.用格式  #include"函数名"来调用其他文件的函数

//函数的声名一般在头文件中
//静态库文件（相当于加密）：点击文件名称，选择属性，配置类型改为静态文件，然后f7编译，在对应文件的debug文件夹下就会有相应的静态文件
//引用静态文件要用相应的lib文件和.h文件，导入静态库#pragm comment(lib,(文件名.lib))
#include"add.h"
int main() 
{
	int a, b, c;
	a = b = 10;
	c = Add(a, b);
	printf("%d", c);
	return 0;
}