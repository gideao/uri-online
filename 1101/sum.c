#include <stdio.h>

int main(){
  int s, x, y;

  for (;;) {
    scanf("%d %d", &x, &y);

    if (x > y) {
      int t = x;
      x = y;
      y = t;
    }

    if (x && y) {
      s = 0;
      for (; x <= y; x++) {
        s += x;
        printf("%d ", x);
      }
      printf("Sum=%d\n", s);
    } else {
      break;
    }
  }
}
