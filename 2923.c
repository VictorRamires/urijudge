#include<stdio.h>

	int main(){

	int porcent = 0;
	int t, a, w, c;


	scanf("%d %d %d %d", &t, &a, &w, &c);

	porcent = (a * 100) / t;

	if (porcent >= c){
	    printf("critical\n");
	}

	else if (porcent >= w && porcent < c){
	    printf("warning\n");
	}
	else{
	    printf("OK\n");
	}

}