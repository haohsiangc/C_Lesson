#include <stdio.h>
int main()
{
//	int x;
//	int y;
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int b[10]={1,2,3,4,5,6,7,8,9,10};
	for(size_t x=0;x<=9;x++){//>>�]�i�H�o�˼gfor(x=0;x<=9;x++)�A�u�O�W���n�ŧiint x 
		for(size_t y=0;y<=9;y++){
			if(a[x]==b[y]){
				printf("%d ",a[x]);
			}
		}
	}
	
}
