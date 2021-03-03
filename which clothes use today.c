#include<stdio.h>


int main (void)


{
	
	int clothes;
	int temperature;
	
	printf("which clothes use today\n");
	
	printf ("use temperature in celsius\n");
	
	printf("what temperature is today: ");
	scanf ("%d",&temperature);
	
	
	if(temperature >15)
	
		
	printf("wear casual clothes today because is a hot day :)\n");

	
	
	else 
	
	printf ("wear warm clothes because is a cold day :()\n");
	
	system("pause");
	
	return 0;
	
}
