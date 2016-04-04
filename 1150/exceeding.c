#include <stdio.h>

int main(){
  int a, b, s, i;

  scanf("%d", &a);
  do {
    scanf("%d", &b);
  } while(!(a < b));

  for(i = 1, s = a; s <= b; i++) s += a + i;

  printf("%d\n", i);
}
