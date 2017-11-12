#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the Two nos: ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a= %d and b= %d",a,b
	);
	return 0;
}
