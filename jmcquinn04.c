//Jamil McQuinn
//CSC 341
//LAB 4

#include <stdio.h>
#include <stdlib.h>

int global_var_un;
int global_var_it = 50;


int main(int argc, char *argv[])
{
	
	int local_var=50;
	int* heap_var= malloc(sizeof(int));
	*heap_var=200;

        printf("Address of argc: %p\n", (void*)&argc);
        printf("Address of local_var: %p\n", (void*)&local_var);
        printf("Address of heap_var: %p\n", (void*)&heap_var);
        printf("Address of global_var_un: %p\n", (void*)&global_var_un);
        printf("Address of global_var_it: %p\n", (void*)&global_var_it);

	return EXIT_SUCCESS;


}
