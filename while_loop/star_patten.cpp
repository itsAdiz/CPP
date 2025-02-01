#include <iostream>
using namespace std;

int main() {
    int n ; //numbers of row
    cin >> n;
     int i = 1; //counter 

    // IT WILL RUN FOR EACH ROW 
     while(i <= n){
        int j = 1;
        
        // IT WILL RUN FOR EACH COLUMN
        while(j <=n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
     }
    return 0;
}