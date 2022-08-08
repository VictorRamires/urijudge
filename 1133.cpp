#include <iostream>
using namespace std;

int main(){	
	int a, b; cin >> a >> b;


	if (a > b){
		for(int i = b + 1; i < a; i++){
			if(i % 5 == 3 || i %  5 == 2){
				cout << i << endl;
			}
		}
	}
	
	if (a < b){
		for(int i = a + 1; i < b; i++){
			if(i %  5 == 3 || i % 5 == 2){
				cout << i << endl;
			}
		}
	}

}
