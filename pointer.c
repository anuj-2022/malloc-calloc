#include<stdio.h>
#include<string.h>

void main()
{
	int i=0,j=0;
	char *ch;
	char c[10];
	printf("Enter the data\n");
	scanf("%s",c);
	ch=c;
	i=strlen(c);
	printf("Printing the data using pointer\n");
	for(j=0;j<i;j++)
	printf("%c",*ch++);
}
