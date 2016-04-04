#include <stdio.h>

int main(){
  int i, n, m, l, p = 0;

  scanf("%d\n%d", &n, &l);

  for (i = 1; i < n; i++) {
    scanf("%d", &m);

    if (m < l){
      l = m;
      p = i;
    }
  }

  printf("Menor valor: %d\nPosicao: %d\n", l, p);
}
