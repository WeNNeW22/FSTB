#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// Programme 1 (By myself.)
//
//int main()
//{
//	int a, b;
//	printf("Please enter two integers,and the bigger will be printed.\n");
//	scanf("%d %d ", &a, &b);
//
//	if (a > b) {
//		printf("%d\n", a);
//	}
//	else {
//		printf("%d\n", b);
//	}
// return 0;
//}

// Programme 2 (Improve : use function)

int  Max (int x, int y)
	{
		if (x > y)
		{
			return x;
		}
		else {
			return y;
		}
	}

int main()
{
	int a = 0, b = 0;
	

	printf("Please enter two entegers,the bigger one will be printed.\n");
	scanf("%d %d",&a,&b);

	//The flase exprssion:
	/*int Max(a, b);
	printf("%d", Max);*/
	int M = Max(a, b);
	printf("%d\n", M);

	return 0;


}
