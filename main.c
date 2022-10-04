#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int trials = 0;
	int n;

	do
	{
		trials++;
		
		printf("Guess a number : ");
		scanf("%d", &n);
		
		if (n > answer)
			printf("high!\n");
		else if( n < answer)
			printf("low!\n");
	} while (n != answer);

	printf("Congratulation! trials: %d\n", trials);
	
	return 0;
}
