#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  unsigned char opt = 0x0;
  char* str = (char*)malloc(sizeof(char) * 20);

  scanf("%s", str);
  if (!strcmp(str, "vertebrado")) opt |= (1 << 0);

  scanf("%s", str);
  if (opt & (1 << 0)) {
    if (!strcmp(str, "ave")) opt |= (1 << 1);
  } else {
    if (!strcmp(str, "inseto")) opt |= (1 << 1);
  }

  scanf("%s", str);

  if (opt & (1 << 0)) {
    if (opt & (1 << 1)){
      if(!strcmp(str, "carnivoro")) puts("aguia");
      else puts("pomba");
    } else {
      if(!strcmp(str, "onivoro")) puts("homem");
      else puts("vaca");
    }
  } else {
    if (opt & (1 << 1)){
      if(!strcmp(str, "hematofago")) puts("pulga");
      else puts("lagarta");
    } else {
      if(!strcmp(str, "hematofago")) puts("sanguessuga");
      else puts("minhoca");
    }
  }
  free(str);
}
