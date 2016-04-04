#include <stdio.h>

int main(){
  int x, y;

  for (;;) {
    scanf("%d %d", &x, &y);

    if (x && y) {
      if (x > 0) {
        if (y > 0) puts("primeiro");
        else puts("quarto");
      } else {
        if (y > 0) puts("segundo");
        else puts("terceiro");
      }
    } else {
      break;
    }
  }
}
