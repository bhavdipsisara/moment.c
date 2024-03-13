#include<stdio.h>

float main()

{
	float unit,sc,total_bill,bill;
	
	printf("enter the unit");
	scanf("%f",&unit);
	
	if(unit<=50)
	{
		bill = unit * 0.50;
	}
	else if(unit<=150)
	{
		bill = (unit-50) * 0.75 + 25;
	}
	else if(unit<=250)
	{
		bill = (unit-150) * 1.20 + 100;
	}
	else if(250<=unit)
	{
		bill = (unit - 250) * 1.50 + 220;
	}
	sc = bill * 20/100;
	total_bill = bill + sc;
	
	printf("total bill =%.2f",total_bill);
	
	return 0;
	 
	
}