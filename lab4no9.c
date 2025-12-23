#include<stdio.h>
//N grade until-1
int main(){
	int score;
	while(1){
		scanf("%d",&score);
		if(score==-1){
			return;
		}
		if(score >= 68){
			if(score>100){
				printf("error");
			}
			else if(score>=85){
				printf("%d(A)",score);
			}
			else if(score>=75){
				printf("%d(B)",score);
			}
			else if(score>=68){
				printf("%d(C)",score);
			}
		}
		else{
			if(score>=55){
				printf("%d(D)",score);
			}
			else{
				printf("%d(F)",score);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
