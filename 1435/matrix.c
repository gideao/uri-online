#include <stdio.h>

int main(){
  int i, j, d;

  scanf("%d", &d);

  for(i = 1; i < d + 1; i++){
    for(j = 1; j < d + 1; j++){
      printf("%d   ", j);
      printf("   ");
    }
    printf("\n");
  }


}
