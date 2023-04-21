#include<stdio.h>

main()
{
	char ch;
	printf("Enter Number=");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("%c is small alphabet",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("%c ic capital alphabet");
	}
	else if(ch>='0' && ch<='99999')
	{
		printf("%c is number value",ch);
	}
	else
	{
		printf("This is special character");
		
	}
}
