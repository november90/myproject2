/* ������� ���Ǹ� ���ϴ� C���α׷��� �ۼ��Ͽ� ���ÿ�. ����� �ظ��� ������, ���̸� �Է¹޾Ƽ� ���Ǹ� ����Ͻÿ�. */

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(){
	double r,h,v; 
	printf("�������� ���̸� �Է��ϼ��� : ");
	scanf("%lf",&r);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%lf",&h);
	
	v=PI*pow(r,2)*h;
	
	printf("���ϰ��� �ϴ� ���� ������ %.2lf�Դϴ�.\n",v);
	
	return 0;
}
