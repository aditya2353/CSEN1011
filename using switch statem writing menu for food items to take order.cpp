#include <stdio.h>
main()
{
	char ch;
	int Quantity,bill;
	printf("burger-B,sandwitch-S,frenchfries-F,pizza-P");
	scanf("%c",&ch);
     
	switch(ch)
	{
		case 'B':
			printf("order for burger");
			printf("enter Quantity");
			scanf("%d" ,&Quantity);
			bill=Quantity*200;
			break;
			
		case 'S':
			printf("order for sandwitch");
			printf("enter Quantity");
			scanf("%d" ,&Quantity);
			bill=Quantity*150;
			break;
			
		case 'F':
		    printf("order for frenchfries");
		    printf("enter Quantity");
		    scanf("%d" ,&Quantity);
		    bill=Quantity*50;
	        break;
				   
		case 'P':
			printf("order for pizza");
			printf("enter Quantity");
			scanf("%d" ,&Quantity);
			bill=Quantity*500;
		    break;   
	}
	printf("total bill is %d",bill);
}
