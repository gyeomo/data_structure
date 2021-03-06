// LinkedRead.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node * next;
}Node;

int main()
{
	Node * head = NULL;
	Node * tail = NULL;
	Node * cur = NULL;

	Node * newNode;

	int readData;
	int i;

	head = (Node *)malloc(sizeof(Node));
	tail = head;

	while (true) {
		printf("자연수 입력 : ");
		scanf_s("%d", &readData);

		if (readData < 1)
			break;
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		/*if (head == NULL)
			head = newNode;
		else*/
			tail->next = newNode;

		tail = newNode;
	}
	printf("\n");
	if (head == tail)
		printf("저장된 자연수가 존재하지 않습니다.\n");
	else {
		cur = head;
		//printf("%d ", cur->data);

		while (cur->next != NULL) {
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}

	printf("\n\n");

	if (head == tail)
		return 0;
	else {
		Node * delNode = head;
		Node * delNextNode = head->next;
	//	printf("%d을 삭제합니다.\n", head->data);
	//	free(delNode);

		while (delNextNode != NULL) {
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d을 삭제합니다.\n", delNode->data);
			free(delNode);
		}
	}

	return 0;
}

