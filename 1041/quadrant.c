#include <stdio.h>

int main(){
  float x, y;

  scanf("%f %f", &x, &y);

  if (x && y){
    if (x > 0) {
      if (y > 0) puts("Q1");
      else puts("Q4");
    } else {
      if (y > 0) puts("Q2");
      else puts("Q3");
    }
  } else {
    if(x == y) {
      puts("Origem");
    } else {
      if (x) puts("Eixo X");
      else puts("Eixo Y");
    }
  }
}
