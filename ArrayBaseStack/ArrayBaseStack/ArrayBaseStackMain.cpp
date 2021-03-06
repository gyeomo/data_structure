// ArrayBaseStack.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "ArrayBaseStack.h"

int main()
{
	Stack stack;
	StackInit(&stack);

	SPush(&stack, 1); SPush(&stack, 2);
	SPush(&stack, 3); SPush(&stack, 4);
	SPush(&stack, 5); 

	while (!SIsEmpty(&stack))
		printf("%d ", SPop(&stack));

    return 0;
}

