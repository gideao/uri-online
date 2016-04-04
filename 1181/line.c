#include <stdio.h>

int main(){
  int l, i;
  float n, m[12][12], s;
  char opr;
  scanf("%d\n%c", &l, &opr);

  for (i = 0; i < 144; i++) {
    scanf("%f", &n);
    m[i / 12][i % 12] = n;
  }

  for (i = 0, s = 0; i < 12; i++) {
    s += m[l][i];
  }

  if(opr == 'M') s /= 12;

  printf("%.1f\n", s);
}
