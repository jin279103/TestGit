#include "header.h"

int main()
{
	Student list[LIST_MAX];

	CSV_Input(list);
	
	while (true)
	{
		int select;
		printf("\n���ϴ� �׸��� �����ϼ���.(0�� �Է½� ����˴ϴ�.)\n1.����˻�  2.��������˻� 3.�̸��˻� 4.�б��˻�  ");
		scanf("%d", &select);
		if (select == 0) break;
		
		switch (select)
		{
		case 1:
			search_leader(list);
			break;
		case 2:
			search_company(list);
			break;
		case 3:
			search_name(list);
			break;
		case 4:
			search_university(list);
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n�ٽ� �Է����ּ���.\n");
		}
	}

	return 0;
}