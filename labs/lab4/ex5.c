#include <stdio.h>

void dump(void *p, int n) {
  unsigned char *p1 = (unsigned char*) p;
  for (int i = 0; i < n; i++) {
    printf("%02x ", p1[i]);
  }
  printf("\n");
}

int main(void) {
  signed char sc = -1;
  unsigned int ui = sc;

  printf("Valor de sc (signed char): %d (hex: 0x%02x)\n", sc, (unsigned char)sc);
  printf("Valor de ui (unsigned int): %u (hex: 0x%08x)\n", ui, ui);
  
  printf("Representacao interna de ui (dump): ");
  dump(&ui, sizeof(ui));

  return 0;
}