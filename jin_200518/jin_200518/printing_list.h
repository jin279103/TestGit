
#include "structure.h"



#ifndef _PRINTING_LIST_H_

#define _PRINTING_LIST_H_







void print_list(Student* lp)

{

	int i;

	printf("__________________________________________\n");

	for (i = 0; i < 6; i++)

	{

		printf("%5d%15s%20s\n",

			(lp + i)->id, (lp + i)->teamname, (lp + i)->company);

	}

}





#endif
