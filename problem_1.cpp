#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	cout << "This code adds up all numbers that are divisible" << endl;
	cout << "\t by 3 or 5 up to number you enter." << endl;
	cout << endl;
	cout << "Please enter the number you want to check and add up to:" << endl;
	int i,sum = 0;
	cin >> i;
	if ( i <= 0 ) {
		cout << "Please enter a number that is positive and isn't zero";
		return 0;
	} 					//checks for i and sees if its positive and more than zero
	for (i -= 1; i != 0 ; i--){ 			//goes through all i's until i is 0, subtracting 1 from i each pass, starting off with number smaller than entered

		if( !(i % 3) || !(i % 5) ){	//modulo operation gives 0 if there is no remainder or a positive integer if there is, negative of those would imply if it's divisible or not by those numbers, and logical OR to tie it all together
			sum += i;
		}
	}
	cout << "The sum of all number is: " << sum << endl;
	return 0;
}
