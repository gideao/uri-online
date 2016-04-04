#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, n, *a;

  scanf("%d", &n);

  a = malloc(n * sizeof(int));

  for(i = 0; i < 2 && i < n; i++) {
    printf("%d", a[i] = i);
    if(i < n - 1)
      printf(" ");
    else
      printf("\n");
  }

  for(i = 2; i < n; i++) {
    printf("%d", a[i] = a[i-1] + a[i-2]);
    if(i < n - 1)
      printf(" ");
    else
      printf("\n");
  }

  free(a);
}
