#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%s+%s=%s", (a%2)?"Ȧ��":"¦��", (b%2)?"Ȧ��":"¦��", ((a+b)%2)?"Ȧ��":"¦��");
	return 0;
}
