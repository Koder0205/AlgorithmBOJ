#include <bits/stdc++.h>
using namespace std;

struct{
	int prev;
	int next;
}node[567890];

int main(){
	int n,m;
	char a;
	int b,c;
	
	scanf("%d %d", &n, &m);
	for(int i=0; i<=n; i++){
		node[i].next = i+1;
		if(i) node[i].prev = i-1;
	}
	
	while(m--){
		scanf("%c %d %d\n", &a, &b, &c);
		
		// ���� ��� ���� 
		node[node[a].prev].next = node[a].next;
		node[node[a].next].prev = node[a].prev;
		
		// ��� ���� 
		if(a == 'A'){ node[a].prev = node[b].prev; node[a].next = b; }
		if(a == 'B'){ node[a].next = node[b].next; node[a].prev = b; }
		
		// ��� ���� 
		node[node[a].next].prev = a;
		node[node[a].prev].next = a;
	}
	
	int tmp;
	for(int i=0; i<=n; i++){
		
	} 
}
