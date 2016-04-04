#include <stdio.h>

int main(){
  int day, hour, minute, secund, start, end, diff;

  scanf("Dia %d\n", &day);
  scanf("%d : %d : %d\n", &hour, &minute, &secund);
  start = day * 86400 + hour * 3600 + minute * 60 + secund;

  scanf("Dia %d\n", &day);
  scanf("%d : %d : %d", &hour, &minute, &secund);
  end = day * 86400 + hour * 3600 + minute * 60 + secund;

  diff = end - start;

  day = diff / 86400; hour = (diff % 86400) / 3600;
  minute = ((diff % 86400) % 3600) / 60; secund = ((diff % 86400) % 3600) % 60;
  
  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", day, hour, minute, secund);
}
