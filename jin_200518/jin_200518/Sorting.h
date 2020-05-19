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

		printf("\n정렬 기준을 선택해주세요.\n1:팀ID 2:팀이름 3:회사명 ");

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

			printf("잘못된 이니셜을 입력하였습니다.\n다시 입력해주세요.\n");

		}

	} while (!(Select == 1 || Select == 3 || Select == 5));



	while (1)
	{

		printf("1:오름차순 2:내림차순 ");

		scanf("%d", &sorting_select);

		if (sorting_select >= 1 && sorting_select <= 2)

			break;

		printf("잘못된 이니셜을 입력하였습니다.\n다시 입력해주세요.\n");

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
