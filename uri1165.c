#include<stdio.h>

int main(){

	int caso, num;

	scanf("%d", &caso);

	for(int i = 0; i < caso; i++){
		scanf("%d", &num);
			if(num == 2){
				printf("esse numero é primo");
			}
			else if(num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0 && num % 11 != 0){
				printf("esse numero é primo");
		}

	}



}