#include "jin.h"

int main(void)
{
	char* buffer1;
	int size;
	int i = 0;
	char* ptr;
	
	StudentData list[30];

	FILE* fp = fopen("C:\\result\\����� ������ ���_�ѱ�ǥ����ȸ.csv", "r"); //�ش� ���� �б� ���� ����, ���� �����͸� ��ȯ
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	fseek(fp, 0, SEEK_END); //���� �����͸� ������ ������ �̵�
	size = ftell(fp);       //���� �������� ���� ��ġ�� ����
	
	buffer1 = malloc(size + 1);    //����ũ��+1 ����Ʈ(���ڿ� �������� NULL)��ŭ ���� �޸� �Ҵ�
	memset(buffer1, 0, size + 1);  //����ũ��+1 ����Ʈ��ŭ �޸𸮸� 0���� �ʱ�ȭ
	
	fseek(fp, 0, SEEK_SET);      //���� �����͸� ������ ó������ �̵� rewind(fp)
	fread(buffer1, size, 1, fp);  //���� ũ�⸸ŭ ���� ����

	printf("%s\n", buffer1); //����, ����ũ��, ���� Ƚ��

	ptr = strtok(buffer1, ",");
	while(ptr != NULL)
	{
		if (i != 0)
		{
			ptr = strtok(NULL, ",");
		}

		strcpy(list[i].leader, ptr);
		ptr = strtok(NULL, ",");
		strcpy(list[i].company, ptr);
		ptr = strtok(NULL, ",");
		strcpy(list[i].name, ptr);
		ptr = strtok(NULL, ",");
		strcpy(list[i].email, ptr);
		ptr = strtok(NULL, ",");
		strcpy(list[i].school, ptr);
		ptr = strtok(NULL, "\n");
		strcpy(list[i].major, ptr);

		i++;
	}
	
	fclose(fp);    //���� ������ �ݱ�

	free(buffer1);  //���� �޸� ����

	return 0;

}