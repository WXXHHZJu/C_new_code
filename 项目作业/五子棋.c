#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




// -------------------- ������� --------------------
/*
����:
map[i][j]��ʾ����(i,j)��ֵ
0��ʾ�յ�
1��ʾ����
2��ʾ����
��: map[3][6] = 1 ��ʾ(3,6)��λ���Ǻ���
*/
int map[19][19];
// ��ʾ��ǰ�غ��� ż����ʾ�������� ������ʾ��������
// ��: flag = 20 ��ʾ��ǰ�ǵ�[20]������ �ɺڷ�����
int flag;
// -------------------- ������� --------------------
// -------------------- service --------------------
/*
������: ����
����: ��ʼ����Ϸ����
�����̵�ֵ��ʼ��Ϊ0
��ǰ�غ���Ϊ����(flag��Ϊ0)
����: void
����ֵ: void
*/
void init();
/*
*�ѵ�1
������: ����
����: ���ݴ��������(map��Ӧλ��)��flagֵ �ж������Ƿ��ʤ
����:
x: ��ǰ�غ����ӵ�x����
y: ��ǰ�غ����ӵ�y����
����ֵ:
0��ʾû�л�ʤ
1��ʾ����ʤ��
2��ʾ����ʤ��
*/
int isWin(int x, int y);
/*
������: ����
����: ��ָ��λ������
���map[x][y]�ǿյ� ���޸�map[x][y]��ֵ:��Ϊ��Ӧ��ɫ(flag��Ӧ��ɫ)
���򲻲���
����:
x: ��ǰ�غ����ӵ�x����
y: ��ǰ�غ����ӵ�y����
����ֵ:
0��ʾ����ʧ�� (�����Ѿ�����)
1��ʾ���ӳɹ�
*/
int playerMove(int x, int y);
// -------------------- service --------------------
// -------------------- view --------------------
/*
����: չʾѡ��, ��ҿ���������ѡ�������Ϸ, �������û��˳���Ϸ
������Ϸ: ������Ϸ���溯��gameView();
��������: �����ڴ�...
�˳���Ϸ: ����exit(0);
*/
void menuView();
/*
������: ����
����: ����map���� ��ӡ��Ϸ����
����: void
����ֵ: void
*/
void gameView_ShowMap();
/*
������: ����
����: ����flag��ֵ ��ӡ��Ϸʤ������ �û����԰�������ص����˵�
����: void
����ֵ: void
*/
void winView();
/*
*�ѵ�2
������: ����
����: ��Ϸ��������
��ʼ����Ϸ����(���ú���init())
while(1){
��ӡ��Ϸ����(���ú���gameView_ShowMap())
���������������
����(�������Ӻ���playerMove())
(�������ʧ�� ���¿�ʼѭ��)
�ж���Ϸ�Ƿ�ʤ��(����ʤ���жϺ���isWin())
(�����Ϸʤ�� ����ʤ�����溯�� Ȼ�������ǰ����)
�л����(�޸�flagֵ)
}
����: void
����ֵ: void
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
	//����ʵ��
	flag = 1;
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			map[i][j] = 0;
		}
	}
}
int isWin(int x, int y)//�ж�ʤ��
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
	//����ʵ��

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
	//����ʵ��

	int num = 0;
	printf("%d.������Ϸ\n", 1);
	printf("%d.��������\n", 2);
	printf("%d.�˳���Ϸ\n", 3);
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		gameView();
		break;
	case 2:
		printf("�����ڴ�\n");
		break;
	case 3:
		m = 1;
		return 0;
	}
}
void gameView_ShowMap() 
{
	//����ʵ��
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
	//����ʵ��
	if (flag % 2 == 0)
		printf("����ʤ��\n");
	else
		printf("����ʤ��\n");
}
void gameView()
{
	//����ʵ��
	int d = 0;
	init();
	gameView_ShowMap();
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("\n");
		if (flag % 2 == 0)
			printf("��������");
		else
			printf("��������");
		printf("��ֱ�����������꣬�����������\n");
		do
		{
			scanf("%d", &x);
			scanf("%d", &y);
			system("cls");
			d = playerMove(x, y);
			if (0 == d)
				printf("����ʧ�ܣ�����������\n");
			gameView_ShowMap();
		} while (0 == d);
		int n = isWin(x, y);
		if (n != 0)
		{
			winView();//�Ƿ���԰�winview����iswin��ȥ
			break;
		}
		else
			flag++;
	}
}