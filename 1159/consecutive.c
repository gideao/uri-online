#include <stdio.h>

int main(){
  int n, i, j, sum;

  do {
    scanf("%d", &n);

    for(i = 0, j = n, sum = 0; i < 5; j++) if (!(j % 2)) { sum += j; i++; }
    if (n) printf("%d\n", sum);
  } while(n);
}
