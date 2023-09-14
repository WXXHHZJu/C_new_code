#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




// -------------------- 数据设计 --------------------
/*
棋盘:
map[i][j]表示坐标(i,j)的值
0表示空地
1表示黑子
2表示白子
如: map[3][6] = 1 表示(3,6)的位置是黑子
*/
int map[19][19];
// 表示当前回合数 偶数表示黑棋落子 奇数表示白棋落子
// 如: flag = 20 表示当前是第[20]次落子 由黑方落子
int flag;
// -------------------- 数据设计 --------------------
// -------------------- service --------------------
/*
负责人: 张三
功能: 初始化游戏数据
将棋盘的值初始化为0
当前回合设为黑棋(flag设为0)
参数: void
返回值: void
*/
void init();
/*
*难点1
负责人: 张三
功能: 根据传入的坐标(map对应位置)和flag值 判断落点后是否获胜
参数:
x: 当前回合落子的x坐标
y: 当前回合落子的y坐标
返回值:
0表示没有获胜
1表示黑子胜利
2表示白子胜利
*/
int isWin(int x, int y);
/*
负责人: 张三
功能: 在指定位置落子
如果map[x][y]是空地 则修改map[x][y]的值:改为相应颜色(flag对应颜色)
否则不操作
参数:
x: 当前回合落子的x坐标
y: 当前回合落子的y坐标
返回值:
0表示落子失败 (棋盘已经有子)
1表示落子成功
*/
int playerMove(int x, int y);
// -------------------- service --------------------
// -------------------- view --------------------
/*
功能: 展示选项, 玩家可以在这里选择进入游戏, 进入设置或退出游戏
进入游戏: 调用游戏界面函数gameView();
进入设置: 敬请期待...
退出游戏: 调用exit(0);
*/
void menuView();
/*
负责人: 张三
功能: 根据map数组 打印游戏棋盘
参数: void
返回值: void
*/
void gameView_ShowMap();
/*
负责人: 张三
功能: 根据flag的值 打印游戏胜利界面 用户可以按任意键回到主菜单
参数: void
返回值: void
*/
void winView();
/*
*难点2
负责人: 张三
功能: 游戏界面整合
初始化游戏数据(调用函数init())
while(1){
打印游戏界面(调用函数gameView_ShowMap())
接收玩家坐标输入
落子(调用落子函数playerMove())
(如果落子失败 重新开始循环)
判断游戏是否胜利(调用胜利判断函数isWin())
(如果游戏胜利 调用胜利界面函数 然后结束当前界面)
切换玩家(修改flag值)
}
参数: void
返回值: void
*/
void gameView();
// -------------------- view --------------------
int m = 0;
int main()
{	
	while (1)
	{
		menuView();
		if (1 == m)
			break;
	}
	return 0;
}
void init()
{
	//代码实现
	flag = 1;
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			map[i][j] = 0;
		}
	}
}
int isWin(int x, int y)//判断胜利
{
	x = x - 1;
	y = y - 1;
	if (flag % 2 == 0)
	{

		for (int a = 0; a < 15; a++)
		{
			if (map[a][y] == 1 && map[a + 1][y] == 1 && map[a + 2][y] == 1 && map[a + 3][y] == 1 && map[a + 4][y] == 1)
			{
				return 1;
			}
		}
		for (int b = 0; b < 15; b++)
		{
			if (map[x][b] == 1 && map[x][b + 1] == 1 && map[x][b + 2] == 1 && map[x][b + 3] == 1 && map[x][b + 4] == 1)
			{
				return 1;
			}
		}
		if (x > y)
		{
			for (int a = x - y, b = 0; a < 15; a++, b++)
			{
				if (map[a][b] == 1 && map[a + 1][b + 1] == 1 && map[a + 2][b + 2] == 1 && map[a + 3][b + 3] == 1 && map[a + 4][b + 4] == 1)
				{
					return 1;
				}
			}
			if (x + y < 19)
			{
				for (int a = x + y, b = 0; a > 3; a--, b++)
				{
					if (map[a][b] == 1 && map[a - 1][b + 1] == 1 && map[a - 2][b + 2] == 1 && map[a - 3][b + 3] == 1 && map[a - 4][b + 4] == 1)
					{
						return 1;
					}
				}
			}
			else
			{
				for (int a = 18, b = x + y - 18; b < 15; a--, b++)
				{
					if (map[a][b] == 1 && map[a - 1][b + 1] == 1 && map[a - 2][b + 2] == 1 && map[a - 3][b + 3] == 1 && map[a - 4][b + 4] == 1)
					{
						return 1;
					}
				}
			}
		}
		else
		{
			for (int a = 0, b = y - x; b < 15; a++, b++)
			{
				if (map[a][b] == 1 && map[a + 1][b + 1] == 1 && map[a + 2][b + 2] == 1 && map[a + 3][b + 3] == 1 && map[a + 4][b + 4] == 1)
				{
					return 1;
				}
			}
			if (x + y < 19)
			{
				for (int a = 0, b = x + y; b > 3; b--, a++)
				{
					if (map[b][a] == 1 && map[b - 1][a + 1] == 1 && map[b - 2][a + 2] == 1 && map[b - 3][a + 3] == 1 && map[b - 4][a + 4] == 1)
					{
						return 1;
					}
				}
			}
			else
			{
				for (int b = 18, a = x + y - 18; a < 15; b--, a++)
				{
					if (map[b][a] == 1 && map[b - 1][a + 1] == 1 && map[b - 2][a + 2] == 1 && map[b - 3][a + 3] == 1 && map[b - 4][a + 4] == 1)
					{
						return 1;
					}
				}
			}
		}

		return 0;
	}
	else
	{

		for (int a = 0; a < 15; a++)
		{
			if (map[a][y] == 2 && map[a + 1][y] == 2 && map[a + 2][y] == 2 && map[a + 3][y] == 2 && map[a + 4][y] == 2)
			{
				return 2;
			}
		}
		for (int b = 0; b < 15; b++)
		{
			if (map[x][b] == 2 && map[x][b + 1] == 2 && map[x][b + 2] == 2 && map[x][b + 3] == 2 && map[x][b + 4] == 2)
			{
				return 2;
			}
		}
		if (x > y)
		{
			for (int a = x - y, b = 0; a < 15; a++, b++)
			{
				if (map[a][b] == 2 && map[a + 1][b + 1] == 2 && map[a + 2][b + 2] == 2 && map[a + 3][b + 3] == 2 && map[a + 4][b + 4] == 2)
				{
					return 2;
				}
			}
			if (x + y < 19)
			{
				for (int a = x + y, b = 0; a > 3; a--, b++)
				{
					if (map[a][b] == 2 && map[a - 1][b + 1] == 2 && map[a - 2][b + 2] == 2 && map[a - 3][b + 3] == 2 && map[a - 4][b + 4] == 2)
					{
						return 2;
					}
				}
			}
			else
			{
				for (int a = 18, b = x + y - 18; b < 15; a--, b++)
				{
					if (map[a][b] == 2 && map[a - 1][b + 1] == 2 && map[a - 2][b + 2] == 2 && map[a - 3][b + 3] == 2 && map[a - 4][b + 4] == 2)
					{
						return 2;
					}
				}
			}
		}
		else
		{
			for (int a = 0, b = y - x; b < 15; a++, b++)
			{
				if (map[a][b] == 2 && map[a + 1][b + 1] == 2 && map[a + 2][b + 2] == 2 && map[a + 3][b + 3] == 2 && map[a + 4][b + 4] == 2)
				{
					return 2;
				}
			}
		}
		if (x + y < 19)
		{
			for (int a = 0, b = x + y; b > 3; b--, a++)
			{
				if (map[b][a] == 2 && map[b - 1][a + 1] == 2 && map[b - 2][a + 2] == 2 && map[b - 3][a + 3] == 2 && map[b - 4][a + 4] == 2)
				{
					return 2;
				}
			}
		}
		else
		{
			for (int b = 18, a = x + y - 18; a < 15; b--, a++)
			{
				if (map[b][a] == 2 && map[b - 1][a + 1] == 2 && map[b - 2][a + 2] == 2 && map[b - 3][a + 3] == 2 && map[b - 4][a + 4] == 2)
				{
					return 2;
				}
			}
		}
	}
	return 0;
}


int playerMove(int x, int y)
{
	//代码实现

	if (flag % 2 == 0)
	{
		if (0 == map[x - 1][y - 1])
		{
			map[x - 1][y - 1] = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (0 == map[x - 1][y - 1])
		{
			map[x - 1][y - 1] = 2;
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
void menuView() 
{
	//代码实现

	int num = 0;
	printf("%d.进入游戏\n", 1);
	printf("%d.进入设置\n", 2);
	printf("%d.退出游戏\n", 3);
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		gameView();
		break;
	case 2:
		printf("敬请期待\n");
		break;
	case 3:
		m = 1;
		return 0;
	}
}
void gameView_ShowMap() 
{
	//代码实现
	for (int i = 0; i < 19; i++)
	{

		for (int j = 0; j < 19; j++)
		{
			printf(" %d", map[j][i]);
		}
		printf("\n");
	}
}
void winView()
{
	//代码实现
	if (flag % 2 == 0)
		printf("黑棋胜利\n");
	else
		printf("白棋胜利\n");
}
void gameView()
{
	//代码实现
	int d = 0;
	init();
	gameView_ShowMap();
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("\n");
		if (flag % 2 == 0)
			printf("黑棋落子");
		else
			printf("白棋落子");
		printf("请分别输入横纵坐标，先输入横坐标\n");
		do
		{
			scanf("%d", &x);
			scanf("%d", &y);
			system("cls");
			d = playerMove(x, y);
			if (0 == d)
				printf("落子失败，请重新落子\n");
			gameView_ShowMap();
		} while (0 == d);
		int n = isWin(x, y);
		if (n != 0)
		{
			winView();//是否可以把winview塞到iswin里去
			break;
		}
		else
			flag++;
	}
}