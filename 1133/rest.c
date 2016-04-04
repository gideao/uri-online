#include <stdio.h>

int main(){
  int a, b, i;

  scanf("%d\n%d", &a, &b);

  if(a > b) {
    i = a;
    a = b;
    b = i;
  }

  for (i = a + 1; i < b; i++) {
    if (i % 5 > 1 && i % 5 < 4) printf("%d\n", i);
  }
}
