#include <stdlib.h>
#include <stdio.h>
void indexOf(char *raw, char *target);
int main(){
    char RawString[100]={};
    char target[100]={};
    printf("Enter a string:");
    scanf("%100[^\n]s",RawString);//user input
    fflush(stdin);//clean the cache
    printf("Enter the string you want to search:");
    scanf("%100[^\n]s",target);//user input
    printf("indexOf(\"%s\",\"%s\")=",RawString,target);
    indexOf(RawString,target);
    system("pause");
    return 0;
}
void indexOf(char *raw, char *target){
// Iterators
    size_t i=0, j=0;
    int index=0;
    while(raw[i]!='\0'){
        if(raw[i]==target[j]){
            if(target[j+1]=='\0'){
                index=i-j+1; 
                printf("%d ",index);
                i++;
            }
            else{
                i++;
                j++;
            }
        }
        else{
            i++;
            j=0;
        }
    }
    if(index==0){
        printf("Not found\n"); 
    }
}
//&&(raw[i+1]==' '||raw[i+1]=='\0')&&(raw[i-j-1]==' ')