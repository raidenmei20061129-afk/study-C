#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����ؼ���

//typedef�����ض���
typedef unsigned int uint;//��unsigned int���������ΪUINT
int main() {
	unsigned int b = 10;
	uint a = 10;//ʹ��typedef��ı������������
	return 0;
}

//static��̬����
//1.static���ξֲ��������ֲ���̬�����������������������������ڼ䣬��������Ȼ�Ǿֲ�
//2.static����ȫ�ֱ������ı���ȫ�ֱ�����������ʹ�ø�ȫ�ֱ���ֻ���ڱ��ļ���ʹ�ã����ܱ������ļ�����
//3.static���κ������ı��˺�����������ʹ�øú���ֻ���ڱ�Դ�ļ���ʹ�ã����ܱ�����Դ�ļ�����

//�ֲ���̬����
void jack(){
	static  //�ֲ���̬����,�����������������������ڼ�a��ѭ�������٣����ɱ����ϴε�ֵ�������Ǹı��˱����Ĵ洢λ�ã���ջ����Ϊ��̬�� 
		int a = 1;
	a += 2;
	printf("%d ", a);
	return a;
}

int main() {
	int i = 0;
	while (i < 10) {
		jack();
		i++;
	
	}
	return 0;
}


//ȫ�־�̬������������̬����
//extern�����ⲿ���ŵı���
extern int fun;//�����ⲿ����fun------11.1.c�ж����ȫ�ֱ���
extern int fun_static;
extern int abc(int a, int b);//�����ⲿ����abc------11.1.c�ж���ĺ���
extern int cba(int c, int d);//�����ⲿ����cba------11.1.c�ж���ľ�̬������������̬����ֻ���ڱ��ļ��з���
int main() {
	printf("%d\n", fun);//����11.1.c�ж����ȫ�ֱ���fun
	//printf("%d\n", fun_static);//����11.1.c�ж���ľ�̬ȫ�ֱ���fun_static��������̬ȫ�ֱ���ֻ���ڱ��ļ��з���
	int sam = abc(10, 20);//����11.1.c�ж���ĺ���abc
	//int SAM = bcd(10, 20);//����11.1.c�ж���ľ�̬����cba��������̬����ֻ���ڱ��ļ��з���
		return 0;
}


