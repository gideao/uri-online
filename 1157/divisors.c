#include <stdio.h>

int main(){
  int i, n;

  scanf("%d", &n);

  for(i = 1; i < n + 1; i++) if (!(n % i)) printf("%d\n", i);
  
}
