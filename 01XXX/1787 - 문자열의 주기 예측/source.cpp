#include <bits/stdc++.h>
#define INF 998244353
using namespace std;
typedef long long ll;

//fail �迭�� ���ǿ� �´� ����� �ִ밪�� �����ϴ���
//�ٵ� ���ϴ°� �ּҰ��̿��� 
//��ü ���� - �ּҰ��� �ֱ��� �ִ밪�̰��� ���� 

int fail[1234567] = {0};
int dp[1234567] = {0}; // fail�� ���ݴ�, ��� �� ���� �ּҰ� 

int memoi(int k){
	if(k==-1 || fail[k] == 0) return INF;
	if(dp[k] != -1) return dp[k];
	return dp[k] = min(fail[k], memoi(fail[k]-1));
}

int main(){
	int N;
	string s;
	cin >> N;
	cin >> s;
	
	for(int i=1,j=0; i<N; i++){
		while(j>0 && s[i] != s[j]) j = fail[j-1]; // �ڷ� �ǵ��ư��� ���� 
		if(s[i] == s[j]) fail[i] = ++j;
	}
	
	//for(int i=0; i<N; i++) printf("{%d} ", fail[i]);
	
	memset(dp, -1, sizeof(dp));
	ll ans = 0;
	for(int i=0; i<N; i++){
		if(memoi(i) != INF){
			ans += (ll)i+1-dp[i];
		}
	}
	cout << ans;
	return 0;
}
