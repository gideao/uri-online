#include <stdio.h>

int main(){
  int i, n, x, rats = 0, rabbits = 0, frogs = 0;
  char t;
  float sum;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d %c", &x, &t);
    if (t == 'C') rabbits += x;
    else if (t == 'R') rats += x;
    else if (t == 'S') frogs += x;
  }

  sum = rats + rabbits + frogs;

  printf("Total: %.0f cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", sum, rabbits, rats, frogs);
  printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", 100*rabbits/sum, 100*rats/sum, 100*frogs/sum);
}
