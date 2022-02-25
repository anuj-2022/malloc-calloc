#include<stdio.h>
#include<stdlib.h>
void main()
{
int i=0,j=0,n;
int *ptr,*ptr1;
printf("Enter the number of n\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if (ptr == NULL)
	 {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
	 {
        printf("Memory successfully allocated using calloc.\n");
        for (i = 0; i < n; ++i)
            ptr[i] = i + 1;
        }
	printf("after malloc allocation\n");
	for (i = 0; i < n; ++i)
            printf("%d, ", ptr[i]);
	printf("Enter the increase size n\n");
	scanf("%d",&n);
	ptr1=(int*)realloc(ptr,sizeof(int));
	if (ptr1 == NULL)
         {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
         {
        printf("Memory successfully allocated using calloc.\n");
        for (i = 0; i < n; ++i)
            ptr1[i] = i + 1;
        }
	printf("After calloc realloc allocation\n");
	for (i = 0; i < n; ++i) 
            printf("%d\t ", ptr1[i]);
}

