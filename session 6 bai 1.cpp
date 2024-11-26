#include<stdio.h>

int main(){
    int numb[5],ketqua = 0;
	printf("nhap vao 5 so nguyen: \n");
	for(int i=0;i<5;i++){
		printf("so thu %d: ",i+1);
		scanf("%d",&numb[i]);
			if(numb[i] %2 != 0){
	        	ketqua+=numb[i] ;
	        }
 	}
	printf("tong cac so le la: %d",ketqua);
    return 0;
}
