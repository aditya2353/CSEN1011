#include <stdio.h>
main()
{
	int a,b,op;
	printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
	printf("enter the values of a & b");
	scanf("%d %d",&a,&b);
	printf("enter your choice");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("sum of %d and %d is : %d",a,b,a+b);
			break;
		case 2:
			printf("Difference of %d and %d is : %d",a,b,a-b);
			break;
		case 3:
			printf("Multiplication of %d and %d is : %d",a,b,a*b);
			break;
		case 4:
			printf("Division of %d and %d is : %d",a,b,a/b);
			break;
		default:
			printf("enter the correct value");
			break;
	}
}

