#include<stdio.h>
void copy(int a[])
{
	int i;
	int a2[n];
	for(i=0;i<n;i++)
	{
		a2[i]= a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a2[i]);
	}
}
int main()
{
	int a1[n];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a1[i]);
	}
	copy(a1);
	return 0;
}
