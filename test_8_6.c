#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////ǰ��++�����ȼӺ���
////����++    ���ú��
//int main()
//{
//	//typedef�ض���
//	//typedef unsigned int u_int
//	//static_��̬��
//	//1  ���ξֲ�����
//	// 2  ����ȫ�ֱ���
//	//3  ���κ���
//		//static���auto�ֲ���������Χ�����٣������Ǹı��˴洢���ͣ�
//
//		//define����꣨�������滻��
//	//define ADD(x,y) ((x)=(y))
//	//%p������ӡ��ַ
//
//
//
//	//ָ��
//	int  a = 0;
//	int* pa = &a;//pa��ר��������ŵ�ַ�ģ���c�����н�ָ�����
//	//*˵��pa��ָ�����
//	//int˵��paָ��Ķ�����int���͵�
//	*pa = 20;//*  �ǽ����ò�����*pa����ͨ��pa��ĵ�ַ�ҵ�a
//
//
//	return 0;
//}
//
	//�ṹ��
//����һ��ѧ��
//
//struct stu
//{
//	char name[10];//��Ա����
//	int age;
//	double s;
//};
//
//int main()
//{
//	struct stu a = { "a",20,1.5};//�ṹ��Ĵ����ͳ�ʼ��
//	printf(" %s %d %lf\n", a.name, a.age, a.s);//�ṹ�����.��Ա����
//	struct stu* pa = &a;
//
//
//	//�Խṹ��ָ��Ĳ�����
//	printf(" %s %d %lf\n", (*pa).name, (*pa).age, (*pa).s); //*pa���������
//	printf("%s %d %lf\n", pa->name, pa->age, pa->s);
//
//	return 0;
//}





int main()
{
	//���֧ѡ�����
	//if ()
	// {}
	//else if ()
	// {}
	// ......
	//else
	//{}
	//else�������ifƥ��

	//int a = 0;
	//scanf("%d", &a);
	//if (a % 2 == 0)
	//	printf("ou");
	//else
	//	printf("ji");


	int a = 1;
	/*while (a <= 100)
	{
		if (a % 2 == 1)
			printf(" %d", a);
		a++;
	}*/



	scanf("%d", &a);
	switch (a)//�����б��������λ��ַ�
		//switch����Ƕ��
	{//breakֻ��������У�����Ҳ���ܣ�ֻ�ǻ�һֱ����
	case 1 :
		printf("a\n");
		break;
	case 2:
		printf("b\n");
		break;
	default:
		printf("cuowu\n");
		break;
	}






	return 0;
}