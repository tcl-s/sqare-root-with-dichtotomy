#include <stdio.h>
int main() {
	double a;
	double i = 0;
	printf("%s", "����һ�����Կ����ĳ��������뱻��������\n");
	scanf_s("%lf", &a);
	if (a < 0) {											//�����������Ƿ�С��0
		printf("%s", "�����Ϊ�����������ֵ������Χ");
	}
	else {
		while (i * i < a && (i + 1) * (i + 1) <= a) {		//���ҵ�һ������ֵ��ʹsqrt(a)���������ֵ����һ������ֵ֮��
			i++;
		}
	}
	int c = 1;
	int d;
	printf("%s", "�������������\n");
	scanf_s("%d", &d);
	double j;
	double k = 0.5;
	for (c; c < d; c++) { 									//ʹ�ö��ַ���������sqrt(a)	
		j = i + k;
		if (j * j > a) {
			i = i;
		}
		else {
			i = j;
		}
		k = k / 2;
	}
	printf("%.14lf", i);									//������������14λС��
	system("pause");
	return 0;
}