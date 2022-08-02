using namespace std;
#include <cmath>
#include<iostream>
#define FOR(i, a) for(int i = 1; i < (int) a; i++)

int main(){

	float voltas, placas, total_placas; cin >> voltas >> placas;
	int percent;

	total_placas = placas * voltas;


	FOR(i, 10){
		percent = ceil((i * 10 * total_placas ) / 100);
		cout.unsetf(ios::scientific);
		if(i < 9){
			cout << percent << " ";
		}else
			cout << percent;
	}
		cout << endl;

}