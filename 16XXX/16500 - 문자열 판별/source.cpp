#include <bits/stdc++.h>
using namespace std;

vector<string> v;

bool chk[1234] = {0}; 

bool cmp(const string &a, const string &b){
	return a.length()>b.length();
}

int main(){
	string s,tmp;
	cin >> s;
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for(auto k : v){
		bool flag = true;
		for(int j=0; j<k.length(); j++){
			if(s[j] != k[j]){
				flag = false;
				break;
			}
		}
				
		if(flag) chk[k.length()] = true;
	}
	
	for(int i=0; i<s.length(); i++){
		if(chk[i]){
			for(auto k : v){
				bool flag = true;
				for(int j=0; j<k.length(); j++){
					if(s[i+j] != k[j]){
						flag = false;
						break;
					}
				}
				
				if(flag) chk[i+k.length()] = true;
			}
		}
	}
	
	cout << chk[s.length()];
	return 0;
}

/*

:thinking:
�̰� ������ A���� ���� �κй��ڿ�? �ΰ� �����ɰŰ�����
�׳� ���� ������� replace�ؼ� ���ָ�ȵǳ�

:thinking: (2)
�� �� �ȵɰŰ��ٴ°Ÿ� ���޾ƹ���
 
*/ 
