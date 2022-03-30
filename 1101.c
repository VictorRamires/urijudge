#include<stdio.h>
#include<stdlib.h>

int main(){

	int a,b;
	int soma;

	while(1){
		scanf("%d %d", &a,&b);
		if(a != 0 && b!= 0 && a > 0 && b > 0){

			if(a > b){
				for(int i = b; i <= a; i++){
					soma = soma + i;
					printf("%d ", i);
				}
			}

			if(a < b){
				for(int i = a; i <= b; i++){
					soma = soma + i;
					printf("%d ", i);
				}
			}
			if(a == b){
				soma = a;
				printf("%d ", a);
			}
			printf("Sum=%d\n", soma);
			soma = 0;
		}else
			return 0;
	}
}
