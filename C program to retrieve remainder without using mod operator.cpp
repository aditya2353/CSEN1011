#include<stdio.h>
int main()
{
	//1
    int no,divisor,remainder;

    //2
    printf("Enter the number : ");
    scanf("%d",&no);

    //3
    printf("Enter the divisor : ");
    scanf("%d",&divisor);

    //4
    while(no >= divisor)
	{
        no = no - divisor;
    }

    //5
    remainder = no;

    //6
    printf("The remainder is %d ",remainder);

    return 0;
}

