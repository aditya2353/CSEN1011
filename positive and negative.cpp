#include <stdio.h>
main()
{
	double num;
	printf("enter a number: ");
	scanf("%d", &num);
	if (num <=0.0) {
		if (num ==0.0)
		printf("You entered 0. ");
		else
		printf("You entered negative number.");
	}
		else
		printf("you entered positive number.");
	
	return 0;
}
