#include <stdio.h>

int main(){
  int b, h;
  scanf("%d %d", &a, &b);

  if( a >= b){
    h = 24 - a + b;
  } else {
    h = - (a - b);
  }

  printf("O JOGO DUROU %d HORA(S)\n",h);
}
