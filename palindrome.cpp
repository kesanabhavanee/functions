#include<stdio.h>
int p(int n)
{
	int temp,r,sum=0;
	temp=n;
	while(n!=0)
	{
		r=n/10;
		sum=sum*10+r;
		n=n/10;
	}
	if(sum==temp)
	return 1;
	else
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(p(n)==0)
	printf("palindrome");
	else
	printf("not a palindrome");
	return 0;
}
