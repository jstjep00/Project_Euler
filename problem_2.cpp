#include <iostream>

using namespace std;

unsigned int fibonacci_even(int startingNumber, int secondNumber, unsigned int limit){
	unsigned int sum = startingNumber + secondNumber;
	unsigned int temp, evenSum = 2; 	//starting evensum with 2 since number 2 is already added to sum
	for (;sum <= limit ;) { 		//limit for highest number as a term
		if ( !(sum % 2) ) {
			evenSum += sum;  	//if sum is even then add it to evensum
		}
		temp = sum;
		sum += secondNumber;		//pretty easy fibonnaci
		secondNumber = temp;
	}
	return evenSum;
}

int main(int argc, char *argv[]){
	unsigned int limit = 0;
cout << "Please enter the number of times you want fibonnaci sequence to iterate: ";
	cin >> limit;
	unsigned int evenSum = fibonacci_even(1, 2, limit);
	cout << "Result is: " << evenSum << endl;
	return 0;
}

