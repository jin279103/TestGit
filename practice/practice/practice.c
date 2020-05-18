#include <stdio.h>

void swap(int* pa, int* pb);
void printf_ary(int* pa, int size);
void input_ary(double* pa, int size);
double find_max(double* pa, int size);
void my_gets(char* str, int size);
void assign(void);
void assign10(void);
void assign20(void);
void auto_func(void);
void static_func(void);
void add_ten(int *pa);
int* sum(int a, int b);

int a;

int main(void)
{
	//example 9-1
	/**********************************************
	int a;
	double b;
	char c;

	printf("int형 변수의 주소  : %u\n", &a);
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);

	return 0;
	**********************************************/

	//example 9-2
	/********************************************
	int a;
	int *pa;

	pa = &a;
	*pa = 10;

	printf("포인터로 a값 출력 : %d\n", *pa);
	printf("변수명으로 a값 출력 : %d\n", a);

	return 0;
	*******************************************/

	//example 9-3
	/******************************************
	int a = 10, b = 15, total;
	double avg;
	int *pa, *pb;
	int *pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;
	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
	******************************************/

	//example 9-4
	/*****************************************
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);

	return 0;
	******************************************/

	//example 9-5
	/*****************************************
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

	printf("char형 변수의 주소 크기 : %d\n", sizeof(pc));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(pi));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(pd));

	printf("char형 변수의 주소 크기 : %d\n", sizeof(*pc));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(*pi));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(*pd));

	return 0;
	******************************************/

	//example 9-6
	/******************************************
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;
	******************************************/

	//example 9-7
	/*****************************************
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
	******************************************/

	//example  10-1
	/*****************************************
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf_s("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}

	return 0;
	******************************************/

	//example 10-2
	/*****************************************
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
	*****************************************/

	//example 10-3
	/****************************************
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
	*****************************************/

	//example 10-4
	/******************************************
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb-pa : %u\n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
	********************************************/


	//example 10-6
	/*******************************************
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50,60, 70 };

	printf_ary(ary1, 5);
	printf("\n");
	printf_ary(ary2, 7);

	return 0;
	********************************************/

	//example 10-7
	/******************************************
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최대값 : %.1lf\n", max);

	return 0;
	*******************************************/

	//example 11-1
	/******************************************
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);

	return 0;
	********************************************/

	//example 11-2
	/******************************************
	char ch1, ch2;

	scanf_s("%c%c", &ch1, sizeof(ch1), &ch2, sizeof(ch2));

	printf("[%c%c]", ch1, ch2);

	return 0;
	******************************************/

	//example 11-3
	/*****************************************
	int ch;

	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');

	return 0;
	*****************************************/

	//example 11-4
	/***************************************
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf_s("%c", &ch);
		printf("%c", ch);
	}
	**************************************/

	//example 11-5
	/************************************
	int res;
	char ch;

	while (1)
	{
		res = scanf_s("%c", &ch);
		if (res == -1) break;
		printf("%d", ch);
	}

	return 0;
	************************************/

	//example 11-6
	/***********************************
	char str[7];

	my_gets(str, sizeof(str));
	printf("입력된 문자열 : %s\n", str);

	return 0;
	***********************************/

	//example 11-7
	/*********************************
	int num, grade;

	printf("학번 입력 : ");
	scanf_s("%d", &num);
	getchar();
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
	**********************************/

	//example 12-1
	/********************************
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

	return 0;
	********************************/

	//example 12-2
	/*******************************
	char* dessert = "apple";

	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s입니다.\n", dessert);

	return 0;
	********************************/

	//example 12-3
	/******************************
	char str[80];

	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));
	printf("첫 번째 단어 : %s\n", str);
	scanf_s("%s", str, sizeof(str));
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

	return 0;
	*******************************/

	//example 12-4
	/*********************************
	char str[80];

	printf("공백이 포함된 문다열 입력 : ");
	gets(str);
	printf("입력한 문자열은 %s입니다.", str);

	return 0;
	**********************************/

	//example 12-5
	/*********************************
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);

	printf("입력된 문자열은 %s입니다.\n", str);

	return 0;
	**********************************/

	//example 12-6
	/***********************************
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf_s("%d", &age, sizeof(age));

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
	************************************/

	//example 12-7
	/************************************
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
	************************************/

	//example 12-8
	/**********************************
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

	return 0;
	***********************************/

	//example 12-9
	/**********************************
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);

	printf("%s\n", str);

	return 0;
	***********************************/

	//example 12-10
	/**********************************
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
	**********************************/

	//example 12-11
	/*********************************
	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf_s("%s%s", str1, sizeof(str1), str2, sizeof(str2));
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp=str2;
	printf("이름이 긴 과일은 : %s\n", resp);

	return 0;
	***********************************/

	//example 12-12
	/***********************************
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);

	return 0;
	************************************/

	//example 13-1
	/***********************************
	auto int a = 0;

	assign();
	printf("main 함수 a : %d\n", a);

	return 0;
	************************************/

	//example 13-2
	/**********************************
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{
		int temp;

		temp = a;
		a = b;
		b = temp;
	}
	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
	**********************************/

	//example 13-3
	/*********************************
	printf("힘수 호출 전 a 값 : %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a);

	return 0;
	**********************************/

	//example 13-4
	/**********************************
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
	***********************************/

	//example 13-5
	/*********************************
	register int i;
	auto int sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
	*********************************/

	//example 13-7
	/********************************
	int a = 10;

	add_ten(&a);
	printf("a : %d\n", a);

	return 0;
	*********************************/

	//example 13-8
	/********************************
	int* resp;

	resp = sum(10, 20);
	printf("두 정수의 합 : %d\n", *resp);

	return 0;
	**********************************/

	//example 14-1
	/*********************************
	int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}
	return 0;
	*******************************/

	//example 14-2
	/******************************
	int num[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
	*********************************/

	//example 14-3
	/********************************
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++)
	{
		scanf_s("%s", animal[0], sizeof(animal));
	}

	for (i = 0; i < count; i++)
	{
		printf("%s", animal[i]);
	}
	return 0;
	**********************************/

	//example 14-4
	/*********************************
	char animal[5][10] = {
		{'d','o','g','\0'},
		{'t','i','g','e','r','\0'},
		{'r','a','b','b','i','t','\0'},
		{'h','o','r','s','e','\0'},
		{'c','a','t','\0'},
	};

	char animal2[][10] = { "dog","tiger","rabbit","horse","cat" };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal[i]);
	}
	return 0;
	*********************************/

	//example 14-5
	/*********************************
	int score[2][3][4] = {
		{{72, 80, 95, 60}, {68,93,83,90},{75,72,84,90}},
		{{66,85,90,88}, {95,92,88,95}, {43,72,56,75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d반 점수...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
	*********************************/

	//example 14-6
	/********************************
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
	*********************************/

	//example 14-7
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int* pary[3] = { ary1, ary2, ary3 };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void printf_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}

void input_ary(double* pa, int size)
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}

	return max;
}

void my_gets(char* str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\n';
}

void assign(void)
{
	int a;

	a = 10;
	printf("assign 함수 a : %d\n", a);
}

void assign10(void)
{
	a = 10;
}

void assign20(void)
{
	int a;

	a = 20;
}

void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;

	a++;
	printf("%d\n", a);
}

void add_ten(int *pa)
{
	*pa = *pa + 10;
}

int* sum(int a, int b)
{
	static int res;

	res = a + b;

	return &res;
}