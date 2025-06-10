#include <string.h>
#include <stdio.h>

// char *strstr(char s1[], char s2[]);

char *strstr2(char s1[], char s2[]){
    if(strlen(s2) == 0){
        return s1;
    }
    unsigned int t1 = strlen(s1);
    unsigned int t2 = strlen(s2);
    for(int i = 0; i <= t1; i++){
        int found = 1;
        for(int j = 0; j < t2; j++){
            if(s1[i+j] != s2[j]){
                found = 0;
                break;
            }
        }
        if(found) return s1 + i;
    }
    return NULL;
}

int main(){
    char p1[] = "hello world";
    char p2[] = "worlt";
    printf("palavra encontranda em %s: %s", "hello world", strstr2(p1, p2));
    return 1;
}