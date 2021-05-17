#include <stdio.h>

int array[1000000];

int main(){
  int j;
  scanf("%d",&j);
  int x;

  for (int i=0;i<j;i++){
    scanf("%d",&x);
    array[x]++;      
  }  

  for (int i=0;i<1000000;i++){
    while(array[i]>0){
      printf("%d\n",i);
      array[i]--;
    }
  }

return 0;
}
