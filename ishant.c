#include <stdio.h>
int main(){
  int rows, n, r = 1;
  printf("Enter the number of rows = ");
  scanf("%d", &rows);
    n = rows;
  for (int i = 1; i <= rows; i++){
    for (int j = n-1; j >= 1; j--){
      printf("\t");
    }
    n--;
    for(int k = 1; k <= r; k++){
        printf("*\t");
    }
    r++;
    printf("\n");
  }
  return 0;
}
