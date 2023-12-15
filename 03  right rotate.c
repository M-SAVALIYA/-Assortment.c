#include<stdio.h>

main()
{
	int a[100];
	int n,i,j,p,x;
	
	printf("Enter value of N = ");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	} 
	
	printf("\n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nEnter how many time rotate = ");
	scanf("%d",&p);
	
	for(i=1 ; i<=p ; i++)
	{
		x=a[n-1];
		for(j=n-1 ; j>0 ; j--)
		{
			a[j]=a[j-1];
		}
		a[j]=x;
	}
	
	printf("\nrotated array\n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("%d ",a[i]);
	}
}