#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = { "welcome" };//�����С���
//	char arr2[] = { "#######" };
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);//����1��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return  0;
//}
//
////strcmp--�����Ƚ��ַ�����������==
////strcmp����������"123456")==0
////�������0˵��a>b��С��0˵��a<b������0˵��a����b

//
//void menu()
//{
//	printf("1.��ʼ��Ϸ\n");
//	printf("0.�˳���Ϸ\n");
//}
//void game()
//{
//	//�����������
//	//rand��������0-32767֮�������	
//	//ʱ���
//	int ret = rand() % 100 +1;
//	printf("%d\n", ret);
//	int b = 0;
//	while(1)
//	{
//		scanf("%d", &b);
//		if (b > ret)
//		{
//			printf("big\n");
//		}
//		else if (b < ret)
//		{
//			printf("small\n");
//		}
//		else
//		{
//			printf("success\n");
//			break;
//		}
//	} 
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//ʱ�������ͷ������һ�����ɣ�
//	int a = 0;
//	do
//	{
//		menu();
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1: 
//		    game();
//			break;
//		case 0: 
//			break;
//		default:
//			break;
//		}
//	} while (a);
//
//	printf("��Ϸ���");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		b = a;
//		 a = a + b;		 
//		 a = a - b;
//	}
//	;
//	if (a < c)
//	{
//		a = c;
//		 c = a + c;	
//		 c = c - a;
//	}
//	else
//	{
//		if (b < c)
//		{
//			c = b;
//			 b = b + c;
//			 b = b - c;
//		}
//
//	}
//	printf("%d", a);
//	printf("%d", b);
//	printf("%d", c);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int d = 1;
//	while( a%b )
//	{
//		 d = a % b;
//		a = b;
//		b = d;
//	} 
//	printf("%d", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//    int b = 0;
//	scanf("%d %d", &a, &b);
//	int d = 0;
//	while (a % b)
//	{
//		d = a % b;
//		a = b;
//		b = d;
//	}
//	printf("%d", b);
//	return 0;
//}

//int i = 1
//sqrt(i)---��i��ƽ��--  math.h