#include <iostream>
#include <cmath>
using namespace std;
int decimalTobinary(int num){
    int ans =0;
    int pow=1;
    while (num > 0){
        int rem = num%2;
        num=num/2;
        ans += (rem*pow);
        pow=pow*10;
    }
return ans;
}
int binaryTodecimal(int num){
    int ans =0;
        int power=0;
        while (num > 0){
            int rem = num%10;
            num=num/10;
            ans += rem*pow(2,power);
            power++;
        }
    return ans;

}
int main(){
    int decNum=12;
    int binary = 100;
    cout<<"decimal to binary: "<<decimalTobinary(decNum)<<endl;
    cout<<"binary to decimal: "<<binaryTodecimal(binary);
    return 0;
}