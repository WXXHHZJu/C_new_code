#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////前置++——先加后用
////后置++    先用后加
//int main()
//{
//	//typedef重定义
//	//typedef unsigned int u_int
//	//static_静态的
//	//1  修饰局部变量
//	// 2  修饰全局变量
//	//3  修饰函数
//		//static替代auto局部变量出范围后不销毁（本质是改变了存储类型）
//
//		//define定义宏（本质是替换）
//	//define ADD(x,y) ((x)=(y))
//	//%p用来打印地址
//
//
//
//	//指针
//	int  a = 0;
//	int* pa = &a;//pa是专门用来存放地址的，在c语言中叫指针变量
//	//*说明pa是指针变量
//	//int说明pa指向的对象是int类型的
//	*pa = 20;//*  是解引用操作，*pa就是通过pa里的地址找到a
//
//
//	return 0;
//}
//
	//结构体
//创建一个学生
//
//struct stu
//{
//	char name[10];//成员变量
//	int age;
//	double s;
//};
//
//int main()
//{
//	struct stu a = { "a",20,1.5};//结构体的创建和初始化
//	printf(" %s %d %lf\n", a.name, a.age, a.s);//结构体变量.成员变量
//	struct stu* pa = &a;
//
//
//	//对结构体指针的操作符
//	printf(" %s %d %lf\n", (*pa).name, (*pa).age, (*pa).s); //*pa必须加括号
//	printf("%s %d %lf\n", pa->name, pa->age, pa->s);
//
//	return 0;
//}





int main()
{
	//多分支选择语句
	//if ()
	// {}
	//else if ()
	// {}
	// ......
	//else
	//{}
	//else与最近的if匹配

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
	switch (a)//括号中必须是整形或字符
		//switch可以嵌套
	{//break只是阻隔运行，不加也可跑，只是会一直运行
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