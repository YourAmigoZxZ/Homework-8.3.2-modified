#include "Array.h"

//Array* arr_maker(Array* Arrays, int& size)//Функция для прибавления новой строки в массив строк
//{
//	system("cls");
//
//	Array* new_Arrays = new Array[++size];
//
//	for (int i{ 0 }; i < size - 1; i++)
//	{
//		new_Arrays[i] = Arrays[i];
//	}
//	delete[] Arrays;
//
//	return new_Arrays;
//}

Array arr_maker(int size_p)
{
	Array arr{ size_p };
	arr.randomize();
	return arr;
}