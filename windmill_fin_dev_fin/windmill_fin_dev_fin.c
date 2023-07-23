#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()		//이거 숫자 큰 값 넣으면 이상하게 나옴... 코드 망한듯 ^^
{
	int wind = 0;

	printf("원하는 *의 +1 값을 입력하십시오: ");		//그냥 사용자가 +1해서 적기로 합시다^^
	scanf("%d", &wind);

	for (int x = 1; x < wind; x++)				//상단
	{
		for (int y = 0; y < x; y++)				//진짜 답은 사용자 최적화가 아닌 <= 으로 바꾸거나 wind 뒤에 +1을 합시다. x <= 윈드
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
	for (int x = 1; x < wind; x++)				//하단
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