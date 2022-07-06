#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long ull;
int N, Hatk;

ll roomt[198765] = {0};
ll rooma[198765] = {0};
ll roomh[198765] = {0};

/*
 * Hmaxhp �Ķ��Ʈ��. 
 * Hmaxhp �� longlong�����ε�.
 * ���� 1e5���ۿ� �ȵǼ� �׳� O(N)���� Ž���ص� �ɵ��ϴ�. 
 * Hmaxhp�� �ִ밪�� �����ݷ� 1 ������/ü�µѴ� 1e6�� ���̽�
 * �̷��� 1e6*1e6�̴ϱ� 1e12? �� �ִ��ε�. 
 * �ٵ� ���� ��� 123456���ϱ� �����δ� 1e17�� ��¦ �Ѵ� ���ڳ׿�
 * 1e18 ������ �ɰŶ� �����. 
 */
 
ll search(ll s, ll e){ // mid -> Hmaxhp
	ll mid = (s+e)/2;
	if(s>e) return s;
	
	ll Hmaxhp = mid;
	ll Hcurhp = mid;
	ll Hcuratk = Hatk;
	
	bool survflag = true;
	for(ll i=1; i<=N; i++){
		if(roomt[i] == 1){
			ll tmp = roomh[i] % Hcuratk;
			
			if(tmp) Hcurhp -= (roomh[i] / Hcuratk) * rooma[i];
			else    Hcurhp -= (roomh[i] / Hcuratk -1) * rooma[i];
			
			/*ll enemyh = roomh[i];
			ll enemya = rooma[i];
			//printf("%llu %llu %llu %llu\n", Hcurhp, Hcuratk, enemyh, enemya);
			
			while(enemyh>0 && Hcurhp>0){
				enemyh -= Hcuratk;
				if(enemyh<=0ll) break;
				
				Hcurhp -= enemya;
				if(Hcurhp<=0ll){
					survflag = false;
					goto end;
				}
			}*/
		}
		
		if(roomt[i] == 2){
			Hcurhp = min(Hmaxhp, Hcurhp + roomh[i]);
			Hcuratk += rooma[i];
		}
		
		if(Hcurhp <= 0){ survflag = false; break; }
	}
	
	end:
	if(survflag) return search(s,mid-1);
	else         return search(mid+1,e);
}

int main(){
	cin >> N >> Hatk;
	for(int i=1; i<=N; i++){
		cin >> roomt[i] >> rooma[i] >> roomh[i];
	}
	cout << search(1,2e18);
	return 0;
}
