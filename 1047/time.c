#include <stdio.h>

int main(){
  int sh, sm, eh, em, st, et, h;
  scanf("%d %d %d %d", &sh, &sm, &eh, &em);

  st = sh * 60 + sm;
  et = eh * 60 + em;

  if(st >= et)
    h = (24 * 60) - st + et;
  else
    h = - (st - et);

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h/60, h%60);
}
