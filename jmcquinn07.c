//Jamil McQuinn
//CSC 341
//Lab 7


#include <stdio.h>
#include <stdlib.h>

int compare_and_swap(int *pointb, int expected, int new_value);
void swap_new(int *valueReturnedPtr, int *expectedPtr, int *x, int *y);

int main(void)
{
	int *pointa;
	int expected = 1;
	int newValue = 22;
	int x= 5;
	int y=19;

	pointa = &expected;

	printf("Address stored in pointa iss %p \n", pointa);
	printf("Address of variable named expected is %p \n", &expected);
	printf("Value that pointa points to is %d \n", *pointa);
	printf("Value of expected is %d \n", expected);

	int valueReturned = compare_and_swap(pointa, expected, newValue);

	printf("expected = %d, old value = %d\n", expected, valueReturned);
	printf("Before swap: x=%d, y=%d\n", x,y);

	swap_new(&valueReturned, &expected, &x, &y);

	printf("After swap: expected = %d, valueReturned =%d\n",expected, valueReturned);
	printf("After swap: x= %d, y=%d", x, y);

	return EXIT_SUCCESS;
}


int compare_and_swap(int *pointb, int expected, int new_value)
{
	int temp = *pointb;

	if(*pointb==expected)
	{
		*pointb= new_value;
	}

	return temp;
}

void swap_new(int *valueReturnedPtr, int *expectedPtr, int *x, int *y)
{
	int temp = *valueReturnedPtr;
	*valueReturnedPtr = *expectedPtr;
	*expectedPtr = temp;

	temp = *x;
	*x= *y;
	*y= temp;
}
