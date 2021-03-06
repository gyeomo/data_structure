// BinarySearch.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;

	while (first <= last) {
		mid = (last + first) / 2;

		if (ar[mid] == target)
			return mid;
		else if (ar[mid] < target)
			first = mid + 1;
		else if (ar[mid] > target)
			last = mid - 1;
	}
	return -1;

}

int main()
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearch(arr, sizeof(arr)/sizeof(int),7);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d\n",idx);
	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d\n", idx);

    return 0;
}

