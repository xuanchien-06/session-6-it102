#include<stdio.h>

int main(){
	int pass = 1234,usepass;
	printf("hay nhap mat khau gom 4 so: \n");
	for(int i=0;i<10;i++){
		printf("nhap lai: ");
		scanf("%d",&usepass);
		if(usepass==pass){
			printf("ban da nhap dung mat khau");
			break;
		}else{
			printf("sai mat khau");
			printf("\n");
		}
	}
		return 0;
}
	
