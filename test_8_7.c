#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//	// ��whileѭ���У�break����������ֹѭ��
//	//continue�����������Ĵ��룬ֱ����ȥ�жϿ��Ƿ������һ��ѭ��
//	/*while (1)
//	{
//		continue;
//		break;
//	}*/
//
//	//EOF-end of file �ļ�������־
//	//getchar������ȡһ���ַ�
//	//putchar�������һ���ַ�//
//	//������������������ǵ�ַ
//	//getchar���ȡ�س�
//
//	char pas[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", pas);
//	//��������
//	//getchar();//����\n
//	int a = 0;
//	while ((a = getchar()), a != '\n')
//	{
//		;
//	}
//	printf("��ȷ�����루y/n��");
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
//	//for(���ʽ1  �� ���ʽ2  �����ʽ3��
//	
//
//	//do  while ѭ��
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


//���ֲ��ң������������У�
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��������
	int k = 0;//Ҫ���ҵ���
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
		printf("ʧ��");
	return 0;
}