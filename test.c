#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 

//      ʹ�õ��Լ���
//      �ϵ��ʹ�ü���

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

//   ʵ��һ�� �� 1!+2!+3!+����+n!

//int main()
//{
//	int i = 0;
//	int sum = 0;    //�ź�
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;     // �Ž׳�
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			//  �������ڣ�����ѭ��֮��ret��������֮ǰ��ֵ��
//			//  �� 2��ʱ���õ� ret=2�� �� 3��ʱ���ͱ���� 2*1*2*3
//			//  ������Ҫ��ѭ���ﶨ�� ret��ÿ���� n��ʱ��ret��Ҫ��һ��ʼ
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//		
//	//for (i = 1; i <= n; i++)
//	//{
//	//	ret *= i;        // ret=ret*i   ret��һ��ʼ��һֱ�˵�n
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
