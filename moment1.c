#include<stdio.h>

int main()

{
	int a;
	
	printf("enter number");
	scanf("%d",&a);
	
	(a%2==0)? printf("enter number even") :printf("enter number odd");
	
	return 0;
}