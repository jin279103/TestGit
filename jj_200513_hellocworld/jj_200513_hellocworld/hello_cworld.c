#include <stdio.h>

int main(void) {
	/*
	int num = 10;
	float fnum = 8.5;
	double dnum = 8.5;

	int arr1[5] = {0, };
	int arr2[5];
	

	char f1[6] = { 'a', 'p', 'p', 'l', 'e' };
	char f2[6] = "apple";
	char* str = "apple";


	printf("%s\n", str);
	printf("%s\n", f1);

	printf("%d", num);
	

	int a = 10;
	int b = 12;

#if 0
	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);
#else
	int result_bitAnd = a & b;
	int result_bitExor = a ^ b;
	int result_bitOr = a | b;
	int result_bitComple = ~a;
	int result_bitLeft = a << 1;
	int result_bitRight = a >> 2;

	printf("a & b : %d\n", result_bitAnd);
	printf("a ^ b : %d\n", result_bitExor);
	printf("a | b : %d\n", result_bitOr);
	printf("~a : %d\n", result_bitComple);
	printf("a << 1 : %d\n", result_bitLeft);
	printf("a >> 2 : %d\n", result_bitRight);
#endif
	return 0;
*/

	int rank = 2, m = 0;
	
	switch (rank)
	{
	case 1:
		m = 3000;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("m: %d\n", m);
	
	return 0;
}