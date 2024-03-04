#include<stdio.h>

int main(){

  int num;
  scanf("%d", &num);
  if(num & 1) printf("%d is Odd");
  else printf("%d is Even");
  return 0;
  
}
