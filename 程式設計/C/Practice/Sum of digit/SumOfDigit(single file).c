#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int SumOfDigit(int input);
void intTOstr(int input);
int main(){
    int integer;
    
	printf("Enter an integer:");
	scanf("%d",&integer);
	
	printf("result:");
    intTOstr(integer);
    printf("=%d\n",SumOfDigit(integer));
    system("pause");
	return (0);
}
int SumOfDigit(int input){
    if(input<0){
        input=-input;
    }
    while(input!=0){
        return SumOfDigit(input/10)+(input%10);
    }
}
void intTOstr(int input){
    char int_str[30];
	int int_len;
    //sprintf()將int轉成str形式儲存
    sprintf(int_str,"%d",input);
    //strlen()計算字串長度
    int_len=strlen(int_str);
    //output:int_str[0]+int_str[1]+...+int_str[int_len-1]
    for(size_t i=0;i<int_len;i++){
        printf("%c",int_str[i]);
        if(i==int_len-1){
            break;
        }
        printf("+");
    }
}
