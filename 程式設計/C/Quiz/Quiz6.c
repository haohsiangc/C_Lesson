#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
void Toupper(char *input);
void Tolower(char *input);
void reversed(char *input);
int str_len;//global variable
int main(){
    char string[SIZE]={};
    printf("Please enter a line:");
    scanf("%100[^\n]s",string);//user input
    str_len=strlen(string);
    printf("Uppercased:");
    Toupper(string);
    printf("Lowercased:");
    Tolower(string);
    printf("String after reversed is:");
    reversed(string);
    system("pause");
    return 0;
}
void Toupper(char *input){
    for(int i=0;i<str_len;i++){
        printf("%c",toupper(input[i]));
    }
    printf("\n");
}
void Tolower(char *input){
    for(int i=0;i<str_len;i++){
        printf("%c",tolower(input[i]));
    }
    printf("\n");
}
void reversed(char *input){
    for(int i=str_len-1;i>=0;i--){
        printf("%c",input[i]);
    }
    printf("\n");
}
