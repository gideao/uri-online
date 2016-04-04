#include <stdio.h>

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  if(b%a==0 || a%b == 0)
    puts("Sao Multiplos");
  else
    puts("Nao sao Multiplos");
}
