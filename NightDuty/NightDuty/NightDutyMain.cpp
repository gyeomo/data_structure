// NightDuty.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "CLinkedList.h"
#include "Employee.h"
#include <stdlib.h>
#include <string.h>

Employee * WhosNightDuty(List * plist, char * name, int day) {
	Employee * ret;
	int i, num;
	num = LCount(plist);

	LFirst(plist, &ret);

	if (strcmp(ret->name, name) != 0) {
		for (i = 0; i < num - 1; i++) {
			LNext(plist, &ret);
			if (strcmp(ret->name, name) == 0)
				break;			
		}
		if (i >= num-1)
			return NULL;
	}
	

	for (i = 0; i < day; i++) {
		LNext(plist, &ret);
	}

	return ret;
}

void ShowEmployeeInfo(Employee * emp) {
	if (emp == NULL)
		printf("자료없음\n");
	else {
		printf("Employee name: %s \n", emp->name);
		printf("Employee number: %d \n\n", emp->empNum);
	}
}
int main()
{
	List list;
	int i;
	Employee * pemp;

	ListInit(&list);

	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 11111;
	strcpy_s(pemp->name,"Terry");
	LInsert(&list, pemp);

	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 2222;
	strcpy_s(pemp->name, "Jery");
	LInsert(&list, pemp);

	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 3333;
	strcpy_s(pemp->name, "Hary");
	LInsert(&list, pemp);

	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 4444;
	strcpy_s(pemp->name, "Sunny");
	LInsert(&list, pemp);

	char  pName1[10] = "Terry";
	pemp = WhosNightDuty(&list, pName1 , 3);
	ShowEmployeeInfo(pemp);

	char  pName2[10] = "Sunny";
	pemp = WhosNightDuty(&list, pName2, 15);
	ShowEmployeeInfo(pemp);
	
	if (LFirst(&list, &pemp)) {
		free(pemp);

		for (i = 0; i < LCount(&list) - 1; i++) {
			if(LNext(&list, &pemp))
				free(pemp);
		}
	}


    return 0;
}

