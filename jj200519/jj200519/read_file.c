#include "jin.h"

void readfile(void)
{
	char* buffer1;
	int size;
	int i = 0;
	char* ptr;
	char* sArr[2000] = { 0, };

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
	for (int i = 0; i < size; i++)
	{
		sArr[i] = ptr;
		i++;
		ptr = strtok(NULL, ",");
	}

	fclose(fp);    //���� ������ �ݱ�

	free(buffer1);  //���� �޸� ����

}