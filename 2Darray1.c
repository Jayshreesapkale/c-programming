#include<stdio.h>
int main()
{
    int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 1, 7, 8, 9, 0};
    
    printf("%u, %u\n", a+1, &a+1); //6487552, 6487584
    
    return 0;
}


/*
int main()
{
	int arr[3][3]={{11,12,13},{14,15,16},{17,18,19}}; 
	int *p[4]={*arr,*(arr+1),*(arr+2)};
	
	printf("%d %d",arr[0][0],**p); //11 11
	//**P
	//**500
	//*100
	//11
	
	printf("\n%d %d",arr[0][1],*(*p+1)); //12 12
	//*(*p+1)
	//*(*500+1)
	//*(100+1)
	//*104
	//12
	
	printf("\n%d %d",arr[0][1],**p+1); //12 12
	
	printf("\n%d %d",arr[1][0],*(*(p+1))); //14 14
	//*(*(p+1))
	//*(*(500+1))
	//*(*(508))
	//*(112)
	//14
	
	printf("\n%d",*(*(p+1)+2)); //16
	
	
	return 0;
}
*/
