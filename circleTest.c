/* 원기둥의 부피를 구하는 C프로그램을 작성하여 보시오. 원기둥 밑면의 반지름, 높이를 입력받아서 부피를 계산하시오. */

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(){
	double r,h,v; 
	printf("반지름의 길이를 입력하세요 : ");
	scanf("%lf",&r);
	printf("높이를 입력하세요 : ");
	scanf("%lf",&h);
	
	v=PI*pow(r,2)*h;
	
	printf("구하고자 하는 원의 면적은 %.2lf입니다.\n",v);
	
	return 0;
}
