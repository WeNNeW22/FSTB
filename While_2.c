#include<stdio.h>
//int  main()
//{
//	int Num = 0;
//	while (22 >= Num) {
//		Num++;
//		if (9 == Num) {
//			printf("Down and think.");
//						break;
//						// 在while循环中，break用于永久的终止循环，
//						//不同switch语句中break跳出所在case句
//		}
//		printf("%d", Num);
//	}
//	return 0;
//
//}

int main()

{
	int Num = 0;
	while (11 >= Num)
	{
		Num ++;
		if (Num == 5)//if (5 == Num)
		{
			printf("Sorry,something wrong.Forget it!\n");
			continue;
			//在while循环中，continue的作用是跳过本次循环中continue后边的代码
			//直接去判断部分，看是否进行下一次循环
		}
		printf("%d  ",Num);

		Num++;//Not essential.
		//
		
		



     }

	



	return 0;


}