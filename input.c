#include <stdio.h>
int main(void)
{
	int k = 0;
	int c;
	char tmp[61] = {0};
	int tmpcnt = 0;
	char num[1000][61];
	int count = 1;
	int countk = 0;
	int is_point = 0;
	printf("hello. input number haha : ");
	
	for (int i = 0; (c = getchar()) != '\n'; count++, i++)
	{
		if ((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9'));
			tmp[i] = c;
		else if (c == '.')
		{
			countk = count - 1;		// '.' 전까지의 개수를 잰다.
			is_point = 1;
		}
		else if (c == ' ')
		{
			countk = count = 0;
			is_point = 0;
		}
	}

	if (countk == 0)
		countk = count - 1;			// '.'이 없다면 count 그대로 쓰는거지 ㅋ
	else							// '.'이 있다면 num[k][50]부터 소수자리수를 차례로 쓴다.
		for (int i = 0; tmp[countk + 1 + i] != 0; ++i)
			num[k][50 + i] = tmp[countk + 1 + i];

	char stack[countk];				//stack 배열에 맞추어 정수부분을 써내려간다. 

	for (int i = 0; i < countk; i++)
		stack[i] = tmp[i];

	for (int i = 0; countk > 0; countk--, i++)
		num[k][50 - countk] = stack[i];

	for (int i = 0; i < 61; i++)
		printf("num[%d][%d] = %c\n", k, i, num[k][i]);

	/*		
		switch (c) 
		{
			case ' ':
				printf("what 띄어쓰기\n");
				break;
			case '.':
				printf("test : count = %d\n", count);
				break;
			case '+':
				printf("this is plus.\n");
				break;
			case '-':
				printf("this is minus.\n");
				break;
			case '*':
				printf("this is fucking multiply.\n");
				break;
			case '/':
				printf("this is fucking divide.\n");
				break;
			case '%':
				printf("this is fucking!!! remenent");
				break;
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '0':
				printf("ok\n");
				tmp[tmpcnt++] = c;
				break;
			default:
				printf(" error\n");
				break;
		}
	}
	*/

	return 0;
}
