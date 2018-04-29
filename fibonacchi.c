#include<stdio.h>

int fibbo(int n){
  if(n<=2){
  return fibbo(n-1)+fibbo(n-2);
}else{
  return(0);
}
}

int main(void){
  int n;
  printf("n=");
  scanf("%d",&n);
  printf("E(%d)=%d\n",n,fibbo(n));
}
