#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ṹ��
//�ṹ�������c���Դ����µ����ͳ���
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
	//���ִ�ӡ��ʽ
	printf("1.%s %d %1.1f\n", s1.name, s1.age, s1.score);//�ṹ�����.��Ա��
	printf("2.%s %d %1.1f\n", (*pa).name, (*pa).age, (*pa).score);//ָ����������ú�.��Ա��
	printf("3.%s %d %1.1f\n", pa->name, pa->age, pa->score);//ָ�����->��Ա��
	return 0;
}