#include <stdio.h>

int main(){
  int i, j, k;
  double n, m[12][12], s;
  char opr;
  scanf("%c", &opr);

  for (i = 0; i < 144; i++) {
    scanf("%lf", &n);
    m[i / 12][i % 12] = n;
  }

  for (i = 0, s = 0, k = 0; i < 12; i++) {
    for (j = 11; j > 12 - (i + 1) && j > i; j--) {
      s += m[i][j];
      k++;
    }
  }

  if(opr == 'M') s /= k;

  printf("%.1lf\n", s);
}
