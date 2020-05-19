#include <stdio.h>
#include <math.h>
/*
int main(void)
{
	// example 5-1
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}

	printf("a : %d, b: %d\n", a, b);

	return 0;
	

	// example 5-2
	int a = 10;

	if (a >= 0)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}

	printf("a : %d\n", a);

	return 0;
	

	// example 5-3
	int a = 0, b = 0;
	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}

	printf("b : %d\n", b);

	return 0;
	

	// example 5-4
	int a = 20, b = 10;

	if (a > 10)
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
	
	
	// example 5-5
	int a = 10, b = 20;

	if (a < 0)
	{
		if (b > 0)
		{
			printf("ok");
		}
	}
	else
	{
		printf("ok");
	}

	return 0;
	

	// example 5-6
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
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
	
	
	// example 6-1
	int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
	

	// example 6-2
	int a = 1;
	int i;

	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
	

	// example 6-3
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);
	printf("a : %d\n", a);

	return 0;
	
	
	// example 6-4
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
	

	// example 6-5
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;

}
*/

int sum(int x, int y);
int get_num(void);
void print_char(char ch, int count);
void print_line(void);
void fruit(int i, int count);
void min_max_data(double* num_data);
void avg_data(double* num_data);
void stddev_data(double* num_data);

int main(void)
{
	/* example 7-1
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d\n", result);

	return 0;
	*/

	/* example 7-2
	int result;

	result = get_num();
	printf("반환값 : %d\n", result);
	return 0;
	*/

	/* example 7-3
	print_char('0', 5);

	return 0;
	*/

	/* example 7-4
	print_line();
	printf("학번        이름        전공        학점\n");
	print_line();

	return 0;
	*/

	/* example 7-6
	int count;

	printf("반복되는 횟수를 입력하시오 : ");
	scanf_s("%d", &count);

	fruit(1, count);

	return 0;
	*/

	/* example 8-1
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	printf("4번째 배열 값을 입력하시오 : ");
	scanf_s("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return 0;
	*/

	/* example 8-2
	int score[5];
	int i;
	int total = 0;
	double avg;

	printf("5과목의 점수를 입력하시오 : ");

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
	*/

	/* example 8-3
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	printf("5개의 점수를 입력하시오 : ");
	for (i = 0; i < count; i++)
	{
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count;

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
	*/

	/* example 8-4
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));
	printf("입력 후 문자열 : %s\n", str);

	return 0;
	*/

	/* example 8-5
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
	*/

	int i;
	double num_data[10];

	printf("10개의 실수 데이터를 입력하시오 : ");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%lf", &num_data[i]);
	}

	min_max_data(num_data);
	avg_data(num_data);
	stddev_data(num_data);
}

int sum(int x, int y)
{
	int temp;

	temp = x + y;

	return temp;
}

int get_num(void)
{
	int num;

	printf("양수 입력 : ");
	scanf_s("%d", &num);

	return num;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return;
}

void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

void fruit(int i, int count)
{
	printf("apple\n");
	if (i == count) return;
	i++;
	fruit(i, count);
}

void min_max_data(double* num_data)
{
	int i;
	int j;
	int temp_data;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (num_data[j] > num_data[j + 1])
			{
				temp_data = num_data[j];
				num_data[j] = num_data[j + 1];
				num_data[j + 1] = temp_data;
			}
			else
			{
				num_data[j] = num_data[j];
				num_data[j + 1] = num_data[j + 1];
			}
		}
	}

	printf("최대값 : %.1lf\n", num_data[9]);
	printf("최소값 : %.1lf\n", num_data[0]);

}

void avg_data(double* num_data)
{
	int i;
	double sum_data = 0;
	double avg=0;

	for (i = 0; i < 10; i++)
	{
		sum_data += num_data[i];
	}
	avg = sum_data / 10;

	printf("평균값 : %.1lf\n", avg);

}

void stddev_data(double* num_data)
{
	int i;
	double sum_data = 0;
	double avg = 0;
	double var_data = 0;
	double stddev = 0;

	for (i = 0; i < 10; i++)
	{
		sum_data += num_data[i];
	}
	avg = sum_data / 10;

	for (i = 0; i < 10; i++)
	{
		var_data += (avg - num_data[i]) * (avg - num_data[i]);
	}
	stddev = sqrt(var_data / 10);

	printf("표준편차 : %.1lf\n", stddev);
}