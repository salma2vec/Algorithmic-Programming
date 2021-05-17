#include<stdio.h>
int main()
{
   	int n,k,t;
   	int c=0;
   	scanf("%d %d",&n,&k);

   	for(int i=1;i<=n;i++)
   	{
  		scanf("%d\n",&t);
  		if(t%k==0) 
  		c++;
	}
	printf("%d",c);
	return 0;
}
