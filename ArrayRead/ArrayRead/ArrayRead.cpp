// ArrayRead.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[10];
	int readCount = 0;
	int readData;
	int i;

	while (true) {
		printf("자연수 입력: ");
		scanf_s("%d",&readData);
		if (readData < 1)
			break;

		arr[readCount++] = readData;
	}
	for (i = 0; i < readCount; i++)
		printf("%d ", arr[i]);

    return 0;
}

