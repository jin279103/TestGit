#include "structure.h"



#ifndef _SORTING_H_

#define _SORTING_H_



int id_cmp1(const void* a, const void* b)

{

	const Student* one = (const Student*)a;

	const Student* two = (const Student*)b;



	if (one->id < two->id)

		return -1;

	if (one->id > two->id)

		return 1;

	return 0;

}



int id_cmp2(const void* a, const void* b)

{

	const Student* one = (const Student*)a;

	const Student* two = (const Student*)b;



	if (one->id < two->id)

		return 1;

	if (one->id > two->id)

		return -1;

	return 0;

}



int teamname_cmp1(const void* a, const void* b)

{

	const Student* one = (const Student*)a;

	const Student* two = (const Student*)b;



	return strcmp(one->teamname, two->teamname);

}



int teamname_cmp2(const void* a, const void* b)

{

	const Student* one = (const Student*)a;

	const Student* two = (const Student*)b;



	return (strcmp(one->teamname, two->teamname) * -1);

}



int company_cmp1(const void* a, const void* b)

{

	const Student* one = (const Student*)a;

	const Student* two = (const Student*)b;



	return strcmp(one->company, two->company);

}



int company_cmp2(const void* a, const void* b)

{

	const Student* one = (const Student*)a;

	const Student* two = (const Student*)b;



	return (strcmp(one->company, two->company) * -1);

}



void Sorting(Student* list)

{

	int Select, sorting_select;



	do {

		printf("\n���� ������ �������ּ���.\n1:��ID 2:���̸� 3:ȸ��� ");

		scanf("%d", &Select);

		switch (Select)

		{

		case 1:

			break;

		case 2:

			Select = 3;

			break;

		case 3:

			Select = 5;

			break;

		default:

			printf("�߸��� �̴ϼ��� �Է��Ͽ����ϴ�.\n�ٽ� �Է����ּ���.\n");

		}

	} while (!(Select == 1 || Select == 3 || Select == 5));



	while (1)
	{

		printf("1:�������� 2:�������� ");

		scanf("%d", &sorting_select);

		if (sorting_select >= 1 && sorting_select <= 2)

			break;

		printf("�߸��� �̴ϼ��� �Է��Ͽ����ϴ�.\n�ٽ� �Է����ּ���.\n");

	}



	switch (Select + sorting_select - 1)

	{

	case 1:

		qsort(list, 6, sizeof(Student), id_cmp1);

		break;

	case 2:

		qsort(list, 6, sizeof(Student), id_cmp2);

		break;

	case 3:

		qsort(list, 6, sizeof(Student), teamname_cmp1);

		break;

	case 4:

		qsort(list, 6, sizeof(Student), teamname_cmp2);

		break;

	case 5:

		qsort(list, 6, sizeof(Student), company_cmp1);

		break;

	case 6:

		qsort(list, 6, sizeof(Student), company_cmp2);

		break;

	}

}



#endif
