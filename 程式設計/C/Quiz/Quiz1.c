#include <stdio.h>
int main()
{
	int Score;
	int NumberofPass=0;
	int NumberofFail=0;
	float Total=0;
	float Average;
	float number=0;
	
	printf("Please enter scores,the program will help you calculate number of pass,fail and the average\n");
	printf("Input:");
	scanf("%d",&Score);
	while(Score!=-1){
		if(Score>=60){
			printf("Output:pass\n");
			NumberofPass++;
		}
		else{
			printf("Output:fail\n");
			NumberofFail++;
		}
		number++;
		Total+=Score;
		printf("Input:");
		scanf("%d",&Score);
	}
	printf("Number of pass:%d\n",NumberofPass);
	printf("Number of fail:%d\n",NumberofFail);
	Average=Total/number;
	printf("Average:%.2f",Average);
	return(0);
}
