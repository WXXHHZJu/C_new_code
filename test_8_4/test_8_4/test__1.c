#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//注意格式，如符号等
//一个工程项目中只能有一个 main函数
int main()//函数名
   {
	//printf是输出函数
	//scanf是输入函数
	// %s-是字符串
	// %c-是字符
	//%d-打印一个整数
	//%f-float
	//%lf-double
	//sizeof（）是计算字符空间的操作符
	//'a'-字符a
	printf("hellow\n");
	printf("%d\n",100);
	printf("%d\n", sizeof(char));//字符类型
	printf("%d\n", sizeof(short));//短整型
	printf("%d\n", sizeof(int));//整形
	printf("%d\n", sizeof(long));//长整形
	printf("%d\n", sizeof(long long));//超长整形
	printf("%d\n", sizeof(float));//单精度浮点数（小数）
	printf("%d\n", sizeof(double));//双精度浮点数
	//数据类型用来创建变量
	// 
	// 
	//类型   变量的名字 =0；
	//  {}  内的变量叫局部变量，外的叫全局变量（二者名字冲突时局部优先）
	char ch = 'a';
	int age = 20;
	age = age + 1;
	printf("age=%d\n", age);

	//计算多个数运算等
	int a = 0;
	int b = 1;
	int d = 3;
	int c = 2;
	scanf("%d %d %d",&a,&b,&d);
	c = a - b + d;
	printf("sum=%d\n", c);

	//extern int a  
	//extern  用来声明在其他文件中的变量

	//const int a
	//被const修饰就意味着该变量不可更改，叫做常变量（但仍是变量）（仅是不可更改）
	//#define定义的标识符常量（不能该）
	//#define MAX 10000
	//枚举常量的语法
	enum AG
	{//这种枚举变量的未来可能取值（之后赋值时只能取这里面其中一个）值默认从0开始
		x = 3,//赋初值
		y,
		z,


	};
	//字符串在结尾隐藏了\0
	//\0是字符串结尾的标志
	char arr[] = "hello";
	char arr1[] = { 'a', 'b', 'c','\0'};
	//这个是字符数组的定义方式【内为元素个数】
	printf("%s\n", arr);
	printf("%s\n", arr1);
	int chb = strlen("abc");
	//strlen是计算字符串长度的意思（计算字符串长度的时候不包含\0）（但求字符数组元素个数时算）
    //转义字符（此不列举）（整体属于一个字符）
	printf("\a\a\a");
	//    \ddd(三个数字）代表8进制的三个数字
	//    \xdd代表两个16进制的数字
	//  X---ASCII码值为88（\130)
	//  A---           65(\101)



	return 0;//函数体
}