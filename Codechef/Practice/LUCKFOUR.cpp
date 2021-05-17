#include<stdio.h>
#include<string.h>
    
int main()
{
   	int t; 
   	char a[100];
   	scanf("%d",&t);
   	while(t--)
   	{
	   	scanf("%s",&a);
	   	int c=0;
    	for(int k=0;k<strlen(a);k++)
    	{
	    	if(a[k]=='4') 
	    	c++;
    	}
    	printf("%d\n",c);
    }
}

