#include <bits/stdc++.h>
using namespace std;

int dp[123] = {0};

int main(){
	int n;
	scanf("%d", &n);
	
	dp[0] = 1;
	dp[2] = 3;
	for(int i=3; i<=n; i++){
		dp[i] += 3*dp[i-2];
		for(int j=i-4; j>=0; j-=2){ dp[i] += 2*dp[j]; }
	}
	printf("%d", dp[n]);
	return 0;
}
