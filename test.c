#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 

//      使用调试技巧
//      断点的使用技巧

//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

//   实例一： 求 1!+2!+3!+……+n!

//int main()
//{
//	int i = 0;
//	int sum = 0;    //放和
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;     // 放阶乘
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			//  问题在于，进入循环之后，ret保存了它之前的值，
//			//  求 2！时，得到 ret=2， 求 3！时，就变成了 2*1*2*3
//			//  改正，要在循环里定义 ret，每次求 n！时，ret都要从一开始
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//		
//	//for (i = 1; i <= n; i++)
//	//{
//	//	ret *= i;        // ret=ret*i   ret从一开始，一直乘到n
//	//	sum += ret;
//	//}
//	//printf("%d\n", sum);
//}



int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}

	return 0;
}
