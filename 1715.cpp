#include<stdio.h>
#include<iostream>
#define FOR(i,a) for(int i = 0; i < (int) a; i++)
using namespace std;

int main(){

	int n, m, **matriz, i, j, aux = 0, count = 0; cin >> n >> m;

	//declara um *vetor de tamanho n
	matriz = new int*[n];

	//aloca os vetores de tamanho m que o *vetor aponta 
	for(i = 0; i < n; i++){
		matriz[i] = new int[m];
	}

	//insiro os valores na matriz
	for(int i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> matriz[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matriz[i][j] == 0){
				aux++;
			}
		}
		if(aux == 0){
			count++;
		}	
		aux = 0;
	}

	cout << count << endl;


	//printa matriz
	/*for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}*/

	/*
	//desaloca a matriz
	for(i = 0; i < n; i++){
		delete[] matriz[i];
	}

	delete[] matriz;
	*/
}