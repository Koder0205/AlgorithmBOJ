#include <bits/stdc++.h>
#define INF 1000000007
#define first x
#define second y
using namespace std; 

struct input{
	int idx;
	int x;
	int y;
};

vector<int> lis2;
vector<input> lis3;

bool cmp2(input &a, input &b){
	if(a.idx != b.idx) return a.idx < b.idx;
	return a.x < b.x;
}

bool cmp3(input &a, input &b){
	if(a.idx != b.idx) return a.idx < b.idx;
	if(a.x != b.x) return a.x < b.x;
	return a.y < b.y;
}

bool lowercmp3(const input &a, const input &b){
	if(a.x < b.x && a.y < b.y) return true;
	return false;
}

// M = 2�� ���̽�
// ���� ���� �������� ���� ���������� lis ���ϸ� �ɵ�� -> True 

// M = 3�� ���̽� [ ���߿� ���� ������ �ٽ�Ǯ������� ���� ] 
// �Ƹ� ���� ������ �Ȱ����������
// lis ���Ҷ� �� ������ Ÿ��Ʈ�ϰ��ؼ�
// pair<int,int> �� ���� lis�� ���ϴ°� ���� -> WA
// �Ƹ� �÷����״� �� �̴�� ���� ���� -> �ٷδ��̾� ���� 

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,M;
	int a,b,c;
	cin >> M >> N;
	
	vector<input> arr(N);
	
	if(M == 2){
		for(int i=0; i<N; i++) cin >> arr[i].idx;
		for(int i=0; i<N; i++) cin >> arr[i].x;
		
		sort(arr.begin(), arr.end(), cmp2);
		
		//for(int i=0; i<N; i++) cout << arr[i].idx << " "; puts("");
		//for(int i=0; i<N; i++) cout << arr[i].x << " ";
		
		lis2.push_back(-INF);
		
		for(int i=0; i<N; i++){
			if(lis2.back() < arr[i].x){
				lis2.push_back(arr[i].x);
			}
			else{
				auto it = lower_bound(lis2.begin(), lis2.end(), arr[i].x);
				*it = arr[i].x;
			}
		}
		
		cout << lis2.size()-1;
	}
	else if (M == 3){
		for(int i=0; i<N; i++) cin >> arr[i].idx;
		for(int i=0; i<N; i++) cin >> arr[i].x;
		for(int i=0; i<N; i++) cin >> arr[i].y;
		
		sort(arr.begin(), arr.end(), cmp3);
		
		lis3.push_back({-INF,-INF});
		
		for(int i=0; i<N; i++){
			auto tmp = lis3.back();
			if(tmp.x < arr[i].x && tmp.y < arr[i].y){
				lis3.push_back(arr[i]);
			}
			else{
				auto it = lower_bound(lis3.begin(), lis3.end(), arr[i], lowercmp3);
				*it = arr[i];
			}
		}
		
		cout << lis3.size()-1;
	}
	return 0;
} 
