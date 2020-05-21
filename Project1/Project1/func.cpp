#include "header.h"


void CSV_Input(Student* list)
{
	FILE* fp;
	int i{ 0 };
	char buffer[50000]{ 0, };
	char* ptr = NULL;

	fp = fopen("C:\\result\\����� ������ ���_�ѱ�ǥ����ȸ.csv", "r");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}
	fgets(buffer, sizeof(buffer), fp);

	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		ptr = strtok(buffer, ",");
		if (strcmp("����", ptr) == 0)
		{
			list[i].leader_flag = 1;
			ptr = strtok(NULL, ",");
			strcpy(list[i].company_name, ptr);
		}
		else
			strcpy(list[i].company_name, ptr);
		ptr = strtok(NULL, ",");
		strcpy(list[i].name, ptr);
		ptr = strtok(NULL, ",");
		strcpy(list[i].email, ptr);
		ptr = strtok(NULL, ",");
		if (ptr[0] == '"')
			except(ptr, list[i].unversity);
		else
			strcpy(list[i].unversity, ptr);
		ptr = strtok(NULL, ",");
		strcpy(list[i].major, ptr);
	
		i++;
	}
	fclose(fp);
}

void search_leader(Student* list)
{
	int i;
	char search_name[10]{ 0, }, searched_company_name[COMPANY_NAME_MAX]{ 0, }, timestr[30]{ 0, };
	time_t t;
	FILE* fp;

	fp = fopen(MASTER_PATH, "a");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}

	printf("�̸��� �Է����ּ��� : ");
	scanf("%s", search_name);
	printf("\n");

	for (i = 0; i < LIST_MAX; i++)
	{
		if (strcmp(list[i].name, search_name) == 0)
		{
			if (list[i].leader_flag == 1)
			{
				strcpy(searched_company_name, list[i].company_name);
				break;
			}
		}
	}

	if (strlen(searched_company_name) == 0)
	{
		printf("������ �ƴմϴ�.\n");
		return;
	}

	for (; i < LIST_MAX; i++)
	{
		if (strcmp(searched_company_name, list[i].company_name) != 0)
			break;

		t = time(NULL);
		strcpy(timestr, ctime(&t));
		timestr[strlen(timestr) - 1] = '\0';
		fprintf(fp, timestr);

		if (list[i].leader_flag == 1) 
		{ 
			printf("  ����  ");
			fprintf(fp, "  ����  ");
		}
		else
		{
			printf("  ����  ");
			fprintf(fp, "  ����  ");
		}

		printf(OUTPUT_FORM,
			list[i].company_name, list[i].name, list[i].email, list[i].unversity, list[i].major);
		fprintf(fp,OUTPUT_FORM,
			list[i].company_name, list[i].name, list[i].email, list[i].unversity, list[i].major);
	}
	fclose(fp);
	printf("\n");
}

void search_company(Student* list)
{
	int i{ 0 };
	char search_company_name[COMPANY_NAME_MAX]{ 0, }, timestr[30]{ 0, };
	time_t t;
	FILE* fp;

	fp = fopen(MASTER_PATH, "a");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}


	printf("\nã���� �ϴ� ������� �Է����ּ���. : ");
	scanf("%s", search_company_name);
	printf("\n");

	for (i = 0; i < LIST_MAX; i++)
		if (strcmp(list[i].company_name, search_company_name) == 0)
			break;

	if (i >= LIST_MAX)
	{
		printf("�ش� ������� �������� �ʽ��ϴ�.\n");
		return;
	}

	for (; i < LIST_MAX; i++)
	{
		if (strcmp(search_company_name, list[i].company_name) != 0)
			break;

		t = time(NULL);
		strcpy(timestr, ctime(&t));
		timestr[strlen(timestr) - 1] = '\0';
		fprintf(fp, timestr);

		if (list[i].leader_flag == 1)
		{
			printf("  ����  ");
			fprintf(fp, "  ����  ");
		}
		else
		{
			printf("  ����  ");
			fprintf(fp,"  ����  ");
		}
		printf(OUTPUT_FORM,
			list[i].company_name, list[i].name, list[i].email, list[i].unversity, list[i].major);
		fprintf(fp, OUTPUT_FORM,
			list[i].company_name, list[i].name, list[i].email, list[i].unversity, list[i].major);
	}

	fclose(fp);
}

void search_name(Student* list)
{
	int i{ 0 };
	char search_name[NAME_MAX]{ 0, }, timestr[30]{ 0, };
	time_t t;
	FILE* fp;

	fp = fopen(MASTER_PATH, "a");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}

	printf("\nã���� �ϴ� �̸��� �Է����ּ���. : ");
	scanf("%s", search_name);
	printf("\n");

	for (i = 0; i < LIST_MAX; i++)
	{
		if (strcmp(list[i].name, search_name) == 0)
			break;
	}

	if (i >= LIST_MAX)
	{
		printf("�ش� �̸��� �������� �ʽ��ϴ�.\n");
		return;
	}

	t = time(NULL);
	strcpy(timestr, ctime(&t));
	timestr[strlen(timestr) - 1] = '\0';
	fprintf(fp, timestr);

	if (list[i].leader_flag == 1)
	{
		printf("  ����  ");
		fprintf(fp,"  ����  ");
	}
	else
	{
		printf("  ����  ");
		fprintf(fp,"  ����  ");
	}
	printf(OUTPUT_FORM,
		list[i].company_name, list[i].name, list[i].email, list[i].unversity, list[i].major);
	fprintf(fp,OUTPUT_FORM,
		list[i].company_name, list[i].name, list[i].email, list[i].unversity, list[i].major);

	fclose(fp);
}

void search_university(Student* list)
{
	bool flag{ false };
	char search_university[UNIVERSITY_MAX]{ 0, }, timestr[30]{ 0, };
	time_t t;
	FILE* fp;

	fp = fopen(MASTER_PATH, "a");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}

	printf("\nã���� �ϴ� ���и��� �Է����ּ���. : ");
	scanf("%s", search_university);
	printf("\n");

	for (int i = 0; i < LIST_MAX; i++)
	{
		if (strcmp(list[i].unversity, search_university) == 0)
		{
			flag = true;

			t = time(NULL);
			strcpy(timestr, ctime(&t));
			timestr[strlen(timestr) - 1] = '\0';
			fprintf(fp, timestr);

			if (list[i].leader_flag == 1)
			{
				printf("  ����  ");
				fprintf(fp,"  ����  ");
			}
			else
			{
				printf("  ����  ");
				fprintf(fp,"  ����  ");
			}
			printf(OUTPUT_FORM,
				list[i].company_name, list[i].name, list[i].email, list[i].unversity, list[i].major);
			fprintf(fp,OUTPUT_FORM,
				list[i].company_name, list[i].name, list[i].email, list[i].unversity, list[i].major);
		}
	}

	fclose(fp);

	if (flag == false)
		printf("�ش� ���и��� �������� �ʽ��ϴ�.\n");
}

void except(char* start, char* destination)
{
	while (true)
	{
		strcat(destination, start);
		destination[strlen(destination)] = ',';
		start = strtok(NULL, ",");
		if (start[strlen(start) - 1] == '"')
		{
			strcat(destination, start);
			break;
		}
	}
}