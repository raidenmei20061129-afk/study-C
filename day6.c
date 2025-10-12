#define _CART_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//字符号与转义字符
//字符好就是一串字符--用"双引号"引起的一串字符
//注：字符串的结束标志是一个\0的转义字符
//int main() {
//	//数组--数组是一组相同类型的元素的集合
//	char arr[] = "abc";//双引号表示一串字符
//	char arr2[] = { 'a','b','c' ,'\0' };//单引号表示一个字符,需要手动添加结束标志\0
//	//求字符串的长度--不包括
//	int len=strlen(arr2);
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
//	printf("%d\n", len);
//
//	return 0;
//}

////转义字符:转变了字符原本的含义
//int main() {
//	printf("%c\n", '\'');//输出单引号
//	printf("%s\n", "'");//输出双引号
//	printf("\a\a\a\a\a\a");//输出警告音
//
//
//
//	return 0;
//}

//int main() {
//	//\ddd型，ddd是1到3位的八进制数，表示一个字符在ASCII码表中的值，如\130的输出是X
//	//\xdd型，dd是1到2位的十六进制数，如\x30的输出是0  
//	printf("%c\n", '\130');//8进制的130是十进制的88，输出X   %c输出字符
//	//88在ASCII码表中是X
//	printf("%c\n", '\101');
//	//A-65
//	//B-66
//	//a-97
//	//b-98
//
//	printf("%c\n", '\x30');//十六进制的30是十进制的48，输出0
//	//48在ASCII码表中是0
//
//	return 0;
//}