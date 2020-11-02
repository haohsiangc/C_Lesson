#include <stdio.h> 
int main()
{
	int i,a;
	int j;
	int sum=0;
	float avg=0;
	int odd=0;
	int even=0;
	
	printf("the number of integer you want to enter:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		printf("the %dth number:",i);
		scanf("%d",&j);
		sum+=j;
		if(j%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	
	printf("the sum is %d\n",sum);
	avg=(float)sum/a;
	printf("the average is %.2f\n",avg);
	printf("the number of odd number is %d\n",odd);
	printf("the number of even number is %d",even);
}
