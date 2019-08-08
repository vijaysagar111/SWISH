#include<stdio.h>
#include<math.h>

int main(){
  int x,p,s=0,y;
  scanf("%d%d",&x,&p);
  while(x!=1){
  s = s + x;
  y = ceil((x * p) / 100);
  x = x - y;
  }
  printf("%d",s+1);
 }
