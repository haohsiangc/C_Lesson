#include <stdio.h>
void hanoi(int n,int s,int m,int d); 

int time = 0;

int main()
{
    int diskNum;

    printf("Please enter the number of disks you have:");
    scanf("%d", &diskNum);

    hanoi(diskNum,1,2,3);

    printf("The total number of movements is:%d",time);
}

void hanoi(int n,int s,int m,int d)
{
    if (n==1){
        printf("move disk %d from peg%d to peg%d\n",n,s,d);
        time++;
        return;
    }
    else{
        hanoi(n-1,s,d,m);//±qS≥zπLM∑h®ÏD 
        printf("move disk %d from peg%d to peg%d\n",n,s,d);
        time++;
        hanoi(n-1,m,s,d);
    }
}
