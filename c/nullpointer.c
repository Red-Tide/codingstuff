#include <stdio.h>

int main(void){

  int *p;
  void *q;
  char *r;

  p = NULL;
  q= 0;
  r= '\0';

  if (p==r && p==q) {
    puts("NULL == 0 == '\\0'?");
  }

  return 0;
}
