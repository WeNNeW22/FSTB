#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
////FACTORIAL
//int main()
//{
//	int Num = 1;
//	int n = 0;
//	printf("Factorial.\n");
//
//	scanf("%d", &n);
//	int Fac = 1;
//	do
//	{
//		Num++;
//		Fac *= Num;// Or Fac = Fac * Num
//	
//	}while (n >= Num);
//	
//		printf("%d", Fac);
//
//	return 0;
//}
//
// 
// 
// 
////FACTORIAL and ADD  计算n的阶乘之和
int main()
{
	int Num = 0;
	int n = 0;
	int ADD = 0;
	printf("Factorial.\n");

	scanf("%d", &n);
	int Fac = 1;
	do
	{
		Num++;
		Fac *= Num;
		ADD += Fac;//Or ADD = ADD + Fac
	
	}while (Num <= n);
	
		printf("%d\n", ADD);
		printf("%d\n", Fac);


	return 0;


}