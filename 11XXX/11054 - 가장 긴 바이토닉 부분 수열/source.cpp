#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

int maxdp[1234];
int mindp[1234];
int arr[1234] = {0};

int main(){
	int n;
	int tmp;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	for(int i=0; i<1234; i++){ maxdp[i] = mindp[i] = 1; }
	
	for(int i=0; i<=n-1; i++){
		maxdp[i] = 1;
		for(int j=0; j<i; j++) if(arr[i] > arr[j]) maxdp[i] = max(maxdp[i], maxdp[j]+1);
	}
	for(int i=n-1; i>=0; i--){
		mindp[i] = 1;
		for(int j=n-1; j>i; j--) if(arr[i] > arr[j]) mindp[i] = max(mindp[i], mindp[j]+1);
	}
	
	//for(int i=0; i<=n-1; i++) printf("[%d %d] ",maxdp[i] , mindp[i]);
	
	tmp = 0;
	for(int i=0; i<=n-1; i++) tmp = max(tmp, maxdp[i]+mindp[i]-1);
	printf("%d", tmp);
	return 0;
}
