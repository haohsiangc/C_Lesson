#include <stdlib.h>
#include <stdio.h>
int WordCount(char input[]);
int main(){
    char str[] = "There  are 6 words in this string.";
    puts(str);
    printf("Total %d words.\n", WordCount(str));
    system("pause");
    return 0;
}
int WordCount(char input[]){
    int words=0;
    int state=1;//看正在讀的是字還是空格(碰到多個空格的時候用)
    size_t i=0;
    while(input[i]!='\0'){
        if(input[i]==' '||input[i]=='\n'||input[i]=='\t'){
            state=0;
        }
        else if(state==0){
            state=1;//碰到字的時候讓state=1
            words++;
        }
        else {
            state=1;//碰到字的時候讓state=1
            words++;
        }
        i++;
    }
    return words;
}