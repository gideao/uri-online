#include <stdio.h>

int main(){
  int op, x, y, g = 0, i = 0, e = 0, t = 0;

  do {
    scanf("%d %d", &x, &y);
    if (x - y) {
      if (x > y)
        i++;
      else
        g++;
    } else {
      e++;
    }

    t++;

    puts("Novo grenal (1-sim 2-nao)");
    scanf("%d", &op);
    
  } while(op % 2);

  printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", t, i, g, e);

  if(i - g){
    i > g ? printf("Inter") : printf("Gremio");
    puts(" venceu mais");
  } else {
    puts("Nao houve vencedor");
  }

}
