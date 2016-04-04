#include <stdio.h>

int main(){
  float s, tax = 0;
  scanf("%f", &s);

  if (s > 2000) {
    if (s <= 3000) {
      tax = (s - 2000) * 0.08;
    } else {
      tax = 1000 * 0.08;
    }
  }

  if (s > 3000) {
    if (s <= 4500) {
      tax += (s - 3000) * 0.18;
    } else {
      tax += 1500 * 0.18;
    }
  }

  if (s > 4500)
    tax += (s - 4500) * 0.28;

  if (tax == 0)
    puts("Isento");
  else
    printf("R$ %.2f\n", tax);
}
