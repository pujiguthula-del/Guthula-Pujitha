#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	gets(name);
	strupr(name);
	puts(name);
	return 0;
}

