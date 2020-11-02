#include <stdio.h> 
int DecimaltoBinary(int input);
int main()
{
	printf("%14s%10s%10s%\n","Bin","Oct","Hex");
	for(int i=1;i<=256;i++){
		printf("%4d:%9d%10o%10x\n",i,DecimaltoBinary(i),i,i);
	}
}
int DecimaltoBinary(int input)
{
	int remainder;
	int a=1,binary=0;
	while(input!=0){
		remainder=input%2;
		input/=2;
		binary+=remainder*a;
		a*=10;
	}
	return binary;	
}
