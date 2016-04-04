#include <stdio.h>

int main(){
  int i, begin, end, sum = 0;

  scanf("%d\n%d", &begin, &end);

  if (end < begin) {
    i = begin; begin = end; end = i;
  }

  for (i = begin + 1; i < end; i++)
    if (i % 2) sum += i;

  printf("%d\n", sum);
}
