#include <stdio.h>

int main(){
  int i, j;
  for (i = 0; i < 11; i++)
    for (j = 1; j < 4; j++)
      if(i % 5)
        printf("I=%.1f J=%.1f\n", i / 5.0, j + i / 5.0);
      else
        printf("I=%.0f J=%.0f\n", i / 5.0, j + i / 5.0);
}
