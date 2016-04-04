#include <stdio.h>

int main(){
  int i, n;

  scanf("%d", &n);

  for (i = 0; i < 6; n++)
    if (n % 2) { printf("%d\n", n); i++; }
}
