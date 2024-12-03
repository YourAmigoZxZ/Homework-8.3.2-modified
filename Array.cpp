#include "Array.h"

Array::Array(int size_p, int* arr_p) : size{ size_p }, arr{ new int [size] }
{
	if (arr_p)
	{
		for (int i{ 0 }; i < size; i++)
		{
			arr[i] = arr_p[i];
		}
	}
}

Array::Array(const Array& array) : size{ array.size }, arr{ new int[size] }
{
	for (int i{ 0 }; i < size; i++)
	{
		arr[i] = array.arr[i];
	}
}

Array::Array(Array&& array) : size{ array.size }, arr{ array.arr }
{
	array.arr = nullptr;
	array.size = 0;
}

void Array::set_arr(int* arr_p, int size_p)
{
	if (arr)
	{
		delete[] arr;
	}
	
	arr = new int[size];
	for (int i{ 0 }; i < size; i++)
	{
		arr[i] = arr_p[i];
	}
}
void Array::set_size(int size_p)
{
	size = size_p;

	delete[] arr;
	arr = new int[size];
}

void Array::print() const
{
	for (int i{ 0 }; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
}

void Array::randomize()
{
	for (int i{ 0 }; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

//Array& Array::operator=(Array&& array)
//{
//	if (this != &array)
//	{
//		delete[] arr;
//
//		arr = array.arr;
//		size = array.size;
//		array.arr = nullptr;
//		array.size = 0;
//	}
//
//	return *this;
//}