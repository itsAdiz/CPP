/*
problem statement: sum of given number using while loop

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int i = 1;

    cout << "Enter a number: ";
    cin >> n;
    
    while(i <= n){
        sum += i;
        i++;
    }

    cout<<"Sum : "<<sum;

    return 0;
}