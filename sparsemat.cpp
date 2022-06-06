
#include<stdio.h>
#include<conio.h>
struct sparse
{
	int row;
	int col;
	int val;
}s[10];
int main()
{
		int i,j,row,col,val,k=0,n;
		printf("enter the matrix dimension");
		scanf("%d %d",&row,&col);
		printf("enter the non zero elemnt in matrix");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter the row , col and val which is non zero");
			scanf("%d %d %d",&s[i].row,&s[i].col,&s[i].val);
		}
		printf("sparse matrux is ");
		for(i=0;i<row;i++)
		{
			printf("\n");
			for(j=0;j<col;j++)
		{
		if ((s[k].row==(i+1))&&(s[k].col==(j+1)))
		{
		printf("\t%d",s[k].val);
		k++;
	    }
	    else
	    printf("\t");
	    }
		}
		
}
