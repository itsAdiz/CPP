#include <iostream>
using namespace std;

int main() {
    int n;
    int counter = 1;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while(counter <= n){
        if(counter % 2 == 0){
            sum += counter;
        }
        counter++;
    }
    cout<<"Sum of all even numbers from 1 to "<<n<<" is "<<sum;
    return 0;
}