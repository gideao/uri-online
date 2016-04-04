#include <stdio.h>

int main(){
  int i = 0, j, n;

  scanf("%d", &n);
  j = n;

  do {
    printf("N[%d] = %d\n", i, j);
    j *= 2;
    i++;
  } while(i < 10);
}
