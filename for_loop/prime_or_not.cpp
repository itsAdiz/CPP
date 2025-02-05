/**
 * This program checks if a given number is prime or not.
 * A prime number is a natural number greater than 1 that is only divisible by 1 and itself.
 * 
 * Algorithm:
 * - Takes a number n (currently hardcoded as 9)
 * - Checks for divisibility from 2 to (n-1)
 * - If number is divisible by any value in this range, it's not prime
 * - Uses a boolean flag 'isPrime' to track prime status
 * - Breaks loop on finding first divisor for efficiency
 * 
 * Example:
 * Input: n = 9
 * Output: "Not a prime" (because 9 is divisible by 3)
 *
 */
#include <iostream>
using namespace std;

int main() {
    int n = 9 ;
    bool isPrime = 1 ;
    for(int i =2 ; i < n ; i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }


    if (isPrime == 1){
        cout<<"prime";
    }else{
        cout<<"Not a prime";
    }
    return 0;
}