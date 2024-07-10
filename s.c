#include<stdio.h>
#include<string.h>
int main(){
char s[40];
gets(s);
printf("Length of string when maxlen is 25: %ld \n", strnlen(s, 25));
return 0;
}

