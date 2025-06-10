#include <stdio.h>
#include <string.h>

char *strstr2(char s1[], char s2[]);

char *strstr2(char s1[], char s2[]) {
  size_t t1 = strlen(s1);
  size_t t2 = strlen(s2);
  if ( t2 == 0 ) return s1;
  if ( t2 > t1 ) return NULL;
  for (int i1 = 0; i1<t1-t2+1; ++i1) {
      int achou = 1;
      for (int i2 = 0; i2<t2; ++i2) {
          if ( s1[i1+i2] != s2[i2] ) {
             achou = 0;
             break;
          }
      }
      if ( achou ) return s1 + i1;
  }
  return NULL;
}

int main() {
  char *res, *vazio = "", *str1 = "abcdefg", *str2a = "cde", *str2b = "cdf", *str2c = "abcdefgh";
  res = strstr2(str1,str2a);
  printf("cdefg ==> %s\n", res);
  res = strstr2(str1,vazio);
  printf("abcdefg ==> %s\n", res);
  res = strstr2(str1,str2b);
  printf("(nil) ==> %p\n", res);
  res = strstr2(str1,str2c);
  printf("(nil) ==> %p\n", res);
  
  return 0;
}
