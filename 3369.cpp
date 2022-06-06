#include<stdio.h>
#include<set>
#include<iterator>
#include<iostream>
#include<string>

using namespace std;

int main(){

	set <char> inicial;
	set <string> palavras;
	string palavra;
	int casos;
	int tam;
	int a = 0;

	cout << "numero de casos: ";
	cin >> casos;
	for(int i = 0; i < casos; i++){
		cout << "palavra: ";
		cin >> palavra;
		inicial.insert(palavra[0]);
		palavras.insert(palavra);
	}
	for(auto i: palavras){
		tam = i.length();
		for(auto k: inicial){
			if(a < tam){
				if(k == i[a]){
					a++;
				}
				if(a == tam){
					cout << "Y";
				}
			}
			cout << "i = " << i;
			cout << "i[a] = " << i[a];


		a = 0;
		}
	}
	if(a != tam){
		cout << "N";
	}
}
	


		/*for(int j = 0; j < tam; j++){
				
			if(palavra[j] == i){
				if(j == tam - 1);
				cout << "tem";
			}
			else
				return 0;

			}*/