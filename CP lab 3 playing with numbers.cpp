#include<stdio.h>
int main()
{
	char ch;
	char str[100];
	char sen[10000];
	scanf(" %c",&ch);
	scanf(" %s",str);
	scanf(" %[^\n]%*c",sen);
	printf("%c\n%s\n%s",ch,str,sen);
	return 0;
}

