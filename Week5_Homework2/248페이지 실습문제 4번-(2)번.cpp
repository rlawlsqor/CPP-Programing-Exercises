#include "MineSweeper.h"
void main()
{
	int width, height, total;
	printf(" <Mine Sweeper>\n");
	printf(" ���ڸ��� ũ�� �Է�(���� ����) : ");
	scanf("%d%d", &width, &height);
	printf(" �ż��� �� ������ ���� �Է� : ");
	scanf("%d", &total);

	playMineSweeper(width, height, total);
}