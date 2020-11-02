#include <stdlib.h>
#include <stdio.h>
int wordOccurCount(char *input,char *keyword);
int main(){
    char str[] = "I'm a student. You're a student. We are all students!";
    char word[]="student";
    printf("\"%s\" occurs %d times in the string. \n",
    "student", wordOccurCount(str, word) );
    system("pause");
    return 0;
}
int wordOccurCount(char *input,char *keyword){
    int counter=0;
    size_t i=0,j=0;
    while(input[i]!='\0'){
        //檢查字元是否相等
        if(input[i]==keyword[j]){
            //若相等就檢查下一個有沒有一樣，直到keyword碰到'\0'
            if(keyword[j+1]=='\0'){
                //發現和keyword一樣，計數器+1
                counter++;
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
    return counter;
}