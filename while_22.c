#include<stdio.h>
#define GOLD 1000

int main(void)
    {
	int rush;
	printf("Please input a integer randomly from 1 to 600.\n");
	scanf_s("%d", &rush);
		while (rush <= GOLD) {

		  if (rush == 666) {
				printf("Something wrong,forget it!\n");
				rush += 1;
				continue;
				/*满足一定条件的时候，如果使用continue语句，就代表：我不要了满足条件中的内容但是我还要继续让程序执行下去，一定要记得在continue之前加	rush++（不要遗漏此自增变量）*/

			}
		  printf("ruhsh = %d\n", rush);
		  rush += 1;

		}
		printf("You can become a person who you want definately!\n ");
		return 0;
}
