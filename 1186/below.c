#include <stdio.h>

int main(){
  int i, j, k;
  float n, m[12][12], s;
  char opr;
  scanf("%c", &opr);

  for (i = 0; i < 144; i++) {
    scanf("%f", &n);
    m[i / 12][i % 12] = n;
  }

  for (i = 0, s = 0, k = 0; i < 12; i++) {
    for (j = 12 - i; j < 12; j++) {
      s += m[i][j];
      k++;
    }
  }

  if(opr == 'M') s /= k;

  printf("%.1f\n", s);
}
