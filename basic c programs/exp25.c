#include<stdio.h>
int main()
{
	int n, i;
	printf("Specify the range upto which squares to be printed: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\n%d - and Sqare is: %d",i,i*i);
	}
	
	return 0;
}
