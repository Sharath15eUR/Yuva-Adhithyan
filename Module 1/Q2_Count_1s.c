#include<stdio.h>

int main(){

  int num,count;
  scanf("%d", num);
  int n=num;
  while(n!=0){
  n&=(n-1);
  count++;
  }
  printf("Number of 1s in %d: %d", num, count);
  return 0;

}
