#include <bits/stdc++.h>
using namespace std;

int w[123] = {0};
int v[123] = {0};
int dp[123][123456] = {0}; // dp i, j => i��°���� ���캻 �賶�� �뷮�� j�϶� ��ġ�� �ִ�. 

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	
	for(int i=1; i<=n; i++){
		scanf("%d %d", &w[i], &v[i]);
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=k; j++){
			if(j >= w[i]) dp[i][j] = max(dp[i-1][j-w[i]] + v[i], dp[i-1][j]); // �ְų� / ���� �ʰų�. 
			else          dp[i][j] = dp[i-1][j]; // �ƹ��͵� ���� ����. 
		}
	}
	
	printf("%d", dp[n][k]);
	return 0;
}
