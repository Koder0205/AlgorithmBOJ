#include <stdio.h>

int main(){
	int a,b,c,d;
	int sum;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum = a+b+c+d;
	
	switch(sum){
		case 1: printf("��"); break;
		case 2: printf("��"); break;
		case 3: printf("��"); break;
		case 4: printf("��"); break;
		default:printf("��"); 
	}
	return 0;
}
