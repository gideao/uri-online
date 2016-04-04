#include <stdio.h>

int main(){
  int i, j, n[20];

  for(i = 0; i < 20; i++) {
    scanf("%d", n+i);
  }

  for(i = 0; i < 10; i++) {
    j = n[i];
    n[i] = n[19 - i];
    n[19 - i] = j;
  }

  for(i = 0; i < 20; i++) {
    printf("N[%d] = %d\n", i, n[i]);
  }

}
