#include <stdio.h>

int main(){
  int n;

  for (;;) {
    scanf("%d", &n);

    if (n - 2002) {
      puts("Senha Invalida");
    } else {
      puts("Acesso Permitido");
      break;
    }
  }
}
