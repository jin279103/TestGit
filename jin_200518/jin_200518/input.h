#include "structure.h"

#ifndef _INPUT_H_
#define _INPUT_H_

void input(Student* list)
{
	for (int i = 0; i < 6; i++)
	{
		printf("%d 번째 팀의 정보를 입력하시오 :  \n", i + 1);

		//팀 ID 입력
		printf("%팀 ID : ");
		scanf_s("%d", &list[i].id);

		//팀 이름 입력
		printf("팀 이름 : ");
		scanf("%s", &list[i].teamname);

		//회사 이름 입력
		printf("%회사 이름 : ");
		scanf("%s", &list[i].company);

		printf("\n");

	}
}

#endif
