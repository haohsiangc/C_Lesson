#include <stdio.h>
int main()
{
	int check=0;//�p�ƾ� 
	printf("A list of all prime number from 1 to 100:\n");
	
	for(int TheNumber=2;TheNumber<=100;TheNumber++){ //�ˬd�q2��100�Ҧ���� 
		for(int divisor=2;divisor<=TheNumber;divisor++){  
			if(TheNumber%divisor==0){ 
				check++; //�ˬdTheNumber��divisor�㰣�X���A�W�L�@���N���O��� 
			}
		}
		if(check==1){ //�p�ƾ��u���p��@���N�O���(�ۤv�M�ۤv�㰣) 
			printf("%-4d",TheNumber);
		}
		check=0;//�p�ƾ��k�s 
	}
}
