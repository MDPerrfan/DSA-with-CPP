#include <iostream>
using namespace std;

//calculate the sum of the digits of a number
int sumOfDigits(int num){
    int digitSum =0;

    while(num>0){
        int reminder=num%10;
        num= num/10;
        digitSum+=reminder;
    }
    return digitSum;
}

int main(){

    int num =397;
    cout<<sumOfDigits(num);

    return 0;
}