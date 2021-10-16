#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
int sub1()
{
	int c;
	printf("%d",c);
	return 0;
}

int sub2(int a, int b)
{
	sub1();
	return 0;
}

int main()
{
	int x = sub2(1, 2);
	MessageBoxA(NULL, "hello, world!", "im from cuc!", MB_OKCANCEL);
	return x;
}