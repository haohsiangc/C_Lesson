/*
*identifies the longest consecutive identical characters given a series
*of characters you enter
*/
#include <stdlib.h>
#include <stdio.h>
void longest(char *input);
#define SIZE 100
int main(){
    char string[SIZE]={};
    printf("Enter a string:");
    scanf("%100[^\n]s",string);
    longest(string);
    system("pause");
    return 0;
}
void longest(char *input){
    size_t i=0;
    int counter,temp=0;
    char char_temp;
    while(input[i]!='\0'){
        counter=1;
        while(input[i]==input[i+1]){
            counter=counter+1;
            i++;
        }
        if(counter>temp){
            temp=counter;
            char_temp=input[i];
        }
        i++;
    }
    printf("The longest identical character is ¡¥%c¡¦,the length is %d\n",char_temp,temp);
}