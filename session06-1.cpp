#include<stdio.h>
int main(){
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int tc;
	printf("moi nhap so thu nhat:");
	scanf("%d", &num1);
	printf("moi nhap so thu hai:");
	scanf("%d", &num2);
	printf("moi nhap so thu ba:");
	scanf("%d", &num3);
	printf("moi nhap so thu tu:");
	scanf("%d", &num4);
	printf("moi nhap so thu nam:");
	scanf("%d", &num5);

		
	if(num1 % 2 !=0){
		printf(" %d la so le\n", num1);
		tc += num1;
	}
	 if (num2 %2 !=0){
		printf(" %d la so le\n", num2);
		tc+=num2;
	}
	 if (num3 %2 !=0){
		printf(" %d la so le\n", num3);
		tc+=num3;
	}
	 if (num4 %2 !=0){
		printf(" %d la so le\n", num4);
		tc+=num4;
	}
	 if (num5 %2 !=0){
		printf(" %d la so le\n", num5);	
		tc+=num5;
}
	printf(" tong cac so le la: %d",tc);
	
	

		
	return 0;
}
