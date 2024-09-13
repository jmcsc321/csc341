//Jamil McQuinn
//CSC 341
//LAB 4

#include <stdio.h>
#include <stdlib.h>

int global_var_un;
int global_var_it = 50;


int main(int argc, char *argv[])
{
	int *heap_var;
	int local_var=50;
	heap_var= malloc(sizeof(int));
	*heap_var=200;

	void *addy[5];

	addy[0]=&argc;
	addy[1]=&local_var;
	addy[2]=heap_var;
	addy[3]=&global_var_un;
	addy[4]=&global_var_it;

	for(int i=0; i<5-1;i++)
	{
		for(int j=0; j<5-i-1;j++)
		{
			if(addy[j]<addy[i+1])
			{
			void *temp = addy[j];
			addy[j] = addy[j+1];
			addy[j+1]=temp;
			}
		}
		
	}

	printf("Addresses from highest to lowest");
	for(int i =0; i<5;i++)
	{
		printf("addresses: %p\n", addy[i]);
	}

	return EXIT_SUCCESS;


}
