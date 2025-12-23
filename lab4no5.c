#include<stdio.h>

int main(){
	char input;
	int num,i;
	scanf("%c %d",&input,&num);
	for(i=0;i<num;i++){
		printf("%c",input);
	}
	
	return 0;
}
