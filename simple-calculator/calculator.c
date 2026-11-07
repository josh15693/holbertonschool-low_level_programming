#include <stdio.h>

int main(void)
{
	int choice;
	int c;

	while (1)
	{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
	
	scanf("%d", &choice);
	while ((c = getchar()) != '\n' && c != EOF);
	if (choice == 0)
	{
		printf("Bye!\n");
		break;
	}
	if (choice < 1 || choice > 4)
	{
		printf("Invalid choice\n");
	}
	}	
	return (0);
	
}
