#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
//函数

////strcpy函数,复制函数
//int main() 
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello world" };
//	strcpy(arr1, arr2);//将arr2中的内容复制arr1的内容
//	printf("%s", arr1);
//	return 0;
//}

////memset函数，替换函数
//int main() 
//{
//	char arr1[] = { "I am a student from JIT" };
//	printf("%s\n", arr1);
//	memset(arr1, 'X', 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//int get_max(int x, int y)//括号内为接收的值，int为函数返回类型
//{
//	int z = 0;
//	if (x > y)
//	    z = x;
//	else
//		z = y;
//	return z;//返回z----返回最大值，输出的值
//}
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = get_max(a, b);//函数的调用
//	printf("%d", c);
//	return 0;
//}


////交换数字
// void change1(int x, int y) //void无返回值  传值调用
// //形参只是实参的一种拷贝，传值不会影响实参
// {
//	int z;
//	z = x;
//	x = y;
//	y = z;
//
//}
//void change(int* px, int* py) //传址调用
////传址可以影响实参
//{
//	int z;
//	z = *px;
//	*px = *py;
//	*py = z;
//
//}
//int main() 
//{
//	int a=10, b=20;
//	//scanf("%d %d", &a, &b);
//	printf("之前是:%d %d\n",a,b);
//	change(&a, &b);//改变变量数值就要使用指针
//	printf("之后是:%d %d\n",a,b);
//
//
//	return 0;
//}


////练习一：判断100到200之间的素数
////一个函数不写返回类型，默认int类型
//int think(int* x) //判断是否为质素
//{
//	int z;
//	for (z = 2; z <= sqrt(*x); z++)
//	{
//		if (*x % z == 0)
//		{//printf("%d",x);
//			return -1;//不是素数就返回值-1
//		}
//	}
//	return *x;//是素数就返回该数
//}
//
//int main() 
//{
//	int i;
//	int all=0;
//	for (i = 100; i <= 200; i++) 
//	{
//		int result=think(&i);
//		if (result != -1)
//		{
//			all++;
//			printf("%d ", result);
//		}
//	}
//	printf("\n%d\n", all);
//	return 0;
//}

//练习二：整型有序数组二分查找
int find(int a[],int num,int x)
{   
	int left=0;
	int right = x - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] > num)
			right = mid - 1;
		else if (a[mid] < num)
			left = mid + 1;
		else
		{
			return mid;
		}
	}
}
int main() 
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = sizeof(arr) / sizeof(arr[0]);//求元素个数
	int num=0;
	scanf("%d", &num);
	if (num > 10)
	{
		printf("输入错误");
	}
	else
	{
		int b = find(arr, num, a);
		printf("%d", arr[b]);
	}
	return 0;
}