#include<stdio.h>
void swap(int* a,int* b);

void main()
{
        int i=20,j=30;
        printf("before calling fun i=%d j=%d\n",i,j);
        swap(&i,&j);
        printf("after calling fun i=%d j=%d\n",i,j);
}
void swap(int* a,int* b)
{
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
        printf("in fun a=%d b=%d\n",*a,*b);
}

