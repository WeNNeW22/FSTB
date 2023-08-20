#include<stdio.h>
//
//int main ()
//{
//	int Num;
//	for (Num = 0; Num < 23; Num += 2) //for(Initialize variable;Judging variable;Adjusting variable) "左闭右开"
//	{
//		printf("The future looks bright.\n");
//		printf("Num = %d\n", Num);
//			
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int a;
//	for (int a = 0;; a++)//  If there isn't "judging varialbe",the circulate will be thinked true and it will continue to run.
//	{
//		printf("%d ", a);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	for (;;)
//	{
//		printf("hello\n");// If there isn't "judging varialbe",the circulate will be thinked true and it will continue to run.
//	}
//
//
//	return 0;
	

//}

//
//int main()
//{
//	int x, y;
//	for (x = 0,y = 0; x < 2 && y < 5; ++x,y++)
//	{
//		printf("%d %d\n",x,y);
//		printf("Hello,Google！\n");
//	}
//
//	return 0;
//}
//
//
//




int main()
{
	int a, b;
	for (a = 0, b = 0; b == 0; b++, a++)//程序执行一次
	//for (a = 0, b = 0; b = 0 ; b++, a++)//b = 0 表示0赋值给b，表示假，循环不执行（非0表示真，程序无限执行下去）
	{
		printf("%d %d", a, b);
			b++;
	}



	return 0;
}

