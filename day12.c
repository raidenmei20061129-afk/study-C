#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������궨��
//defineԤ����ָ��
//1.define������ų���
#define PI 3.14159
int main()
{
	//ʹ�÷��ų���
	float r = 2.0;
	float area = PI * r * r;
	printf("�뾶Ϊ%.2f��Բ�������%.2f\n", r, area);
	return 0;
}


//2.define�����
#define add(X,Y) (X+Y)
int main() {
	printf("%d\n", add(2, 3));//���5��Ч��2+3
	printf("%d\n", 4 * add(2, 3));//���14��Ч��4*2+3


	return 0;
}