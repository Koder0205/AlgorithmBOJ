#include <stdio.h>

int min(int a, int b){ return a>b?b:a; }

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	
	if(n==1) printf("%d", 1); //��ĭ 
	else if(n==2) printf("%d", min((m-1)/2+1, 4));   /* /\/\/\ ó�� �̵��Ҷ� */
	else if(n>=3){
		if(m>=7) {printf("%d", m-2);}                /* �ι� �� ���η� ���, �״��� /\/\/\ */
		else     {printf("%d", min(m,4));}		 	 /* /\/\/\ ó�� �̵��Ҷ� */
	}
	return 0;
}
