#include <stdio.h>
main()
{
	int a , k;
	printf("enter a number");
	scanf("%d" ,&a);
	k=a %2;
	switch(k)
	{
		case 0:
			printf("entered number is even");
			break;
		case 1:
		    printf("entered number is odd");
		    break;
		default:
			printf("out of range");
	}
	  
}
