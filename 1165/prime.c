#include <stdio.h>

int main(){
  int i, j, k, n, m;

  scanf("%d", &n);

  for(i = 1; i < n + 1; i++) {
    scanf("%d", &m);

    for(j = 2, k = 0; j < m; j++){
      if (!(m % j)) k++;
    }

    if (!k) {
      printf("%d eh primo\n", m);
    } else {
      printf("%d nao eh primo\n", m);
    }
  }
}
