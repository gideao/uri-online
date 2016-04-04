#include <stdio.h>

int main(){
  int age, ac = 0, count = 0;
  do {
    scanf("%d", &age);
    if (age > 0) {
      ac += age;
      count++;
    }
  } while(age > 0);

  printf("%.2f\n", ac/(float)count);
}
