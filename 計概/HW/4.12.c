#include <stdio.h>
int main()
{
	int check=0;//計數器 
	printf("A list of all prime number from 1 to 100:\n");
	
	for(int TheNumber=2;TheNumber<=100;TheNumber++){ //檢查從2到100所有整數 
		for(int divisor=2;divisor<=TheNumber;divisor++){  
			if(TheNumber%divisor==0){ 
				check++; //檢查TheNumber跟divisor整除幾次，超過一次就不是質數 
			}
		}
		if(check==1){ //計數器只有計到一次就是質數(自己和自己整除) 
			printf("%-4d",TheNumber);
		}
		check=0;//計數器歸零 
	}
}
