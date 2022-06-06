#include<stdio.h>
#include<stdlib.h>
int main()
{
		int n,i,*ptr,sum=0;
		printf("enter no of element");
		scanf("%d",&n);
		ptr=(int*)malloc(n*sizeof(int));
		if(ptr==NULL)
		{
			printf("sorry! unable to allocate the memeory");
		}
		printf("enter element of array");
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+1);
			sum+=*(ptr+1);
		}
		printf("sum=%d",sum);
		free(ptr);
		return 0;
}
