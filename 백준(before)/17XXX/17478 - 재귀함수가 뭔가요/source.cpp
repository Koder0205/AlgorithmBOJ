#include <bits/stdc++.h>
using namespace std;

int n;

void recur(int k){
	for(int i=0; i<4*k; i++) printf("_"); puts("\"����Լ��� ������?\"");
	if(k!=n){
		for(int i=0; i<4*k; i++) printf("_"); puts("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.");
		for(int i=0; i<4*k; i++) printf("_"); puts("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.");
		for(int i=0; i<4*k; i++) printf("_"); puts("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"");
		recur(k+1);
	}
	if(k==n){
		for(int i=0; i<4*k; i++) printf("_"); puts("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"");
	}
	for(int i=0; i<4*k; i++) printf("_"); puts("��� �亯�Ͽ���.");
}

int main(){
	scanf("%d", &n);
	puts("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.");
	recur(0);
	return 0;
}
