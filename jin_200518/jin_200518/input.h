#include "structure.h"

#ifndef _INPUT_H_
#define _INPUT_H_

void input(Student* list)
{
	for (int i = 0; i < 6; i++)
	{
		printf("%d ��° ���� ������ �Է��Ͻÿ� :  \n", i + 1);

		//�� ID �Է�
		printf("%�� ID : ");
		scanf_s("%d", &list[i].id);

		//�� �̸� �Է�
		printf("�� �̸� : ");
		scanf("%s", &list[i].teamname);

		//ȸ�� �̸� �Է�
		printf("%ȸ�� �̸� : ");
		scanf("%s", &list[i].company);

		printf("\n");

	}
}

#endif
