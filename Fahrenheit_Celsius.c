//#include<stdio.h>
//// 当Fahrenheit = 0，20，...，300时，分别打印华氏、摄氏温度对照表
//main()
//{
//	int Fahrenheit, Celsius;
//	int Lower, Upper, Step;
//
//	Lower = 0;//温度的下限
//	Upper = 300;//温度的上限
//	Step = 20;//步长
//
//	Fahrenheit = Lower;
//	while (Fahrenheit <= Upper) {
//		Celsius = 5 * (Fahrenheit - 32) / 9;
//		printf("%d\t%d\n", Fahrenheit, Celsius);
//		Fahrenheit = Fahrenheit + Step;
//	}
//
//}
//#include<stdio.h>
//// 当Fahrenheit = 0，20，...，300时，分别打印华氏、摄氏温度对照表
//main()
//{
//	double Fahrenheit, Celsius;
//	double Lower, Upper, Step;
//
//	Lower = 0;//温度的下限
//	Upper = 300;//温度的上限
//	Step = 20;//步长
//
//	Fahrenheit = Lower;
//	while (Fahrenheit <= Upper) {
//		Celsius = 5 * (Fahrenheit - 32) / 9;
//		printf("%f\t%f\n", Fahrenheit, Celsius);////运行后带六位小数
//		Fahrenheit = Fahrenheit + Step;
//	}
//
//}

//#include<stdio.h>
//// 当Fahrenheit = 0，20，...，300时，分别打印华氏、摄氏温度对照表
//main()
//{
//	float Fahrenheit, Celsius;
//	float Lower, Upper, Step;
//
//	Lower = 0.0;//温度的下限
//	Upper = 300.0;//温度的上限
//	Step = 20.0;//步长
//
//	Fahrenheit = Lower;
//	while (Fahrenheit <= Upper) {
//		Celsius = 5 * (Fahrenheit - 32) / 9;
//		printf("%f\t%f\n", Fahrenheit, Celsius);//运行后带六位小数
//		Fahrenheit = Fahrenheit + Step;
//	}
//
//}
//
//
#include<stdio.h>
// 当Fahrenheit = 0，20，...，300时，分别打印华氏、摄氏温度对照表
main()
{
	float Fahrenheit, Celsius;
	float Lower, Upper, Step;

	Lower = 0;//温度的下限
	Upper = 300;//温度的上限
	Step = 20;//步长

	Fahrenheit = Lower;
	while (Fahrenheit <= Upper) {
		Celsius = 5 * (Fahrenheit - 32) / 9;
		//printf("%15.2f\t%15.2f\n", Fahrenheit, Celsius);//运行后带两位小数

		Fahrenheit = Fahrenheit + Step;
	}

}







