//#include<stdio.h>
//// ��Fahrenheit = 0��20��...��300ʱ���ֱ��ӡ���ϡ������¶ȶ��ձ�
//main()
//{
//	int Fahrenheit, Celsius;
//	int Lower, Upper, Step;
//
//	Lower = 0;//�¶ȵ�����
//	Upper = 300;//�¶ȵ�����
//	Step = 20;//����
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
//// ��Fahrenheit = 0��20��...��300ʱ���ֱ��ӡ���ϡ������¶ȶ��ձ�
//main()
//{
//	double Fahrenheit, Celsius;
//	double Lower, Upper, Step;
//
//	Lower = 0;//�¶ȵ�����
//	Upper = 300;//�¶ȵ�����
//	Step = 20;//����
//
//	Fahrenheit = Lower;
//	while (Fahrenheit <= Upper) {
//		Celsius = 5 * (Fahrenheit - 32) / 9;
//		printf("%f\t%f\n", Fahrenheit, Celsius);////���к����λС��
//		Fahrenheit = Fahrenheit + Step;
//	}
//
//}

//#include<stdio.h>
//// ��Fahrenheit = 0��20��...��300ʱ���ֱ��ӡ���ϡ������¶ȶ��ձ�
//main()
//{
//	float Fahrenheit, Celsius;
//	float Lower, Upper, Step;
//
//	Lower = 0.0;//�¶ȵ�����
//	Upper = 300.0;//�¶ȵ�����
//	Step = 20.0;//����
//
//	Fahrenheit = Lower;
//	while (Fahrenheit <= Upper) {
//		Celsius = 5 * (Fahrenheit - 32) / 9;
//		printf("%f\t%f\n", Fahrenheit, Celsius);//���к����λС��
//		Fahrenheit = Fahrenheit + Step;
//	}
//
//}
//
//
#include<stdio.h>
// ��Fahrenheit = 0��20��...��300ʱ���ֱ��ӡ���ϡ������¶ȶ��ձ�
main()
{
	float Fahrenheit, Celsius;
	float Lower, Upper, Step;

	Lower = 0;//�¶ȵ�����
	Upper = 300;//�¶ȵ�����
	Step = 20;//����

	Fahrenheit = Lower;
	while (Fahrenheit <= Upper) {
		Celsius = 5 * (Fahrenheit - 32) / 9;
		//printf("%15.2f\t%15.2f\n", Fahrenheit, Celsius);//���к����λС��

		Fahrenheit = Fahrenheit + Step;
	}

}







