#include <iostream>
using namespace std;

int palindrome_check(int number)
{
    int n,r,sum=0,temp;    
    n = number;
    temp=n;    
    while(n>0)
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    
    if(temp==sum)
        return sum;    
    else
        return 0;  
}  

int main(int argc, char *argv[]){
    int number, biggest_palindrome = 0, num;
    for(int i=100; i < 1000; i++){
        for(int j=100; j < 1000; j++){
            number = i*j;
            num = palindrome_check(number);
            if (num > biggest_palindrome)
                biggest_palindrome = num;
        }
    }
    cout << biggest_palindrome << endl;
    return 0;
}