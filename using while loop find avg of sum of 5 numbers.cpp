#include <stdio.h>
int main()
{
	int sum=0, i=0, num;
	printf("enter five numbers ");
	
	while(i<5)
	{
		scanf("%d",&num);
		sum=sum+num;
		i++;
	}
        printf("%d ",sum/5); 	
	
}
