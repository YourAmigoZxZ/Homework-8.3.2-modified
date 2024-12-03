#include "Array.h"

Array arr_maker(int size_p);

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	Array arr{ arr_maker(10) };
	arr.print();

	return 0;
}
