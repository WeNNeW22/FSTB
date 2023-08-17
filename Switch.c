#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int Day;
	printf("Please enter an integer which you want.\n");
	scanf("%d", &Day);
	switch (Day) 
	{
		case 1:
			printf("Monday,the begining of the week,a good begining means you can get close to her.\n");
			break;
		case 2:
			printf("Tuseday,you  have acrossed a wonderful day,go on!\n");
			break;
		case 3:
			printf("Wednesday,today is a kay day,you cannot waste it.\n");
			break;
		case 4:
			printf("Thursday,keeping full speed to go, dawn is right ahead.\n");
			break;
		case 5:
			printf("friday,what can stop you? just to go ahead.\m");
			break;
		case 6:
			printf("Saturday,please keep chasing her.\n");
			break;
		case 7:
			printf("Sunday,change is urgent.\n");
			break;
		default:
			printf("If you have dreams,just chase it!\n");

	}
	printf("If you want,nothing is you cannot do.\n");
	return 0;
}



