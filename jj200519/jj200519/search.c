#include "jin.h"

void search(StudentData* list)
{
	int searchnum;
	int company;
	char name[10] = { 0, };
	char school[10] = { 0, };

	while (1)
	{
		printf("\n");
		printf("�˻� ������ �����Ͻÿ�(1: ����, 2: �������, 3: �̸�, 4: �б�, 0: ����) :  ");
		scanf_s("%d", &searchnum);
		printf("\n");

		if (searchnum == 1)
		{
			for (int i = 0; i < 30; i++)
			{
				if (strcmp("����", list[i].leader) == 0)
				{
					printf("\n");
					printf("%10s %15s %10s %25s %15s %20s %15s \n", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major);
					//printf("\n");
				}
			}
			
		}
		else if (searchnum == 2)
		{
			printf("��������� �����ϼ���(1: ���̾�����, 2: ��Ű����Ʈ, 3: �ް���Ŭ����, 4: �ʵ�ٳ�, 5: ����, 6: 5Works) : ");
			scanf("%d", &company);
			printf("\n");
			for (int i = 0; i < 30; i++)
			{
				if (company == 1 && strcmp("���̾�����", list[i].company) == 0)
				{
					printf("\n");
					printf("%10s %15s %10s %25s %15s %20s %15s\n", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major);
				}
				else if (company == 2 && strcmp("��Ű����Ʈ", list[i].company) == 0)
				{
					printf("\n");
					printf("%10s %15s %10s %25s %15s %20s %15s\n", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major);
				}
				else if (company == 3 && strcmp("�ް���Ŭ����", list[i].company) == 0)
				{
					printf("\n");
					printf("%10s %15s %10s %25s %15s %20s %15s\n", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major);
				}
				else if (company == 4 && strcmp("�ʵ�ٳ�", list[i].company) == 0)
				{
					printf("\n");
					printf("%10s %15s %10s %25s %15s %20s %15s\n", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major);
				}
				else if (company == 5 && strcmp("����", list[i].company) == 0)
				{
					printf("\n");
					printf("%10s %15s %10s %25s %15s %20s %15s\n", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major);
				}
				else if (company == 6 && strcmp("5Works", list[i].company) == 0)
				{
					printf("\n");
					printf("%10s %15s %10s %25s %15s %20s %15s\n", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major);
				}
			}
		}
		else if (searchnum == 3)
		{
			printf("ã���� �ϴ� �л��� �̸��� �Է��Ͻÿ� : ");
			scanf("%s", &name);
			printf("\n");
			for (int i = 0; i < 30; i++)
			{
				if (strcmp(list[i].name, name) == 0)
				{
					printf("%s %s %s %s %s %s %s\n ", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major);
				}
			}
		}
		else if (searchnum == 4)
		{
			printf("ã���� �ϴ� ���б��� �̸��� �Է��Ͻÿ� : ");
			scanf("%s", &school);
			printf("\n");
			for (int i = 0; i < 30; i++)
			{
				if (strcmp(list[i].school, school) == 0)
				{
					printf("%s %s %s %s %s %s %s\n ", list[i].leader, list[i].company, list[i].name, list[i].email, list[i].school, list[i].major);
				}
			}
		}
		else if (searchnum == 0)
		{
			break;
		}
	}

}