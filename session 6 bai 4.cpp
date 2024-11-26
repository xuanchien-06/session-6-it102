#include<stdio.h>
#include<math.h>
int main(){
	int num1, num2, num3;
	float delta, nghiem;
	printf("Nhap vao so a: ");
	scanf("%d", &num1);
	printf("Nhap vao so b: ");
	scanf("%d", &num2);
	printf("Nhap vao so c: ");
	scanf("%d", &num3);
	printf("Phuong trinh bac hai cua ban la: %d*x^2 + %d*x + %d = 0 \n", num1, num2, num3);
	if (num1!=0){
		delta = num2^2 - 4 * num1 * num3;
		if (delta<0){
			printf("Phuong trinh vo nghiem");
		} else if (delta==0){
			nghiem = -num2 / 2*num1;
			printf("Nghiem cua phuong trinh la: x1 = x2 = %.2f", nghiem);
		} else {
			nghiem = (-num2 + sqrt(delta) ) / 2*num1;
			printf("Nghiem cua phuong trinh la: \n");
			printf("x1 = %.2f", nghiem);
			nghiem = (-num2 - sqrt(delta)) / 2*num1;
			printf("Nghiem cua phuong trinh la: \n");
			printf("x2 = %.2f", nghiem);
		}
	} else { 
	nghiem = -num3 / num2;
	printf("Nghiem cua phuong trinh la: x = %.2f", nghiem);
	}
	return 0;
}
