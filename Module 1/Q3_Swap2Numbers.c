#include<stdio.h>

void swap(int *,int *);

int main(){

  int num1, num2;
  scanf("%d %d", &num1, &num2);
  printf("Num1 = %d,\tNum2 = %d\n", num1, num2);
  swap(&num1, &num2);
  printf("Num1 = %d,\tNum2 = %d\n", num1, num2);
  return 0;
}

void swap(int *a, int *b){
  *a=*a^*b;
   *b=*a^*b;
    *a=*a^*b;
}
