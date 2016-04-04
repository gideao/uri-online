#include <stdio.h>

int main(){
  int n, a, b, i, j, sum;

  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);

    if (a > b) {
      j = a;
      a = b;
      b = j;
    }

    for(j = a + 1, sum = 0; j < b; j++)
      if (j % 2) sum += j;
    printf("%d\n", sum);
  }
}
