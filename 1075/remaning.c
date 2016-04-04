#include <stdio.h>

int main(){
  int i, n;

  scanf("%d", &n);

  for (i = 0; (i * n + 2) < 10000; i++)
    printf("%d\n", i * n + 2);
}
