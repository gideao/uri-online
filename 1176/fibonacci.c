#include <stdio.h>

int main(){
  int i, j, tc, trm, ficount = 1;
  long int fi[61];

  fi[0] = 0;
  fi[1] = 1;

  scanf("%d", &tc);

  for (i = 0; i < tc; i++) {
    scanf("%d", &trm);

    if (trm > ficount) {
      for (; ficount < trm; ficount++) {
        fi[ficount + 1] = fi[ficount] + fi[ficount - 1];
      }
    }
    printf("Fib(%d) = %li\n", trm, fi[trm]);
  }
}
