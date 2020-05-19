#include "structure.h"

#ifndef _FILE_H_
#define _FILE_H_

void file(Student* list)
{
	FILE* wfp = fopen("c:\\Users\\USER\\megaton.txt", "w");


	for (int i = 0; i < 6; i++)
	{
		fprintf(wfp, "%5d %15s %15s\n", list[i].id, list[i].teamname, list[i].company);
	}
	
	fclose(wfp);
}




#endif