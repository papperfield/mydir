#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct struct1 {
	char a;
	double b;
	int c;
};

struct struct2 {
	char a;
	int c;
	double b;
};

int main(void) {
	struct struct1 S1;
	struct struct2 S2;

	printf("S1의 크기 :%d\n", sizeof(S1));
	printf("S2의 크기 :%d\n", sizeof(S2));
}