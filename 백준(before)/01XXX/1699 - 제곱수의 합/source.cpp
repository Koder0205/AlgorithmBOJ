#include <stdio.h>
#include <algorithm>


int arr[100001] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		arr[i] = i; // 1*1�θ� �����ϴ� �־��� Ǯ��.
		for(int j=1; j*j<=i; j++){
			arr[i] = std::min(arr[i], arr[i-j*j]+1);//���� Ǯ�̿� Ÿ Ǯ�̸� ��. 
		}
	}
	printf("%d", arr[n]);
	return 0;
} 
