#include <stdio.h>

int main(){
  int n, i;

  do {
    scanf("%d", &n);
    for (i = 1; i < n + 1; i++) {
      if(n - i)
        printf("%d ", i);
      else
        printf("%d\n", i);
    }
  } while(n);
}
