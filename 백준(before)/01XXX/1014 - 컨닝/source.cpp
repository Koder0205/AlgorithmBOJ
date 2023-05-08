#include <stdio.h>

int map[11][11] = {0};

int main(){
	int t,m,n,odd,even;
	char tmp;
	scanf("%d",&t);
	
	for(int i=0; i<t; i++){
		for(int x=0; x<10; x++) for(int y=0; y<10; y++) map[x][y] = 0;
		
		scanf("%d %d\n", &m, &n); //\n���� �ٳ��� ó�� 
		for(int j=0; j<m; j++){
			for(int l=0; l<n; l++){
				scanf("%c", &tmp);
				map[j][l] = tmp!='X'?1:0;
			}
			scanf("%c",&tmp); //�ٳ��� ���� ó��. 
		}
		
		odd=0;
		even=0;
		
		for(int j=0; j<m; j++){
			for(int l=0; l<n; l++){
				if(l%2==0)odd+=map[j][l]; //i) ¦������ ��.
				else even+=map[j][l];     //ii) Ȧ������ ��.
			}
		}
		printf("%d\n", odd>even?odd:even);
	}
	return 0;
}
