#include <stdio.h>

int main()
{
	int  age; 
		printf("Please input your age :\n");
			scanf_s("%d", &age);
	
	
	(age >= 19) ? printf("Your dream cannot be waitted! Chasing it.\n") : printf("future expectation.\n");

	return 0;
}