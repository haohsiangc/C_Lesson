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
        //�ˬd�r���O�_�۵�
        if(input[i]==keyword[j]){
            //�Y�۵��N�ˬd�U�@�Ӧ��S���@�ˡA����keyword�I��'\0'
            if(keyword[j+1]=='\0'){
                //�o�{�Mkeyword�@�ˡA�p�ƾ�+1
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