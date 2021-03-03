#include <stdio.h>
#include <stdlib.h>


int main (void)

{
	int meters,floors, building;
	
	
	printf ("calculate the size of a building\n");
	
	
	
	printf ("put here the number of floors: ");
	
	
	scanf("%d",&floors);
	
	
	
	printf ("how many meters is the floor: ");
	scanf ("%d", &meters);
	
	building = meters * floors;
	 
	 
	 printf("the building has %d meters\n",floors*meters);
	 
	
	

		system ("pause");

return 0;	
	
	
	
	
}
