#include <stdio.h>
int main(void)
{
	int c;
	int i = 0;		//반복용
	int count;		//몇 번째 입력받은 숫자인지
	char num[1000][61];
	
	printf("hello. input number haha : ");
	while ((c = getchar()) != '\n')
	{
		switch (c) 
		{
			case ' ':
				printf("hello\n");
				break;
			case '.':
				printf("what the fuck?\n");
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
				printf("this is fucking number %c\n", c);
				break;
			default:
				printf(" error\n");
				break;
		}
		i++;
	}

	return 0;
}
