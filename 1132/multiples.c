#include <stdio.h>

int main(){
  int a, b, i, sum = 0;

  scanf("%d\n%d", &a, &b);

  if(a > b) {
    i = a;
    a = b;
    b = i;
  }

  for (i = a; i <= b; i++) {
    if (i % 13) sum += i;
  }

  printf("%d\n", sum);
}
