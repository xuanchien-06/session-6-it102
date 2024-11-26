#include<stdio.h>

int main(){
	int thang,nam,ngay;
	printf("moi ban nhap thang: ");
	scanf("%d",&thang);
	printf("moi ban nhap nam: ");
	scanf("%d",&nam);
	if(thang<1 || thang>12){
		printf("thang khong hop le");
		}
		
	switch(thang){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("thang %d nam %d co 31 ngay",thang,nam);
	case 4: case 6: case 9: case 11: 
		printf("thang %d nam %d co 30 ngay",thang,nam);
	case 2:
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
                printf("nam %d la nam nhuan nen co 29 ngay",nam);
            }else{
                printf("nam %d khong phai nam nhuan nen co 28 ngay",nam);
            }
	}
	return 0;
}
