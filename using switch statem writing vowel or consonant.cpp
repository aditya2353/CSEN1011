#include <stdio.h>
main()
{
	char a;
	printf("enter an alphabet:");
	scanf("%c" ,&a);
	switch(a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("VOWEL");
			break;
		default:
		    printf("CONSONANT");	
		        	
    }
}
