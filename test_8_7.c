#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//	// 在while循环中，break用于永久终止循环
//	//continue是跳过其后面的代码，直接跳去判断看是否进入下一次循环
//	/*while (1)
//	{
//		continue;
//		break;
//	}*/
//
//	//EOF-end of file 文件结束标志
//	//getchar（）获取一个字符
//	//putchar（）输出一个字符//
//	//数组的数组名本来就是地址
//	//getchar会读取回车
//
//	char pas[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", pas);
//	//清理缓冲区
//	//getchar();//处理\n
//	int a = 0;
//	while ((a = getchar()), a != '\n')
//	{
//		;
//	}
//	printf("请确认密码（y/n）");
//
//	int ch = 0;
//	ch = getchar();
//	if ('y' == ch)
//	{
//		printf("success");
//	}
//	else
//	{
//		printf("file");
//	}
//	//for(表达式1  ； 表达式2  ；表达式3）
//	
//
//	//do  while 循环
//	do
//	{
//
//		;
//
//	} while();
//
//	return 0;
//}
//
//
//int main()
//{
//	int sum = 1;
//	int a = 0;
//	int c = 0;
//	scanf("%d", &c);
//	/*for (c; c >= 1; c--)
//	{	
//		int b = c;
//		sum = 1;
//		for (b; b>= 1; b--)
//		{
//			sum = sum *b;
//			
//		}
//		a = a + sum;
//	}	*/
//	for (int b = 1; b <= c; b++)
//	{
//		sum *= b;
//		a += sum;
//	}
//
//	printf("%d", a);
//	return 0;
//}


//二分查找（在有序数组中）
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//有序数组
	int k = 0;//要查找的数
	scanf("%d", &k);
	int left = 0;
	int right = ((sizeof(arr) / sizeof(arr[0]))-1);
	while (left <= right)
	{
		int mid = ((left + right) / 2);
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d", mid);
			break;
		}
	}
	if (left > right)
		printf("失败");
	return 0;
}