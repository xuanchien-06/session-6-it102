#include<stdio.h>

int main(){
    int numb[5],sochan =0,sole =0;
	printf("nhap vao 5 so nguyen: \n");
	for(int i=0;i<5;i++){
		printf("so thu %d: ",i+1);
		scanf("%d",&numb[i]);
	    	if(numb[i] % 2 != 0){
	    	sole++;		
			}else{
				sochan++;
			}
		}
		printf("so chan gom %d so\n",sochan);
		printf("so le gom %d so\n",sole);
		return 0;
}

