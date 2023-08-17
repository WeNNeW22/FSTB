#include<stdio.h>

int main()
{
	int Num = 1;
	printf("There are odd numbers from 1 to 100.\n");
	while (100  > Num ) //Excellent expression.
	{
		if (Num % 2 == 1)
			//Maybe this is more excellent expression:
			//if (1 == Num % 2)

		{
			printf("%d ", Num);//""中的空格也可以被识别打印

		}
		Num++;

		

	}
	
	printf(" Congratulayions! Integer from 1 to 100 have printed succesfully.\n");
	return 0;
} 