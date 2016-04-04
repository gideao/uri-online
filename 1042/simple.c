#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 3

int ascend(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(){
  int i, n[SIZE], s[SIZE];

  for (i = 0; i < SIZE; ++i) {
    scanf("%d", n+i);
  }

  memcpy(s, n, SIZE * sizeof(int));
  qsort(s, SIZE, sizeof(int), ascend);

  for (i = 0; i < SIZE; ++i) {
    printf("%d\n", s[i]);
  }

  printf("\n");

  for (i = 0; i < SIZE; ++i) {
    printf("%d\n", n[i]);
  }
}
