/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void trocarValores(int *v1, int *v2){
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
}

int countVogais(char s1[]){
    int vogais = 0;
    int contador = 0;
    while(s1[contador] != '\0'){
        if(s1[contador] == 'a') vogais++;
        if(s1[contador] == 'e') vogais++;
        if(s1[contador] == 'i') vogais++;
        if(s1[contador] == 'o') vogais++;
        if(s1[contador] == 'u') vogais++;
        contador++;
    }
    return vogais;
}

struct{
    char titulo[100];
    char autor[50];
    int numeroPgs;
} livro;

int main()
{
    int a = 12;
    int b = 5;
    char stringA[] = "porra taol, eu te avisei";
    // printf("valor A: %d, Valor B: %d\n", a, b);
    // trocarValores(&a,&b);
    // printf("valor A: %d, Valor B: %d\n", a, b);
    printf("contando vogais da string: %s\n", stringA);
    printf("%d", countVogais(stringA));
    return 0;
}