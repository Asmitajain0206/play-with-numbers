/* You are given an array of n numbers and q queries. For each query you have to print the floor of the expected value(mean) of the subarray from L to R.*/
#include<stdio.h>
int main()
{
	int n,q,i,l,r,sum;
	printf("enter N and Q \n");
	scanf("%d%d",&n,&q);
	int a[n];
	printf("enter elements \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<q;i++)
	{ 	sum=0;
	printf("\nenter L  and R \n");
		scanf("%d%d",&l,&r);
		int k = r-l+1;
		for(int j=l-1;j<r;j++)
		sum+=a[j];
		if(k!=0)
		printf("\n%d",sum/k);

	}
	return 0;

}
