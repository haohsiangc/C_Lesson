#include <stdlib.h>
#include <stdio.h>
int indexOf(char x[], char y[]);
int main(){
    char RawString[100]={};
    char target[100]={};
    printf("Enter a string:");
    scanf("%100[^\n]s",RawString);//user input
    fflush(stdin);//clean the cache
    printf("Enter the string you want to search:");
    scanf("%100[^\n]s",target);//user input
    printf("indexOf(\"%s\",\"%s\")=%d\n",RawString,target,indexOf(RawString,target));
    system("pause");
    return 0;
}
int indexOf(char x[], char y[]){
// Iterators
    int i = 0, j = 0;
    while( x[i] != '\0'){
        if(x[i] == y[j]){
            if(y[j + 1] == '\0'){
                return(i - j + 1); // Return the location index of the string y
            }
            else{
                ++i;
                ++j;
            }
        }
        else{
            ++i;
            j = 0;
        }
    }
    return(-1); // Return -1 if string y is not in string x
}