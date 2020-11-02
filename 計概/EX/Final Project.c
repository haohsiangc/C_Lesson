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

	printf("\n***************************************************會計折舊費用計算器***************************************************\n");

	while(logic=1){					//logic判斷程式要不要繼續執行  
		printf("請選擇需要的折舊方法:\n");
		printf("\n(1)直線法 (2)生產數量法 (3)工作時間法 (4)定律餘額遞減法 (5)倍數餘額遞減法 (6)耐用年數合計法:");
		scanf("%d",&choice);		//選擇計算方法
		switch(choice){
			case 1:
				printf("直線法:\n");
				SL();
				break;
			case 2:
				printf("生產數量法:\n");
				UOOM();
				break;
			case 3:
				printf("工作時間法:\n");
				SHM();
				break;
			case 4:
				printf("定律餘額遞減法:\n");
				DB();
				break;
			case 5:
				printf("倍數餘額遞減法:\n");
				DDB();
				break;
			case 6:
				printf("耐用年數合計法:\n");
				SYD();
				break;
		}
		printf("\n需要繼續計算嗎?\nY or N\n");
		fflush(stdin);
		scanf("%c",&YorN);
		if(YorN=='y'||YorN=='Y'){
			logic=1;
		}
		if(YorN=='n'||YorN=='N'){
			system("pause");
			exit(0);			//若輸入N則結束程式 
		}
	}	
}
void SL()
{
	int cost,ERV,year;			//ERV=估計殘值 
	int DEPP;					//DEPP=每期間折舊費用 
	int AD,BBV,FBV;
	
	printf("輸入資產成本:");
	scanf("%d",&cost);
	printf("輸入估計殘值:");
	scanf("%d",&ERV);
	printf("輸入耐用年限:");
	scanf("%d",&year);
	
	DEPP=(cost-ERV)/year;		
	printf("每期折舊費用:%d\n",DEPP); 
	
	printf("%20s%20s%20s%20s\n","帳面金額","折舊費用","累積折舊","期末帳面金額");
	for(int i=1;i<=year;i++){ 
		BBV=cost-DEPP*(i-1);	//BBV=期初帳面金額  
		AD=DEPP*i;			 	//AD=累計折舊  
		FBV=cost-DEPP*i;		//FBV=期末帳面價金額 
		printf("第%2d年%14d%20d%20d%20d\n",i,BBV,DEPP,AD,FBV);
	}
}
void UOOM()
{
	int cost,ERV,ETP;			//ETP=預計總產量 
	float DCPU;					//DCPU=單位折舊費用 
	int DCPU_temp;				//DCPU_temp=取到小數點後兩位時暫存在這個變數 
	int DCOT,APOT;				//DCOT=第t期折舊費用,APOT=第t期實際產量

	printf("輸入資產成本:");
	scanf("%d",&cost);
	printf("輸入估計殘值:");
	scanf("%d",&ERV);
	printf("輸入預計總產量:");
	scanf("%d",&ETP);
	
	DCPU=(float)(cost-ERV)/ETP+0.004;
	DCPU_temp=(int)100*DCPU;	//先將DCPU*100讓整數部分包含到原本小數點後兩位，再把它的資料型態變成整數存到DCPU_temp中 
	DCPU=(float)DCPU_temp/100;	//再把DCPU_temp/100資料型態變回浮點數，這樣就能將數字取至小數點後兩位了 
	printf("單位折舊費用:$%.2f/單位\n",DCPU);
	
	printf("輸入本年度實際產量:");
	scanf("%d",&APOT);	 
	DCOT=DCPU*APOT;
	printf("本年度折舊費用:%d",DCOT);
}
void SHM()
{
	int cost,ERV,EH;			//EH=預計工作時間 
	float DCPU;					//DCPU=單位折舊費用  
	int DCPU_temp;
	int DCOT,AWHOT;				//DCOT=第t期折舊費用,AWHOT=第t期實際工作時間

	printf("輸入資產成本:");
	scanf("%d",&cost);
	printf("輸入估計殘值:");
	scanf("%d",&ERV);
	printf("輸入預計工作時間:");
	scanf("%d",&EH);
	
	DCPU=(float)(cost-ERV)/EH+0.004;
	DCPU_temp=(int)DCPU*100;
	DCPU=(float)DCPU_temp/100;
	printf("單位折舊費用:$%.2f/時間\n",DCPU);
	
	printf("輸入本年度實際工作時間:");
	scanf("%d",&AWHOT);	
	DCOT=DCPU*AWHOT;
	printf("本年度折舊費用:%d",DCOT);
}
void DB()
{
	double cost,ERV,year;
	double FDR;					//FDR=固定折舊率 
	int FDR_temp;
	int AD=0,DE,BBV,FBV;		//DE=折舊費用 
	
	printf("輸入資產成本:");
	scanf("%lf",&cost);
	printf("輸入估計殘值:");
	scanf("%lf",&ERV);
	printf("輸入耐用年限:");
	scanf("%lf",&year);

	
	FDR=1-pow(ERV/cost,1/year)+0.004;
	FDR_temp=(int)(FDR*100);
	FDR=(double)FDR_temp/100; 
	printf("固定折舊率:%.2f\n",FDR);
	
	printf("%20s%20s%20s%20s%20s\n","帳面金額","折舊率","折舊費用","累積折舊","期末帳面金額");
	for(int i=1;i<=year;i++){
		BBV=cost-AD;
		DE=(int)BBV*FDR;
		AD+=DE;
		FBV=BBV-DE;
		if(FBV<ERV){			//如果期末帳面金額小於估計殘值，則調整折舊費用讓期末帳面金額等於估計殘值 
			DE=BBV-ERV;
			FBV=ERV;
		}
		printf("第%2d年%14d%20.2f%20d%20d%20d\n",i,BBV,FDR,DE,AD,FBV);	
	}
}
void DDB()
{
	int cost,ERV,year,multiple;
	float FDR;
	int FDR_temp;
	int AD=0,DE,BBV,FBV;
	
	printf("輸入資產成本:");
	scanf("%d",&cost);
	printf("輸入估計殘值:");
	scanf("%d",&ERV);
	printf("輸入耐用年限:");
	scanf("%d",&year);
	printf("輸入計算倍數(不等於0):");
	scanf("%d",&multiple);
	while(multiple==0){			//防呆機制，避免輸入0時發生程式錯誤 
		printf("計算倍數不等於0，請重新輸入:");
		scanf("%d",&multiple);
	}
	 
	FDR=(float)multiple/year;
	FDR_temp=(int)(FDR*100);
	FDR=(float)FDR_temp/100;
	printf("折舊率:%.2f\n",FDR);
	
	printf("%20s%20s%20s%20s%20s\n","帳面金額","折舊率","折舊費用","累積折舊","期末帳面金額");
	for(int i=1;i<=year;i++){
		BBV=cost-AD;
		DE=(int)BBV*FDR;
		AD+=DE;
		FBV=BBV-DE;
		if(FBV<ERV){
			DE=BBV-ERV;
			FBV=ERV;
		}
		printf("第%2d年%14d%20.2f%20d%20d%20d\n",i,BBV,FDR,DE,AD,FBV);	
	}	
}
void SYD()
{
	int cost,ERV,year;
	float DR;					//DR=折舊率 
	int DR_temp;
	int DC,DE,AD=0,BBV;			//DC=折舊成本
	
	printf("輸入資產成本:");
	scanf("%d",&cost);
	printf("輸入估計殘值:");
	scanf("%d",&ERV);
	printf("輸入耐用年限:");
	scanf("%d",&year);
	
	DC=cost-ERV;
	printf("%20s%20s%20s%20s%20s\n","期初帳面價值","折舊成本","折舊率","各年折舊費用","累積折舊");
	for(int i=1;i<=year;i++){
		DR=(float)2*(year+1-i)/(year+1)/year;
		DR_temp=(int)(DR*1000);
		DR=(float)DR_temp/1000;
		DE=(int)DC*DR;
		AD+=DE; 
		BBV=cost-AD; 
		printf("第%2d年%14d%20d%20.3f%20d%20d\n",i,BBV,DC,DR,DE,AD);
	}
} 
