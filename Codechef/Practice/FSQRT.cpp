#include <stdio.h>
#include<math.h>

int main() {
	int a,z=1;
	scanf("%d",&a);
	while(z<=a){
	    int b;
	    scanf("%d",&b);
	    int root =sqrt(b);
	    printf("%d\n",root);
	    z++;
	}
	return 0;
}
