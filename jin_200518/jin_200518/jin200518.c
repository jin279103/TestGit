
#include "Sorting.h"

#include "input.h"

#include "printing_list.h"

#include "file.h"



int main()

{

	Student list[6];

	input(list);

	print_list(list);

	Sorting(list);

	print_list(list);

	file(list);

	return 0;

}

