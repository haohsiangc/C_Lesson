#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void SL();
void UOOM();
void SHM();
void DB();
void DDB();
void SYD();
int main()
{
	int choice,logic=1;				 
	char YorN;

	printf("\n***************************************************�|�p���¶O�έp�⾹***************************************************\n");

	while(logic=1){					//logic�P�_�{���n���n�~�����  
		printf("�п�ܻݭn�����¤�k:\n");
		printf("\n(1)���u�k (2)�Ͳ��ƶq�k (3)�u�@�ɶ��k (4)�w�߾l�B����k (5)���ƾl�B����k (6)�@�Φ~�ƦX�p�k:");
		scanf("%d",&choice);		//��ܭp���k
		switch(choice){
			case 1:
				printf("���u�k:\n");
				SL();
				break;
			case 2:
				printf("�Ͳ��ƶq�k:\n");
				UOOM();
				break;
			case 3:
				printf("�u�@�ɶ��k:\n");
				SHM();
				break;
			case 4:
				printf("�w�߾l�B����k:\n");
				DB();
				break;
			case 5:
				printf("���ƾl�B����k:\n");
				DDB();
				break;
			case 6:
				printf("�@�Φ~�ƦX�p�k:\n");
				SYD();
				break;
		}
		printf("\n�ݭn�~��p���?\nY or N\n");
		fflush(stdin);
		scanf("%c",&YorN);
		if(YorN=='y'||YorN=='Y'){
			logic=1;
		}
		if(YorN=='n'||YorN=='N'){
			system("pause");
			exit(0);			//�Y��JN�h�����{�� 
		}
	}	
}
void SL()
{
	int cost,ERV,year;			//ERV=���p�ݭ� 
	int DEPP;					//DEPP=�C�������¶O�� 
	int AD,BBV,FBV;
	
	printf("��J�겣����:");
	scanf("%d",&cost);
	printf("��J���p�ݭ�:");
	scanf("%d",&ERV);
	printf("��J�@�Φ~��:");
	scanf("%d",&year);
	
	DEPP=(cost-ERV)/year;		
	printf("�C�����¶O��:%d\n",DEPP); 
	
	printf("%20s%20s%20s%20s\n","�b�����B","���¶O��","�ֿn����","�����b�����B");
	for(int i=1;i<=year;i++){ 
		BBV=cost-DEPP*(i-1);	//BBV=����b�����B  
		AD=DEPP*i;			 	//AD=�֭p����  
		FBV=cost-DEPP*i;		//FBV=�����b�������B 
		printf("��%2d�~%14d%20d%20d%20d\n",i,BBV,DEPP,AD,FBV);
	}
}
void UOOM()
{
	int cost,ERV,ETP;			//ETP=�w�p�`���q 
	float DCPU;					//DCPU=�����¶O�� 
	int DCPU_temp;				//DCPU_temp=����p���I����ɼȦs�b�o���ܼ� 
	int DCOT,APOT;				//DCOT=��t�����¶O��,APOT=��t����ڲ��q

	printf("��J�겣����:");
	scanf("%d",&cost);
	printf("��J���p�ݭ�:");
	scanf("%d",&ERV);
	printf("��J�w�p�`���q:");
	scanf("%d",&ETP);
	
	DCPU=(float)(cost-ERV)/ETP+0.004;
	DCPU_temp=(int)100*DCPU;	//���NDCPU*100����Ƴ����]�t��쥻�p���I����A�A�⥦����ƫ��A�ܦ���Ʀs��DCPU_temp�� 
	DCPU=(float)DCPU_temp/100;	//�A��DCPU_temp/100��ƫ��A�ܦ^�B�I�ơA�o�˴N��N�Ʀr���ܤp���I����F 
	printf("�����¶O��:$%.2f/���\n",DCPU);
	
	printf("��J���~�׹�ڲ��q:");
	scanf("%d",&APOT);	 
	DCOT=DCPU*APOT;
	printf("���~�ק��¶O��:%d",DCOT);
}
void SHM()
{
	int cost,ERV,EH;			//EH=�w�p�u�@�ɶ� 
	float DCPU;					//DCPU=�����¶O��  
	int DCPU_temp;
	int DCOT,AWHOT;				//DCOT=��t�����¶O��,AWHOT=��t����ڤu�@�ɶ�

	printf("��J�겣����:");
	scanf("%d",&cost);
	printf("��J���p�ݭ�:");
	scanf("%d",&ERV);
	printf("��J�w�p�u�@�ɶ�:");
	scanf("%d",&EH);
	
	DCPU=(float)(cost-ERV)/EH+0.004;
	DCPU_temp=(int)DCPU*100;
	DCPU=(float)DCPU_temp/100;
	printf("�����¶O��:$%.2f/�ɶ�\n",DCPU);
	
	printf("��J���~�׹�ڤu�@�ɶ�:");
	scanf("%d",&AWHOT);	
	DCOT=DCPU*AWHOT;
	printf("���~�ק��¶O��:%d",DCOT);
}
void DB()
{
	double cost,ERV,year;
	double FDR;					//FDR=�T�w���²v 
	int FDR_temp;
	int AD=0,DE,BBV,FBV;		//DE=���¶O�� 
	
	printf("��J�겣����:");
	scanf("%lf",&cost);
	printf("��J���p�ݭ�:");
	scanf("%lf",&ERV);
	printf("��J�@�Φ~��:");
	scanf("%lf",&year);

	
	FDR=1-pow(ERV/cost,1/year)+0.004;
	FDR_temp=(int)(FDR*100);
	FDR=(double)FDR_temp/100; 
	printf("�T�w���²v:%.2f\n",FDR);
	
	printf("%20s%20s%20s%20s%20s\n","�b�����B","���²v","���¶O��","�ֿn����","�����b�����B");
	for(int i=1;i<=year;i++){
		BBV=cost-AD;
		DE=(int)BBV*FDR;
		AD+=DE;
		FBV=BBV-DE;
		if(FBV<ERV){			//�p�G�����b�����B�p����p�ݭȡA�h�վ���¶O���������b�����B������p�ݭ� 
			DE=BBV-ERV;
			FBV=ERV;
		}
		printf("��%2d�~%14d%20.2f%20d%20d%20d\n",i,BBV,FDR,DE,AD,FBV);	
	}
}
void DDB()
{
	int cost,ERV,year,multiple;
	float FDR;
	int FDR_temp;
	int AD=0,DE,BBV,FBV;
	
	printf("��J�겣����:");
	scanf("%d",&cost);
	printf("��J���p�ݭ�:");
	scanf("%d",&ERV);
	printf("��J�@�Φ~��:");
	scanf("%d",&year);
	printf("��J�p�⭿��(������0):");
	scanf("%d",&multiple);
	while(multiple==0){			//���b����A�קK��J0�ɵo�͵{�����~ 
		printf("�p�⭿�Ƥ�����0�A�Э��s��J:");
		scanf("%d",&multiple);
	}
	 
	FDR=(float)multiple/year;
	FDR_temp=(int)(FDR*100);
	FDR=(float)FDR_temp/100;
	printf("���²v:%.2f\n",FDR);
	
	printf("%20s%20s%20s%20s%20s\n","�b�����B","���²v","���¶O��","�ֿn����","�����b�����B");
	for(int i=1;i<=year;i++){
		BBV=cost-AD;
		DE=(int)BBV*FDR;
		AD+=DE;
		FBV=BBV-DE;
		if(FBV<ERV){
			DE=BBV-ERV;
			FBV=ERV;
		}
		printf("��%2d�~%14d%20.2f%20d%20d%20d\n",i,BBV,FDR,DE,AD,FBV);	
	}	
}
void SYD()
{
	int cost,ERV,year;
	float DR;					//DR=���²v 
	int DR_temp;
	int DC,DE,AD=0,BBV;			//DC=���¦���
	
	printf("��J�겣����:");
	scanf("%d",&cost);
	printf("��J���p�ݭ�:");
	scanf("%d",&ERV);
	printf("��J�@�Φ~��:");
	scanf("%d",&year);
	
	DC=cost-ERV;
	printf("%20s%20s%20s%20s%20s\n","����b������","���¦���","���²v","�U�~���¶O��","�ֿn����");
	for(int i=1;i<=year;i++){
		DR=(float)2*(year+1-i)/(year+1)/year;
		DR_temp=(int)(DR*1000);
		DR=(float)DR_temp/1000;
		DE=(int)DC*DR;
		AD+=DE; 
		BBV=cost-AD; 
		printf("��%2d�~%14d%20d%20.3f%20d%20d\n",i,BBV,DC,DR,DE,AD);
	}
} 
