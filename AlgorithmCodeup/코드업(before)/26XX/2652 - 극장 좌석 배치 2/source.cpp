#include <stdio.h>
int n;
int k;
int c = 0;
int f(int place, int person, int left){
    if(person == k) { c++; return 0;}
    if(place == n) return 0;
 
    if(left != 1){
    f(place + 1, person +1, 1); /* ��� ���� */}
    f(place + 1, person , 0);   /* ���� ���� */
 
}
 
 
int main(){
    scanf("%d %d", &n , &k);
    f(0,0,0);
    printf("%d", c);
    return 0;
}
