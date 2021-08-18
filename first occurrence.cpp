#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],a;
	int i;
	printf("Enter a string:");
	scanf("%s ",&s);
	char a;
	int i;
	scanf("%c",&a);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==a)
		{
			printf("Position of %c in string : %d ",a,i);
			break;
		}
	}
}
