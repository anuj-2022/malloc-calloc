#include<stdio.h>
struct data
{
	int a;
	char b;
	int c;
}s;


void main()
{
char *p;
int *q;
struct data* ss;
printf("size of int* %d\nchar* %d\nstruct%d\nstruct* %d\n\n",sizeof(p),sizeof(q),sizeof(s),sizeof(ss));
}
