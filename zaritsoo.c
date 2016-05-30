#include <stdio.h>
#define N 59
int main(void)
{
	printf("자릿수 프로그래밍\n");
	int num[N];
	int num1[N];
	int num2[N];
	int cipher = 0;		//cipher = 자릿수
	char c;

	printf("최대 정수 50자리 + 소수 9자리의 수를 입력해주세용 : ");
	for (int i = 9,; (c = getchar()) != 13; i++)		//13 = enter(carrige return)
	{
		num[i] = c - 48;
		cipher++;
	}
	int stack[cipher];

	for (int i = cipher; i < 0; i--)


	return 0;
}
