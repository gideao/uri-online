#include <stdio.h>

int main(){
  int i, j, k, n, m;

  scanf("%d", &n);

  for(i = 1; i < n + 1; i++) {
    scanf("%d", &m);

    for(j = 1, k = 0; j < m; j++){
      if (!(m % j)) k += j;
    }

    if (!(k - m)) {
      printf("%d eh perfeito\n", m);
    } else {
      printf("%d nao eh perfeito\n", m);
    }
  }
}
