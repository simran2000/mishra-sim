#include<stdio.h>
void prime(int n)
{
int	c=0;
	for (int i=2;i<n;i++)
		if (n%i==0)
	c=c+1;
	if(c>=1)
		printf("%d is not a prime no",n);
	else
	printf("%d is a prime no,n");

}
	int main ()
{
		int n;
	printf("enter no:");
	scanf("%d",&n);
	if (n<0)
	 printf("please enter a posittive integer ");
	 else 
	 prime(n);
	 
}

