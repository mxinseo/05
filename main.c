#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char op;
	int x, y;
	int result;

	printf("enter the calculation : ");
	scanf("%d %c %d", &x, &op, &y);

	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	default:
		result = x % y;
		break;
	}
	printf(" = %d", result);
	
	return 0;
}
