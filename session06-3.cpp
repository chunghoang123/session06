#include<stdio.h>

int main(){
	
	
	int mk = 1234;
	int so;
	int kt = 0;
	while(kt == 0){
		printf("moi nhap mk");
		scanf("%d", &so);
		if(so != 1234){
			printf(" sai mk moi nhap lai\n");
			printf(" dung mk");
		
		}
		else {
			printf(" dung mk");
			kt = 1;
			
		}
		
		
	}	
	
	
	return 0;
}
