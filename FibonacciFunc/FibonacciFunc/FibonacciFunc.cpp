// FibonacciFunc.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int Fibo(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n-1) + Fibo(n-2);


}


int main()
{
	int i;
	for (i = 1; i < 15; i++)
		printf("%d ", Fibo(i));
    return 0;
}

