
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int Num_1;
	int Num_2;
	int max ;
	printf("Please enter two integers. \n");
	printf("And we wiil compare their sizes,the first you enter is Num_1,the secend you enter is Num_2.\n ");


	scanf("%d %d", &Num_1, &Num_2);

	/*if (Num_1 > Num_2)
	{
		max = Num_1;
		printf("max = %d", max);
		printf("The bigger integer is the Num_1\n");
	}
	else
	{
		max = Num_2;
		printf("max = %d",max);
		printf("The bigger integers is the Num_2\n");
	}
	return 0;*/

	//以上if部分可代替为：条件操作符（三目操作符） “ ？ ：”

	(Num_1 > Num_2) ? (printf("max = %d\n", max = Num_1) && printf("The bigger integers is the Num_1\n")) : (printf("max = % d\n", max = Num_2) && printf("The bigger integer is Num_2\n"));
		 
	
		return 0;

}