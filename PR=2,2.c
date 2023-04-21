#include<stdio.h>

main()
{
	int num;
	printf("Enter Numer=");
	scanf("%d",&num);
	
	(num%2==0) ? printf("%d number is even",num) : printf("%D number is odd",num);
}
