#include <stdio.h>

int main(){
	double height, kg, fat;
	scanf("%lf %lf", &height, &kg);
	fat = (kg-((height-100)*0.9))*100/((height-100)*0.9);
	printf("%s", fat>20?"��":fat<=10?"����":"��ü��");
	return 0;
}
