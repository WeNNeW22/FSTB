//下标引用操作符
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("%d\n", arr[6]);//下标引用操作符,此处打印第七个数。

	return 0;
}