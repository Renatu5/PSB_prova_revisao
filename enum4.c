#include <stdio.h>
#include <string.h>

int main()
{
char texto[3][17];
int i;
strcpy(texto[0], "Isto é um teste de uma string");
strcpy(texto[1], "em C.");
strcpy(texto[2], "nao e mais uma linha em branco");
for(i = 0; i < 3; i++) {
printf("%s\n", texto[i]);
}
return 0;
}