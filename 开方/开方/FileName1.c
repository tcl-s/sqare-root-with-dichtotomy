#include <stdio.h>
int main() {
	double a;
	double i = 0;
	printf("%s", "这是一个可以开方的程序，请输入被开方的数\n");
	scanf_s("%lf", &a);
	if (a < 0) {											//检查输入的数是否小于0
		printf("%s", "输入的为负数或输入的值超出范围");
	}
	else {
		while (i * i < a && (i + 1) * (i + 1) <= a) {		//先找到一个整数值，使sqrt(a)在这个整数值和下一个整数值之间
			i++;
		}
	}
	int c = 1;
	int d;
	printf("%s", "请输入迭代次数\n");
	scanf_s("%d", &d);
	double j;
	double k = 0.5;
	for (c; c < d; c++) { 									//使用二分法迭代计算sqrt(a)	
		j = i + k;
		if (j * j > a) {
			i = i;
		}
		else {
			i = j;
		}
		k = k / 2;
	}
	printf("%.14lf", i);									//输出结果，保留14位小数
	system("pause");
	return 0;
}