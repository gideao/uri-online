#include <stdio.h>
#include <math.h>

int main(){
  int n, i, j, p1, p2;
  double g1, g2;

  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%i %i %lf %lf", &p1, &p2, &g1, &g2);

    j = 0;
    do {
      j++;
      p1 += p1 * g1 / 100;
      p2 += p2 * g2 / 100;
    } while(p1 <= p2 && j < 100);


    if (p1 > p2) {
      printf("%d anos.\n", j);
    } else {
      puts("Mais de 1 seculo.");
    }
  }
}
