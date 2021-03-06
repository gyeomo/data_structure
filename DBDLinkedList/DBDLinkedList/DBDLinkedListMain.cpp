// DBDLinkedList.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "DBDLinkedList.h"

int main()
{
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 1); LInsert(&list, 2);
	LInsert(&list, 3); LInsert(&list, 4);
	LInsert(&list, 5); LInsert(&list, 6);
	LInsert(&list, 7); LInsert(&list, 8);

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);

		printf("\n");
	}

	if (LFirst(&list, &data)) {
		if (data % 2 == 0)
			LRemove(&list);

		while (LNext(&list, &data)) {
			if (data % 2 == 0)
				LRemove(&list);
		}
	}

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);

		printf("\n");
	}
	return 0;
}

