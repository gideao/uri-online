#include <stdio.h>

int main(){
  int a = 0, g = 0, d = 0, n;

  do {
    do {
      scanf("%d", &n);
    } while(n < 1 || n > 4);

    switch (n) {
      case 1:
        a++;
        break;
      case 2:
        g++;
        break;
      case 3:
        d++;
    }

  } while(n - 4);

  printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", a, g, d);
}
