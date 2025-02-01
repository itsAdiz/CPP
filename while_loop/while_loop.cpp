/*
Problem Statement:

Write a C++ program that uses a while loop to print the numbers from 0 to 5, inclusive. 
The program should initialize a variable `i` to 0 and increment it by 1 in each iteration of the loop, 
printing the value of `i` in each iteration until `i` is greater than 5.
*/



#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while(i <= 5){
        cout << i << endl;
        i++;
    }
    return 0;
}