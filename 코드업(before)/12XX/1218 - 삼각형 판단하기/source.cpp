#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if(a + b <= c)				 printf("�ﰢ���ƴ�");
	else if((a==b)||(b==c)||(c==a)){
		if(a==b && b==c && c==b) printf("���ﰢ��");
		else					 printf("�̵�ﰢ��");
	}
	else if(a*a + b*b == c*c)	 printf("�����ﰢ��");
	else						 printf("�ﰢ��");
	 
	return 0;
}
