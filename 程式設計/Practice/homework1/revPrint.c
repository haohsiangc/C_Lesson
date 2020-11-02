//prints reversed string of a given string
#include <stdlib.h>
#include <stdio.h>
#define SIZE 100
void reverseString(char *input);
int main(){
    char string[SIZE]={};
    printf("Enter a string:");
    scanf("%100[^\n]s",string);
    printf("Reversed string:");
    reverseString(string);
    system("pause");
    return 0;
}
void reverseString(char *input){
    if(*input!='\0'){
        reverseString(input+1);
    }
    printf("%c",*input);
}