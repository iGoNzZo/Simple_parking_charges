#include <stdio.h>

double carTime1;
double carTime2;
double carTime3;
double totalHours;

//function declaration 
double calculateCharges(double t);

void main()	{ // main 
	printf("Enter hours for car 1: ");
	scanf("%lf", &carTime1);
	
	printf("Enter hours for car 2: ");
	scanf("%lf", &carTime2);
	
	printf("Enter hours for car 3: ");
	scanf("%lf", &carTime3);
	
	//adds time for all 3 cars 
	totalHours = carTime1 + carTime2 + carTime3;

	//print results 
	printf("Car\tHours\tCharge\n");
	printf("1\t%4.2f%8.2f\n", carTime1, calculateCharges(carTime1));
	printf("2\t%4.2f%8.2f\n", carTime2, calculateCharges(carTime2));
	printf("3\t%4.2f%8.2f\n", carTime3, calculateCharges(carTime3));
	double totalCharge = calculateCharges(carTime1) + calculateCharges(carTime2) + calculateCharges(carTime3);
	printf("Total\t%4.2f%8.2f\n",totalHours, totalCharge);
}//end main 

//calculate charges function. calculates parking fee 
double calculateCharges(double t)	{
	if(t < 3)	{
		return 2.00; // flate rate 2.00
	}
	else if(t > 3)	{
		t = t - 3.00;
		t = t * 0.50;
		t = t + 2.00;
		//50 cents per hour 
		if(t < 10)	{
			return t;
			//max == 10 hours 
		}
		else	{
			return 10.00;
			//so return maximum fee
		}
	}
}
