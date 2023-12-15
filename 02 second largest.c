#include <stdio.h>
 
int main()
{
	int a[100];
	int j,i,n;
	
	printf("Enter Size of Array  = ");
	scanf("%d", &n);
	
	printf("Enter Array Element = \n3", n);
	for (i=0 ; i<n ; i++)
	{
		scanf("%d", &a[i]);
    }
	   
	for (i=0 ; i<n ; i++)
	{
		if(a[i]>j)
		{
			j=a[i];
		}
	}
	printf("\n The Largest Number =  %d", j);
}