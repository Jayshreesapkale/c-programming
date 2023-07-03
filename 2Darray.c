#include<stdio.h>
#include<stdlib.h>

void accept(int mat[2][2]);
int main()
{
	int a[2][2];
	accept(a);
	return 0;
}
void accept(int mat[2][2])
{
	int i,j;
	
	printf("Enter array elememnt : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("\nArray elememnt are : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n%d at %u",mat[i][j],&mat[i][j]);
		}
	}
	
}



/*
int main()
{
	int a[2][2];
	int i,j;
	
	printf("Enter array elememnt : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nBase address: %u",a);
	
	printf("\nArray elememnt are : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n%d at %u",a[i][j],&a[i][j]);
		}
	}
	
	
	return 0;
}

*/
