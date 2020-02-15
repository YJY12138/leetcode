#include<stdc++.h>
using namespace std;
int tmp[10000] = { 0 };

void quick_sort(int q[], int left, int right)
{
	if (left >= right)return;
	int mid = left + right >> 1;
	int i = left-1, j = right+1;
	while (i < j)
	{
		do i++; while (q[i] < q[mid]);
		do j--;  while (q[j] > q[mid]);
		if (i < j)swap(q[i], q[j]);
	}
	quick_sort(q, left, mid);
	quick_sort(q, mid + 1, right);
}
void merge_sort(int  q[],int left,int right)
{
	if (left >= right)return;
	int mid = (left + right) / 2;
	cout << mid << endl;
	merge_sort(q, left, mid);
	merge_sort(q, mid + 1, right);
	int i = left;
	int j = mid + 1;
	int k = 0;

	while (i <= mid && j <= right)
	{

		if (q[i] <= q[j]) { tmp[k] = q[i]; i++; k++; }
		else { tmp[k] = q[j]; k++; j++; }
	}
	while (i <= mid)tmp[k++] = q[i++];
	while (j<= right)tmp[k++] = q[j++];
	for (i = left, j = 0; i <=right; i++, j++)q[i] = tmp[j];//i<right出错
}
int main()
{
	
	int temp[9] = {-2,3,1,5,4,5,2,9,6 };
	int n = sizeof(temp) / sizeof(temp[0]);
	//quick_sort(temp, 0, 8);
	merge_sort(temp, 0, n-1);
	for (int i = 0; i < n; i++)printf("%d,", temp[i]);
}