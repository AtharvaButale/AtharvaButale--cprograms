#include<stdio.h>
int main()
{
	int n, s=0, r, i;
	printf("Input a number: ");
	scanf("%d", &n);
	
	while(n>0){
		r = n % 10;
		s = r + (s*10);
		n = n / 10;
	}
	printf("\nThe number in reverse order is: %d",s);
	
	return 0;
}
