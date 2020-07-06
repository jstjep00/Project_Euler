#include <iostream>
#include <math.h>
#include <stdlib.h>


using namespace std;

unsigned long long biggest_prime_factor(unsigned long long int number)
{

    unsigned long long int max;
    while (number % 2 == 0) {
        max = 2;
        number = number/2;
    }

    for (int i = 3; i <= sqrt(number); i += 2) {
        while (number % i == 0) {
            max = i;
            number = number / i;
        }
    }

    if (number > 2)
        max = number;

    return max;
}

int main(int argc, char *argv[])
{
    if (argc == 2) {
        char *p;
        unsigned long long int number = strtol(argv[1], &p, 10);
        cout << "Biggest prime factor for number " << number << " is:" << endl;
        cout << biggest_prime_factor(number) << endl;
    } else {
        cout << endl;
        cout << "Please enter number after calling the program like this:" << endl;
        cout << "./problem3 [number]" << endl;
    }

    return 0;
}
