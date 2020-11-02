#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
void Toupper(char input[]);
void Tolower(char input[]);
void reversed(char input[]);
int str_len;//global variable
int main(){
    char string[SIZE]={};
    printf("Enter a string:");
    scanf("%100[^\n]s",string);//user input
    str_len=strlen(string);
    printf("Your enter is:%s\n",string);
    printf("The string after uppercased is:");
    Toupper(string);
    printf("The string after lowercased is:");
    Tolower(string);
    printf("When we make your input string reversed:");
    reversed(string);
    system("pause");
    return 0;
}
void Toupper(char input[]){
    for(int i=0;i<str_len;i++){
        printf("%c",toupper(input[i]));
    }
    printf("\n");
}
void Tolower(char input[]){
    for(int i=0;i<str_len;i++){
        printf("%c",tolower(input[i]));
    }
    printf("\n");
}
void reversed(char input[]){
    for(int i=str_len-1;i>=0;i--){
        printf("%c",input[i]);
    }
    printf("\n");
}
