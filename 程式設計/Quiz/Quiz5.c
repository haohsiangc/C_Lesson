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
    int state=1;//�ݥ��bŪ���O�r�٬O�Ů�(�I��h�ӪŮ檺�ɭԥ�)
    size_t i=0;
    while(input[i]!='\0'){
        if(input[i]==' '||input[i]=='\n'||input[i]=='\t'){
            state=0;
        }
        else if(state==0){
            state=1;//�I��r���ɭ���state=1
            words++;
        }
        else {
            state=1;//�I��r���ɭ���state=1
            words++;
        }
        i++;
    }
    return words;
}