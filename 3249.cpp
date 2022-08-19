#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){

	char *hab;
	int aux = 0, vitorias = 0, casos;

	hab = (char*)malloc(sizeof(char) * 1);
	cin >> casos;
	for(int i = 0; i < casos; i++){
		cin >> hab;
		for(long unsigned int j = 0; j < strlen(hab); j++){
			//cout << hab[j] << endl;
			if(hab[j] == 'c' && hab[j + 1] == 'd' || hab[j] == 'C' && hab[j + 1] == 'D'){
				aux++;	
			}
			
		}
		if(aux == 0){
			vitorias++;
		}		
		aux = 0;
	}
	cout << vitorias << endl;
}
