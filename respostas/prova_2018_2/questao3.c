#include <stdio.h>

void analisa_string(char s[]);

void analisa_string(char s[]) {
  int palavras = 0;
  size_t pos = 0;
  while ( s[pos] != '\0' ) {
        int letras = 0;
        while ( s[pos] != '\0' && s[pos] != ' ' ) {
              ++letras;
              ++pos;
        }
        printf("letras = %d\n", letras);
        ++palavras;
        if ( s[pos] == ' ')
           ++pos;
  }
  printf("palavras = %d\n", palavras);
}

int main() {
  printf("-----\n");
  analisa_string("um dois tres quatro cinco seis sete oito");
  printf("-----\n");
  analisa_string("1 22 333 4444 55555 666666 7777777 88888888 999999999");
  printf("-----\n");
  analisa_string("");
  printf("-----\n");
  return 0;
}
