#include <stdio.h>
#include <string.h>
void intTOstr(int input){
    char int_str[30];
	int int_len;
    //sprintf()�Nint�নstr�Φ��x�s
    sprintf(int_str,"%d",input);
    //strlen()�p��r�����
    int_len=strlen(int_str);
    int i;
    //output:int_str[0]+int_str[1]+...+int_str[int_len-1]
    for(i=0;i<int_len;i++){
        printf("%c",int_str[i]);
        if(i==int_len-1){
            break;
        }
        printf("+");
    }
}