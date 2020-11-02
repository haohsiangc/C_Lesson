//counts the number of mismatched characters
#include <stdlib.h>
#include <stdio.h>
#define SIZE 100
int mismatched(char *str1,char *str2);
int main(){
    char mainStr[SIZE]={};
    char viceStr[SIZE]={};
    printf("Enter first string:");
    scanf("%100[^\n]s",mainStr);
    fflush(stdin);
    printf("Enter second string:");
    scanf("%100[^\n]s",viceStr);
    printf("Mismatched(\"%s\",\"%s\")=%d",mainStr,viceStr,mismatched(mainStr,viceStr));
    system("pause");
    return 0;
}
int mismatched(char *str1,char *str2){
    int counter1=0,counter2=0;
    int mismatch=0;
    size_t i=0,j=0;
    while(str1[i]!='\0'){
        counter1++;
        i++;
    }
    while(str2[j]!='\0'){
        counter2++;
        j++;
    }
    if(counter1!=counter2){
        return(-1);
    }
    else{
        for(i=0;i<counter1;i++){
            if(str1[i]!=str2[i]){
                mismatch++;
            }
        }
        return mismatch;
    }
}