#include <stdio.h>

int main(){
  int n, i;
  float x, y;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%f %f", &x, &y);

    if (y){
      printf("%.1f\n", x/y);
    } else {
      puts("divisao impossivel");
    }
  }
}
