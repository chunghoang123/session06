#include<stdio.h>

int main(){
	int num1,num2,num3,num4,num5;
	int a=0, b=0;
	printf("moi nhap so nguyen");
	scanf("%d",&num1);
	printf("moi nhap so nguyen");
	scanf("%d",&num2);
	printf("moi nhap so nguyen");
	scanf("%d",&num3);
	printf("moi nhap so nguyen");
	scanf("%d",&num4);
	printf("moi nhap so nguyen");
	scanf("%d",&num5);
	
	
	if(num1 % 2 != 0){
		printf("la so le:%d\n",num1);
		a += 1;
			}else{
		printf("la so chan:%d\n", num1);
		b += 1;
	}
	if(num2 % 2 != 0){
		printf("la so le:%d\n",num2);
		a += 1;
	}else{
		printf("la so chan:%d\n",num2);
			b += 1;
	}
	if(num3 % 2 != 0){
		printf("la so le:%d\n", num3);
		a += 1;
	}else{
		printf("la so chan;%d\n",num3);
			b += 1;
	}
	if(num4 % 2 != 0){
		printf("la so le:%d\n", num4);
		a += 1;
	}else{
		printf("la so chan:%d\n", num4);
			b += 1;
	}
	if(num5 % 2 != 0){
		printf("la so le:%d\n", num5);
		a += 1;
	}else{
		printf("la so chan:%d\n", num5);
			b += 1;
	}
		printf(" co %d so le va %d so chan",a,b);
	return 0;
}
