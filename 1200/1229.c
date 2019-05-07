#include <stdio.h>
int main()
{
    double a,b,avg_w,bmi=0;
    scanf("%lf %lf",&a,&b);
    if(a<150){
    	avg_w=a-100.0;
	}
	else if(a>=150 && a<160){
		avg_w=(a-150.0)/2.0+50.0;
	}
	else {
		avg_w=(a-100.0)*0.9;
	}
	bmi=(b-avg_w)*100/avg_w;
	
	if(bmi<=10){
		printf("정상");
	}
	else if(bmi>10 && bmi<=20){
		printf("과체중");
	}
	else {
		printf("비만");
	}
}