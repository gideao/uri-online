#include <stdio.h>

int main(){
  int even[5], even_size = 0, odd[5], odd_size = 0, n, i, j;

  for (i = 0; i < 15; i++) {

    if (even_size > 4) {
      for (j = 0; j < even_size; j++)
        printf("par[%d] = %d\n", j, even[j]);
      even_size = 0;
    }

    if (odd_size > 4) {
      for (j = 0; j < odd_size; j++)
        printf("impar[%d] = %d\n", j, odd[j]);
      odd_size = 0;
    }

    scanf("%d", &n);

    if (n % 2) odd[odd_size++] = n;
    else even[even_size++] = n;
  }

  for (i = 0; i < odd_size; i++)
    printf("impar[%d] = %d\n", i, odd[i]);

  for (i = 0; i < even_size; i++)
    printf("par[%d] = %d\n", i, even[i]);
}
