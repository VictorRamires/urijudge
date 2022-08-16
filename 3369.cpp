#include<stdio.h>
#include<cstring>
#include<set>
#include<iterator>
#include<iostream>
#include<string>

using namespace std;

int main(){

	int inicial[26];
	set <string> palavras;
	string palavra;
	int casos, x, tam, a = 0;

	memset(inicial, 0, sizeof inicial);

	cout << "numero de casos: ";
	cin >> casos;
	for(int i = 0; i < casos; i++){
		cout << "palavra: ";
		cin >> palavra;
		x = palavra[0] - '0';
		inicial[x - 17] = 1;
		palavras.insert(palavra);
	}

	for(auto i: palavras){
		tam = i.length();
		for(a = 0; a < tam; a++){
			x = i[a] - '0';
			if(inicial[x - 17] != 0){  // a tem no vetor de iniciais
				if(a == tam - 1){
						cout << "Y" << "\n";
						return 0;
				}
			}
		}
		a = 0;
	}
	
	cout << "N" << "\n";
}
