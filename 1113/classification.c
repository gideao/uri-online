#include <stdio.h>

int main(){
  int x, y;

  for (;;) {
    scanf("%d %d", &x, &y);

    if (x - y) {
      if (x < y) {
         puts("Crescente");
      } else {
       puts("Decrescente");
     }
    } else {
      break;
    }
  }
}
