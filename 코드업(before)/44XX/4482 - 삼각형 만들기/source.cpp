#include <stdio.h>

int main(){
	int n,sum=0;//���ǻ��� 2 
	scanf("%d", &n);
	
	for(int i=1; i<n; i++){ //  ���� ª�� �� 
		for(int j=i; j<n; j++){ // �߰� �� 
			int k = n-(i+j); // ���� �� �� + ���ǻ��� 1 
			if(k<j ) break;//���ǻ��� 3 
			if(i+j > k) sum++;
		}
	}
	
	printf("%d", sum);
	return 0;
}
