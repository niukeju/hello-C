#include <stdio.h>
#include <stdlib.h>
int main()
{	char c1,c2;
	c1='A';
	c2='B';
	c1=c1+32;
	c2=c2+32;
	printf("%c,%c\n",c1,c2);
	printf("%d,%d\n",c1,c2);
	system("pause");
	return 0;
}