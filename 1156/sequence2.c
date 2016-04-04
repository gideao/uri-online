#include <stdio.h>

int main(){
  int i, a, b;
  float sum;

  for(a = 1, b = 1, sum = 1; a < 39;)
    sum += (a = (a + 2)) / (float)(b = (b * 2));

  printf("%.2f\n", sum);
}
