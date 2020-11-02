#include <stdlib.h>
#include <stdio.h>
void reverse(char *input);
int main(){
    char string[50]={};
    printf("Enter a string:");
    scanf("%50[^\n]s",string);
    printf("reverse(\'%s\')=",string);
    reverse(string);
    system("pause");
    return 0;
}
void reverse(char *input){
    if(*input!='\0'){
        reverse(input+1);
    }
    printf("%c",*input);
}