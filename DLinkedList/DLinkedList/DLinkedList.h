#pragma once
#ifndef __D_LINKED_LIST__
#define __D_LINKED_LIST__

#define FALSE	0
#define TRUE	1

typedef int LData;

typedef struct _node
{
	LData data;
	struct _node * next;
}Node;

typedef struct _linkedList
{
	Node * head;
	Node * cur;
	Node * before;
	int numOfData;
	int(*comp)(LData d1, LData d2);
} LinkedList;

typedef LinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, LData pdata);

int LFirst(List * plist, LData *pdata);
int LNext(List * plist, LData *pdata);

LData LRemove(List * plist);
int LCount(List * plist);

void setSortRule(List * plist, int(*comp)(LData d1, LData d2));
#endif