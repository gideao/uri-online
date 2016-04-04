#include <stdio.h>

int main(){
  long int i, j, x, y;
  scanf("%li %li", &x, &y);

  for (i = 1; i < y;) {
    for (j = 0; j < x && i < y + 1; j++, i++) {
      printf("%li", i);
      if(j < x - 1) printf(" ");
    }
    printf("\n");
  }
}
