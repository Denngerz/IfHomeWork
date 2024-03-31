#include "ifTasks.h"
#include <cmath>
#include <iostream>

float ifTasks::ifTask1(float a){
	if (a > 0) {
		a++;
	}
	std::cout << a;
	return a;
}

float ifTasks::ifTask2(float a) {
	if (a > 0) {
		a++;
	}
	else {
		a -= 2;
	}
	std::cout << a;
	return a;
}

float ifTasks::ifTask3(float a) {
	if (a > 0) {
		a++;
	}
	else if (a == 10) {
		a = 10;
	}
	else {
		a -= 2;
	}
	std::cout << a;
	return a;
}

float ifTasks::ifTask4(float a, float b, float c) {
	float number = 0;
	if (a > 0) {
		number++;
	}
	else if (b > 0) {
		number++;
	}
	else if (c > 0) {
		number++;
	}
	return number;
}

float ifTasks::ifTask5(float a, float b, float c) {
	float number = 0;
	if (a > 0) {
		number++;
	}
	else if (b > 0) {
		number++;
	}
	else if (c > 0) {
		number++;
	}
	std::cout << number << std::endl;
	std::cout << 3 - number << std::endl;
	return number;
}

void ifTasks::ifTask8(float a, float b) {
	if (a > b) {
		std::cout << a << " " << b << std::endl;
	}
	else {
		std::cout << b << " " << a << std::endl;
	}
}

void ifTasks::ifTask9(float a, float b) {
	if (b > a) {
		float temp;
		temp = a;
		a = b;
		b = temp;
	}
	std::cout << a << " " << b << std::endl;
}

void ifTasks::ifTask10(float a, float b) {
	if (a == b) {
		a = 0;
		b = 0;
	}
	else {
		float sum = a + b;
		a += sum;
		b += sum;
	}
	std::cout << a << " " << b << std::endl;
}

float ifTasks::ifTask12(float a, float b, float c) {
	if (a <= b && a <= c) {
		return a;
	}
	if (b <= a && b <= c) {
		return b;
	}
	else {
		return c;
	}
}

float ifTasks::ifTask13(float a, float b, float c) {
	if (a <= b && a >= c || a >= b && a <= c) {
		return a;
	}
	if (b <= a && b <= c || b >= a && b <= c) {
		return b;
	}
	else {
		return c;
	}
}

float ifTasks::ifTask15(float a, float b, float c) {
	if (a <= b && a <= c) {
		return b + c;
	}
	if (b <= a && b <= c) {
		return a + c;
	}
	else {
		return b + a;
	}
}

void ifTasks::ifTask17(float a, float b, float c) {
	if (c - b == b - a || a - b == b - c) {
		a *= 2;
		b *= 2;
		c *= 2;
	}
	else {
		a = -a;
		b = -b;
		c = -c;
	}
	std::cout << a << " " << b << " " << c << std::endl;
}

float ifTasks::ifTask19(float a, float b, float c, float d) {
	if (a != b && a != c) {
		return 1;
	}
	else if (b != a && b != c) {
		return 2;
	}
	else if (c != d && c != a) {
		return 3;
	}
	else {
		return 4;
	}
}

float ifTasks::ifTask20(float a, float b, float c) {
	if (b - a >= c - a) {
		return c;
	}
	else {
		return b;
	}
}

float ifTasks::ifTask22(float x, float y) {
	if (x > 0 && y > 0) {
		return 1;
	}
	if (x < 0 && y > 0) {
		return 2;
	}
	if (x < 0 && y < 0) {
		return 3;
	}
	else {
		return 4;
	}
}

void ifTasks::ifTask23(float x1, float y1, float x2, float y2, float x3, float y3) {
	float x4, y4;
	if (x1 == x2 && y1 == y3) {
		y4 = y2;
		x4 = x3;
	}
	if (x1 == x3 && y1 == y2) {
		y4 = y3;
		x4 = x2;
	}
	if (x2 == x1 && y2 == y3) {
		y4 = y1;
		x4 = x3;
	}
	if (x2 == x3 && y2 == y1) {
		y4 = y3;
		x4 = x1;
	}
	if (x3 == x1 && y3 == y2) {
		y4 = y1;
		x4 = x2;
	}
	if (x3 == x2 && y3 == y1) {
		y4 = y2;
		x4 = x1;
	}
	std::cout << x4 << " " << y4 << std::endl;
}

float  ifTasks::ifTask24(float x) {
	float result;
	x > 0 ? result = 2 * sin(x) : result = 6 - x;
	return result;
}

float  ifTasks::ifTask25(float x) {
	float result;
	x > 2 || x < -2 ? result = 2 * x : result = -3 * x;
	return result;
}

float  ifTasks::ifTask26(float x) {
	float result;
	x <= 0 ? result = -x : (x > 0 && x < 2 ? result = x*x : result = 4);
	return result;
}

float  ifTasks::ifTask27(float x) {
	double result;
	int a = floor(x);
	x < 0 ? result = 0 : (a % 2 == 0 ? result = 1 : result = -1);
	return result;
}

int  ifTasks::ifTask28(int x) {
	return (x % 400 == 0 || x % 4 == 0 && x % 100 != 0) ? 366 : 365;
}

void  ifTasks::ifTask29(int x) {
	if (x < 0) {
		std::cout << "Less than zero, ";
	}
	else if (x == 0) {
		std::cout << "Zero";
		return;
	}
	else {
		std::cout << "Bigger than zero, ";
	}

	if (x % 2 == 0 ) {
		std::cout << "even." << std::endl;
	}
	else {
		std::cout << "odd." << std::endl;
	}
}

void  ifTasks::ifTask30(int x) {
	if (x < 10) {
		std::cout << "One digit, ";
	}
	else if (x >= 10 && x < 100) {
		std::cout << "Two digit, ";
	}
	else {
		std::cout << "Three digit, ";
	}

	if (x % 2 == 0) {
		std::cout << "even." << std::endl;
	}
	else {
		std::cout << "odd." << std::endl;
	}
}