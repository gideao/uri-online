#include <stdio.h>

int main(){
  int a, b;

  scanf("%d", &a);
  do {
    scanf("%d", &b);
  } while(b < 1);

  printf("%d\n", b * (a + (a + b - 1)) / 2);
}
