#include "Ex05.h"
int *Size(int *array, int size)
{
	int *Array = new int[size * 2];
	for (int i = 0; i < size; i++)
	Array[i] = array[i];
	for (int i = size; i < size * 2; i++)
	Array[i] = 0;
	return Array;
}