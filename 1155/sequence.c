#include <stdio.h>

int main(){
  int i;
  float sum;

  for(i = 1, sum = 0; i < 101; i++)
    sum += 1/(float)i;
  printf("%.2f\n", sum);
}
