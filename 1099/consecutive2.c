#include <stdio.h>
#include <math.h>

int main(){
  int n, i, x, y;
  float s;

  scanf("%d", &n);

  for (i = 0, s = 0; i < n; i++) {
    scanf("%d %d", &x, &y);

    if (x > y) { // x < y
      int t = x;
      x = y;
      y = t;
    }

    s = 0;

    if (y - x > 1){ // (x, y) >= 1
      x++;
      y--;
      
      if (y - x > 0) { // [x, y] > 1
        if (x % 2 == 0) x++;
        if (y % 2 == 0) y--;
        s = pow((y + 1) / 2.0, 2) - pow((x - 1) / 2.0, 2); // ((y + 1) / 2) ^ 2 - ((x - 1) / 2) ^ 2
      } else if (x % 2) s = x; // [x, y] == 1
    }
    printf("%.0f\n", s);
  }
}
