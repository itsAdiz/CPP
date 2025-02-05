#include <iostream>
using namespace std;

int main() {
    short i = 0 ;

    for(;;){
        if(i<=10){
            cout << i << endl;
            i++;}else{
                break;
            }
    }
    return 0;
}