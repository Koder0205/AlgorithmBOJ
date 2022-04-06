/*
rF m/s

rB m/s �ε�

rB < rF �̸� rF�� �� �������ʳ�
�������� ���ų����Ű��ƿ�

��? second per meter �ϱ�

�ӷ��� 1/rF �ΰǰ�

0.25 < 0.33�̴ϱ� 

�̰Ű��׿� 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<pair<ll,ll>> v;

int main(){
	ll l,n,rf,rb;
	ll maxday = -1;
	
	cin >> l >> n >> rf >> rb;
	
	for(ll i=0; i<n; i++){
		ll a,b;
		cin >> a >> b;
		v.push_back({-b,-a});
		maxday = max(maxday, a);
	}
	sort(v.begin(), v.end());
	
	ll ans = 0;
	ll now = 0;
	ll total = 0;
	for(auto k : v){
		if(now > -k.second) continue; // �̹� ������.
		now = -k.second;
		 
		ans += (-k.second * (rf-rb) - total) * -k.first;
		total += (-k.second * (rf-rb) - total);
	}
	/*
	while(now < maxday){
		//printf("\n[%d %d] ", now, ans);
		
		ll mxscore = 0;
		ll mxday = now;
		
		for(auto k : v){
			ll able = max(-k.second-now, 0LL) * (rf-rb) * -k.first;
			//printf("{%d}", able);
			if(able >= mxscore && mxday < -k.second){
				mxscore = able;
				mxday = -k.second;
			}
		}
		
		printf("[%d %d]", mxscore, mxday);
		ans += mxscore;
		now = mxday;
	}
	*/
	cout << ans;
	return 0;
}
