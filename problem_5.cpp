#include <iostream>
using namespace std;

int main(){
    bool found = false;
    for(int i = 20; found == false ; i++){
        for(int j = 2; j <= 20; j++){
            if (i % j != 0){
                break;
            }else if (j == 20){
                found = true;
                cout << i << endl;
            }
        }
    }
    return 0;

}