#include <iostream>
using namespace std;

int invertNumber(int number){
	int result = 0;
	while(number != 0){
		int digit = number % 10;
		result = (result * 10) + digit;
		number /= 10;
	}
	return result;
}

int main(){

	cout << invertNumber(1232) << endl;
}
