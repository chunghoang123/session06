#include<stdio.h>

int main(){
	int nam,thang;
	printf("moi nhap so nam");
	scanf("%d", &nam);
	printf("moi nhap so thang");
	scanf("%d", &thang);
	if(nam%4==0||nam%100!=0 &&nam%400==0){
	
		printf("%d la nam nhuan\n",nam);
		if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
		printf("thang %d co 31 ngay",thang);
	}else if(thang==4||thang==6||thang==9||thang==11){
		printf("thang %d co 30 ngay",thang);
	}else if(thang==2){
		printf("thang %d co 29 ngay",thang);
 }
}
else{
	printf("%d ko phai nam nhuan\n",nam );
	if(thang==2){
		printf("thang %d co 28 ngay",thang);
	}else if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
		printf("thang %d co 31 ngay",thang);
	}else if(thang==4||thang==6||thang==9||thang==11){
		printf("thang %d co 30 ngay",thang);
	}
}

	
		
	return 0;
}
