//#include <stdio.h>
//int main() {
//	double a;
//	double i = 0;
//	printf("%s","这是一个可以开方的程序，请输入被开方的数\n");
//	scanf_s("%lf", &a);
//	if (a < 0) {
//		printf("%s", "Negative value");
//	}
//	else {
//		while (i * i < a && (i + 1) * (i + 1) <= a) {
//			i++;
//		}
//	}
//	int c=1;
//	int d;
//	printf("%s", "请输入迭代次数\n");
//	scanf_s("%d", &d);
//	double j;
//	double k = 0.5;
//	for (c; c < d; c++) {
//		j = i + k;
//		if (j * j > a) {
//			i = i;
//		}
//		else {
//			i = j;
//		}
//		k = k / 2;
//	}
//	printf("%.23lf", i);
//	/*system("pause");*/
//	return 0;
//}