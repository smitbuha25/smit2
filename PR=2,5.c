#include<stdio.h>

main()
{
	int unit,ele_bill,sr,total_ele_bill;
	printf("Enter Electricity unit=");
	scant("%d",&unit);
	
	if(unit<=50)
	{
		ele_bill=unit*0.50;
		printf("Your bill is %d",ele_bill);
	}
	else if(unit<=150)
	{
		ele_bill=(unit-50)*0.75+25;
		printf("Your bill is %d",ele_bill);
	}
	else if(unit<=250)
	{
		ele_bill=(unit-150)*1.20+100;
		printf("Your bill is %d",ele_bill);
	}
	else
	{
		ele_bill=(unit-250)*1.50+220;
		printf("YOur bill is %d",ele_bill);
	}
	
	sr=ele_bill*0.20;
	total_ele_bill=ele_bill+sr;
	printf("\nYour Total Electricity bill=%d",total_ele_bill);                                              
}
