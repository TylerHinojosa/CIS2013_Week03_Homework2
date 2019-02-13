#include <iostream>
using namespace std;
int main(){
	
	cout << "The prime numbers from 3 to 100 are ";
	for(int n = 3; n <= 100; n++){
		
		bool prime = true;
		
		
		
		for(int j = 2; j < n; j++){
			
			if(n % j == 0) prime = false;
		}
		if (prime) cout << ", " <<n;// The number will be printed only if it is\
		prime (its state, prime, did not change from true to false)
	}
	cout << ".";
return 0;}