#include<stdio.h>

int main()
{
	int a = 0;// 0表示假，非0就是真
	printf("%d\n", !a);
	
	
	
	if (a) {
		printf("Dreams come true.\n");
		
	}

	if  (!a) { //这里既可以是if （！a）， 也可以是else
		printf("Your future is promising.\n");

	}
	return 0;
}