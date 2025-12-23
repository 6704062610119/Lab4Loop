#include<stdio.h>
//display square of a character version 2
int main(){
	char input;
	int colum,row,i;
	scanf("%c %d %d",&input,&colum,&row);
	for(i=0;i<row;i++){
		int j;
		for(j=0;j<colum;j++){
			printf("%c",input);
		}
		printf("\n");
	}
	
	return 0;
}
