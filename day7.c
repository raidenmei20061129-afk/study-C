#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
////ѡ��ṹ
//int main() {
//	int input;
//	printf("��Ҫ�ú�ѧϰC������(1/0)\n");
//	scanf("%d", &input);
//	if (input = 1)
//	{
//		printf("����и��ý���ģ�����");
//	}
//	else
//	{
//		{
//			printf("���������");
//		}
//
//	return 0;
//}


//ѭ�����
int main() {
	int line = 0;
	while (line <30000)
	{
		printf("��ҪŬ��д���룬��ȡ���ճ�Ϊ����Ա��\n");
		printf("��ǰ�ۼƴ�����:%d��\n", line);
			line++;
		}
	if (line == 30000)
	{
		printf("�������ﵽ3���У���ϲ�㣬��Ϊ��һ���ϸ�ĳ���Ա��\n");
	}

	return 0;
}