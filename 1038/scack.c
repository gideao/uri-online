#include <stdio.h>

float snack[] = {4, 4.5, 5, 2, 1.5};

int main(){
  int i, c;
  scanf("%d %d", &i, &c);
  printf("Total: R$ %.2f\n", snack[i-1]*c);
}
