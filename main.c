#define _CRT_SECURE_NO_WARNINGS

////������������������һ���Ӻ������������������Լ������С�������������������
////����һ���Ӻ����ж������Լ������ż�ԣ���������������
////���������������Ӻ������ڲ�ͬ��Ŀ¼�£�����ʱ��-Iѡ������Ӻ�����·��
//#include <stdio.h>
//#include <math.h>
//#include <assert.h>
//int max_jiou(int gys)
//{
//	if (gys / 2 == 0)
//	{
//		return 0;
//	}
//	return 1;
//}
//void max_min(int a, int b, int* gys, int* gbs)
//{
//	int pa = a;
//	int pb = b;
//	int max = 0;
//	assert(pa && pb);
//	if (pa < pb)
//	{
//		int temp = pa;
//		pa = pb;
//		pb = temp;
//	}
//	while (max = pa % pb)
//	{
//		pa = pb;
//		pb = max;
//	}
//	*gys = pb;
//	*gbs = a * b / (*gys);//���������ĳ˻�=���ǵ����Լ������С�������ĳ˻�
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("please input two numbers:");
//	scanf("%d%d", &a, &b);
//
//	//�������Լ��/��С����������
//	int gys = 0;
//	int gbs = 0;
//	max_min(a, b, &gys, &gbs);
//	printf("max_gys: %d\n",gys);
//	printf("min_gbs: %d\n",gbs);
//
//	//������ż�Ժ���
//	int ret = max_jiou(gys);
//	if (ret == 0)
//	{
//		printf("%d is a oushu\n",gys);
//	}
//	else
//	{
//		printf("%d is a jishu\n",gys);
//	}
//	return 0;
//}

////�Ӽ�������һ�������жϸ����Ƿ�Ϊ������Ҫ���жϹ������Ӻ�����ɣ����������е��øú�������ʾ���
////�����������-E,-C,-S,-c,-o��ѡ�����i��s��o���ļ������ռ����÷�
//#include<stdio.h>
//#include<math.h>
//int is_prime(int input)
//{
//	int i = 0;
//	for ( i = 2; i <= sqrt(input); i++)
//	{
//		if (input % i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int input = 0;
//	printf("please input a num:");
//	scanf("%d", &input);
//	int ret = is_prime(input);
//	if (ret == 0)
//	{
//		printf("%d is not a prime\n",input);
//	}
//	else
//	{
//		printf("%d is a prime\n",input);
//	}
//	return 0;
//}