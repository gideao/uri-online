#include <stdio.h>

int main(){
  int n, a, b, i, j, sum;

  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);

    for(j = 0, sum = 0; j < b; a++) {
      if (a % 2) {
        sum += a;
        j++;
      }
    }

    printf("%d\n", sum);
  }
}
