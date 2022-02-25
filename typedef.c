#include<stdio.h>
#include<stdlib.h>
struct data
{
	int a;
	char b[10];
	int c;
};
typedef struct data disk;
void main()
{

	disk d;
	printf("Enter the data\n");
	scanf("%d %s %d",&d.a,d.b,&d.c);
	printf("%d %s %d",d.a,d.b,d.c);
}


