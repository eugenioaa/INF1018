#include <ctype.h>
#include <stdio.h>

int string2num (char *s, int base) {
  int a = 0;
  int b = base;
  for (; *s; s++)
    a = a*b + (*s - '0');
  return a;
}

int main (void) {
  printf("%d\n", string2num("777", 8));
  printf("%d\n", string2num("777", 10));

  return 0;
}