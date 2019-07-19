#include "QuickSort.h"
#include <iostream>

QuickSort::QuickSort(vector<int>&data)
{
	this->quickSort(data, 0, data.size() - 1);
}

int QuickSort::partition(vector<int> &data, int left, int right)
{
	int pivot = data[(left + right) / 2];
	while (left <= right)
	{
		while (data[left] < pivot)
			left++;
		while (data[right] > pivot)
			right--;

		if (left <= right)
		{
			swap(data[left], data[right]);
			left++;
			right--;
			}
	}
	return left;
}

void QuickSort::quickSort(vector<int>&data, int left, int right)
{
	int index = this->partition(data, left, right);

	if (left < index - 1)
		this->quickSort(data, left, index - 1);
	if (right > index)
		this->quickSort(data, index, right);
}