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
				/*����һ��������ʱ�����ʹ��continue��䣬�ʹ����Ҳ�Ҫ�����������е����ݵ����һ�Ҫ�����ó���ִ����ȥ��һ��Ҫ�ǵ���continue֮ǰ��	rush++����Ҫ��©������������*/

			}
		  printf("ruhsh = %d\n", rush);
		  rush += 1;

		}
		printf("You can become a person who you want definately!\n ");
		return 0;
}
