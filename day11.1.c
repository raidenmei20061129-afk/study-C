#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fun = 50;//ȫ�ֱ��������������ж����Է���
static int fun_static = 100;//��̬ȫ�ֱ�����ֻ���ڱ��ļ��з��ʣ����ܱ������ļ�����
int abc(int a, int b) {
	return a + b;
}
static int cba(int c, int d) {

	return c - d;
}