//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//
//int main()
//
//{
//	int a, b;
//	printf ("Please enter two interge.\n ");
//	scanf ("%d %d", &a, &b);//Do not add any extre symbol in double quatation mark,or it will be wrong.
//
//	double c = (a + b) / 2.0;
//	printf("The average of two number you have entered is %f\n", c);
//
//	return 0;
//
//
//}
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main()

{
	int a = 11, b = 22;
	//printf("Please enter two interge.\n ");
	//scanf("%d %d", &a, &b);//Do not add any extre symbol in double quatation mark,or it will be wrong.


	double c = (a + b) / 2.0;
	//printf("The average of two number you have entered is %f\n", c);
	printf("%d和%d的平均数是%f\n",a,b, c);

	return 0;


}
