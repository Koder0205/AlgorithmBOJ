#include <stdio.h>
int f(int n){
	if(n == 0) return sum;
	return f(n-1) + n;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}
