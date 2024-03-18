#include<stdio.h>

int main(){
  int r, c;
  printf("Enter Row & Col:\t");
  scanf("%d %d", &r, &c);
  int a[r][c], b[r][c], m[r][c];
  
  printf("----Enter A Matrix:\n");
  for(int i=0; i<r; i++){
      printf("Row %d Elements:", i+1);
      for(int j=0; j<c; j++){
          scanf("%d", &a[i][j]);
      }
  }
  
  printf("----Enter B Matrix:\n");
  for(int i=0; i<r; i++){
      printf("Row %d Elements:", i+1);
      for(int j=0; j<c; j++){
          scanf("%d", &b[i][j]);
      }
  }
  
  for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
          m[i][j] = 0;
          for(int k=0; k<c; k++){
              m[i][j] += *(*(a+i)+k) * *(*(b+k)+j);
          }
      }
  }
  
  for(int i=0; i<r; i++){
      printf("\n");
      for(int j=0; j<c; j++){
          printf("%d ", m[i][j]);
      }
  }
  
}
