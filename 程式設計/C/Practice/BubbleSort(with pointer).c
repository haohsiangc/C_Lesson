#include <stdlib.h>
#include <stdio.h>
void BubbleSort(int* input);
void swap(int *element1,int *element2);
int SIZE;
int main(){
    printf("Enter the size of array:");
    scanf("%d",&SIZE);
    int array[SIZE];
    for(size_t i=0;i<SIZE;i++){
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }
    BubbleSort(array);
    system("pause");
    return 0;
}
void BubbleSort(int* input){
    for(int pass=1;pass<SIZE;pass++){
        for(size_t i=0;i<SIZE-pass;i++){
            if(input[i]>input[i+1]){
                swap(&input[i],&input[i+1]);
            }
        }
        printf("Pass %d: ",pass);
        for(size_t j=0;j<SIZE;j++){
            printf("%d ",input[j]);
        }
        printf("\n");
    }
}
void swap(int *element1Ptr,int *element2Ptr){
    int temp;
    temp= *element1Ptr;
    *element1Ptr= *element2Ptr;
    *element2Ptr=temp;
}