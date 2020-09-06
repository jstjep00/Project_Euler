#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int sum_squares = 0, squared_sums = 0, diff;
    for(int i = 0; i <= 100; i++){
        sum_squares += pow(i, 2);
        squared_sums += i;
    }
    squared_sums = pow(squared_sums, 2);
    diff = squared_sums - sum_squares;
    cout << diff << endl;

    return 0;
}