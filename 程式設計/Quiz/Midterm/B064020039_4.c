#include <stdlib.h>
#include <stdio.h>
void concat(char *input1,char *input2,char *out);
int main(){
    char str1[]="hand";
    char str2[]="some";
    char con_str[50]={};
    printf("concat(\'%s\',\'%s\')=",str1,str2);
    concat(str1,str2,con_str);
    system("pause");
    return 0;
}
void concat(char *input1,char *input2,char *out){
    size_t i=0,j=0;
    //��input1Ū�Jout
    while(input1[i]!='\0'){
        out[i]=input1[i];
        i++;
    }
    //��input2Ū�Jout�A����binput1�᭱
    while(input2[j]!='\0'){
        out[i]=input2[j];
        j++;
        i++;
    }
    puts(out);
}