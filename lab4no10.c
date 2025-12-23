#include<stdio.h>
//N grade until-1,show x grade
int main(){
	int score,counta=0,countb=0,countc=0,countd=0,countf=0;
	while(1){
		scanf("%d",&score);
		if(score==-1){
			printf("A(%d)\n",counta);
			printf("B(%d)\n",countb);
			printf("C(%d)\n",countc);
			printf("D(%d)\n",countd);
			printf("F(%d)\n",countf);
			return;
		}
		if(score >= 68){
			if(score>100){
				printf("error");
			}
			else if(score>=85){
				printf("%d(A)",score);
				counta++;
			}
			else if(score>=75){
				printf("%d(B)",score);
				countb++;
			}
			else if(score>=68){
				printf("%d(C)",score);
				countc++;
			}
		}
		else{
			if(score>=55){
				printf("%d(D)",score);
				countd++;
			}
			else{
				printf("%d(F)",score);
				countf++;
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
