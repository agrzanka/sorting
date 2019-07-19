#include<iostream>
#include "QuickSort.h"

int partition(vector<int> &data, int left, int right)
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

void quickSort(vector<int>&data, int left, int right)
{
	int index = partition(data, left, right);

	if (left < index - 1)
		quickSort(data, left, index - 1);
	if (right > index)
		quickSort(data, index, right);
}

int main()
{
	vector<int> data { 7, 8, 2, 3, 10, 55, 76, 89, 19, 11, 13, 15, 6, 5, 1, 12 };

	//quickSort(data, 0, data.size() - 1);

	QuickSort qs(data);
	
	system("PAUSE");
}

