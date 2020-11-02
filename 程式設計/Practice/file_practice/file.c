#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 30
int main(){
	char name_number_grade[SIZE];
	char *column;
	int grade;
	FILE *file=fopen("students.csv","r");
	FILE *new_file=fopen("new_students.csv","w");
	//fscanf 
	fscanf(file,"%30s",name_number_grade);
	column=strtok(name_number_grade,",");
	while(!feof(file)){
		int count;
		for(count=1;count<=3;count++){
        	if(count==3){
            	grade=atoi(column);
            	if(grade>=80){
		            printf("A\n");
		            fputs("A\n",new_file);
	            }
	            else if(grade>=70){
		            printf("B\n");
		            fputs("B\n",new_file);
               	}
             	else if(grade>=60){
	        	    printf("C\n");
		            fputs("C\n",new_file);
	            }
            	else if(grade>=50){
	            	printf("D\n");
	            	fputs("D\n",new_file);
            	}
	            else{
	            	printf("E\n");
            		fputs("E\n",new_file);
             	}
			}
            else{
            	printf ("%s\n",column);
            	fputs(column,new_file);
            	fputs(",",new_file);
			}
            column=strtok(NULL,",");
        }
        printf("\n");
		fscanf(file,"%30s",name_number_grade);
		column=strtok(name_number_grade,",");
	}
	
	fclose(file);
	fclose(new_file);
	
	system("pause");
	return 0;
}
