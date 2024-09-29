#include <iostream>
using namespace std;
int main(){
    int a=4,b=8;
    cout<<(a&b)<<endl;//bitwise and
    cout<<(a|b)<<endl;//bitwise or
    cout<<(a^b)<<endl;//bitwise xor
    cout<<(4<<1)<<endl;//bitwise left
    cout<<(10>>1)<<endl;

    //Figure out how to find if a number is power of 2 without any loop
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = n & (n - 1);
    cout << "n: " << n << endl;
    cout << "n - 1: " << (n - 1) << endl;
    cout << "n & (n - 1): " << result << endl;

    if (result == 0 && n > 0) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }
    //reverse an integer
    int num=345 ;
    int rev=0;
    while(num!=0){
        int lastDigit=num%10; // Extract the last digit
        rev=rev*10+lastDigit;// Shift and add the last digit
        num=num/10;// Remove the last digit from n
    }
    cout<<"Reverse :"<<rev<<endl;
    return 0;
}