#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = { "welcome" };//必须有【】
//	char arr2[] = { "#######" };
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);//休眠1秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return  0;
//}
//
////strcmp--用来比较字符串，不能用==
////strcmp（数组名，"123456")==0
////结果大于0说明a>b，小于0说明a<b，等于0说明a等于b

//
//void menu()
//{
//	printf("1.开始游戏\n");
//	printf("0.退出游戏\n");
//}
//void game()
//{
//	//随机数的生成
//	//rand函数返回0-32767之间的数字	
//	//时间戳
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
//	srand((unsigned int)time(NULL));//时间戳（在头上设置一个即可）
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
//	printf("游戏愉快");
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
//sqrt(i)---对i开平方--  math.h