#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()		//�̰� ���� ū �� ������ �̻��ϰ� ����... �ڵ� ���ѵ� ^^
{
	int wind = 0;

	printf("���ϴ� *�� +1 ���� �Է��Ͻʽÿ�: ");		//�׳� ����ڰ� +1�ؼ� ����� �սô�^^
	scanf("%d", &wind);

	for (int x = 1; x < wind; x++)				//���
	{
		for (int y = 0; y < x; y++)				//��¥ ���� ����� ����ȭ�� �ƴ� <= ���� �ٲٰų� wind �ڿ� +1�� �սô�. x <= ����
		{
			printf("*");
		}
		for (int z = wind; z > x; z--)
		{
			printf(" ");
		}
		for (int w = wind; w > x; w--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int x = 1; x < wind; x++)				//�ϴ�
	{
		for (int y = wind; y > x; y--)
		{
			printf(" ");
		}
		for (int z = 0; z < x; z++)
		{
			printf("*");
		}
		for (int w = 0; w < x; w++)
		{
			printf(" ");
		}
		for (int v = wind; v > x; v--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}