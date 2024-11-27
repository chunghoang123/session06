#include<stdio.h>

int main(){
	int a;
	printf(" moi nhap so nguyen");
	scanf("%d", &a);
	for(int i = 1;i<=a;i++){
		if(a % i ==0){
			printf("%d la uoc cua %d\n",i,a);
		}
	}
	
	
	
	return 0;
}
