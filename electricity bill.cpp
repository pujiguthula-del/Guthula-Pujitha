#include<stdio.h>
int main()
{
	int units;
	float amount,charge,T_amount;
	printf("Enter number of units");
	scanf("%d",&units);
	if(units<=50)
	{
	amount=units*2.50;
	charge=30;
}
	else if(units<=100)
	{
	amount=units*3.00;
	charge=50;
}	 
	else if(units<=200)
	{
	amount=units*3.50;
	charge=75;
}
	else if(units<=300)
	{
	amount=units*4.00;
	charge=100;
}
	T_amount=amount+charge;
	printf("Electricity bill.%2f,T-amount");
	return 0;	
}
