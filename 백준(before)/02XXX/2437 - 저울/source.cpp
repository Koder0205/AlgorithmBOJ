#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};
int prefix[1234] = {0};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+n);
	
	for(int i=0; i<n; i++){
		if(i) prefix[i] = prefix[i-1] + arr[i];
		else prefix[i] = arr[i];
	}
	
	if(prefix[0] != 1){ cout << 1; return 0; }
	
	for(int i=1; i<n; i++){
		if(prefix[i-1]+1 < arr[i]){
			cout << prefix[i-1]+1;
			return 0;
		}
	}
	cout << prefix[n-1]+1;
	return 0;
}

//���� k���� ���ؼ� prefix[k] ����.
//prefix[k]+1 < arr[k+1] �� ��� prefix[k]+1�� ������ ���� ���ڰ� �� ��������
//���� ��� ������ �����ȴ�?
//prefix[last_k]+1 
