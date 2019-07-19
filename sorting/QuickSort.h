#pragma once
#include <math.h>
#include <vector>
using namespace std;

class QuickSort {
	
	int partition(vector<int>&data, int left, int right);
	void quickSort(vector<int> &data, int left, int right);

public:
	QuickSort(vector<int> &data);
};