#include<stdio.h>
#include<locale.h>
#include<math.h>

float L(int a, int b,int c,int d)
{
	float y;
	y = sqrt(pow(b - a, 2) + pow(d - c, 2));
	return y;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int x1, x2, x3, y1, y2, y3;
	float AB, BC, AC;
	float P, p;
	double S;
	printf("Координаты точки A:");
	scanf_s("%d%d", &x1, &y1);
	printf("Координаты точки B:");
	scanf_s("%d%d", &x2, &y2);
	printf("Координаты точки C:");
	scanf_s("%d%d", &x3, &y3);
	AB = L(x1, x2, y1, y2);
	BC = L(x2, x3, y2, y3);
	AC = L(x1, x3, y1, y3);
	P = AB + BC + AC;
	p = P / 2;
	S = sqrt(p * (p - AB) * (p - BC) * (p - AC));
	printf("Периметр треугольника равен: %.3lf\nПлощадь треугольника равна: %.3f",P,S);
	return 0;
}