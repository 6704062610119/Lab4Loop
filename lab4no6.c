#include<stdio.h>

int main(){
	char input;
	int num,i;
	scanf("%c %d",&input,&num);
	for(i=0;i<num;i++){
		int j;
		for(j=0;j<num;j++){
			printf("%c",input);
		}
		printf("\n");
	}
	
	return 0;
}
