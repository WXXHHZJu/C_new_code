#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ע���ʽ������ŵ�
//һ��������Ŀ��ֻ����һ�� main����
int main()//������
   {
	//printf���������
	//scanf�����뺯��
	// %s-���ַ���
	// %c-���ַ�
	//%d-��ӡһ������
	//%f-float
	//%lf-double
	//sizeof�����Ǽ����ַ��ռ�Ĳ�����
	//'a'-�ַ�a
	printf("hellow\n");
	printf("%d\n",100);
	printf("%d\n", sizeof(char));//�ַ�����
	printf("%d\n", sizeof(short));//������
	printf("%d\n", sizeof(int));//����
	printf("%d\n", sizeof(long));//������
	printf("%d\n", sizeof(long long));//��������
	printf("%d\n", sizeof(float));//�����ȸ�������С����
	printf("%d\n", sizeof(double));//˫���ȸ�����
	//��������������������
	// 
	// 
	//����   ���������� =0��
	//  {}  �ڵı����оֲ���������Ľ�ȫ�ֱ������������ֳ�ͻʱ�ֲ����ȣ�
	char ch = 'a';
	int age = 20;
	age = age + 1;
	printf("age=%d\n", age);

	//�������������
	int a = 0;
	int b = 1;
	int d = 3;
	int c = 2;
	scanf("%d %d %d",&a,&b,&d);
	c = a - b + d;
	printf("sum=%d\n", c);

	//extern int a  
	//extern  ���������������ļ��еı���

	//const int a
	//��const���ξ���ζ�Ÿñ������ɸ��ģ������������������Ǳ����������ǲ��ɸ��ģ�
	//#define����ı�ʶ�����������ܸã�
	//#define MAX 10000
	//ö�ٳ������﷨
	enum AG
	{//����ö�ٱ�����δ������ȡֵ��֮��ֵʱֻ��ȡ����������һ����ֵĬ�ϴ�0��ʼ
		x = 3,//����ֵ
		y,
		z,


	};
	//�ַ����ڽ�β������\0
	//\0���ַ�����β�ı�־
	char arr[] = "hello";
	char arr1[] = { 'a', 'b', 'c','\0'};
	//������ַ�����Ķ��巽ʽ����ΪԪ�ظ�����
	printf("%s\n", arr);
	printf("%s\n", arr1);
	int chb = strlen("abc");
	//strlen�Ǽ����ַ������ȵ���˼�������ַ������ȵ�ʱ�򲻰���\0���������ַ�����Ԫ�ظ���ʱ�㣩
    //ת���ַ����˲��о٣�����������һ���ַ���
	printf("\a\a\a");
	//    \ddd(�������֣�����8���Ƶ���������
	//    \xdd��������16���Ƶ�����
	//  X---ASCII��ֵΪ88��\130)
	//  A---           65(\101)



	return 0;//������
}