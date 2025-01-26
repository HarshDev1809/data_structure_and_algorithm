#include<iostream>
using namespace std;

long long invertNumber(long long number){
	long long result = 0;
	while(number !=0){
		int digit = number % 10;
		result = (result * 10) + digit;
		number /= 10;
	}
	return result;
}

bool isPalindrome(int number){
	if(number < 0){
		return false;
	}
	return number == invertNumber(number);
	
}

int main(){
	int number;
	cin >> number;
	if(isPalindrome(number)){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}

	return 0;
}
