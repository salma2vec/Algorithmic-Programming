#include<stdio.h>
int main()
{
    int t; 
    scanf("%d",&t);
    while(t--)
    {
    	long int a,b;
    	scanf("%ld %ld",&a,&b); 
    	int c;
    	c = a+b;
    	printf("%ld\n",c);
    }
}
