#include <iostream>
using namespace std;

//calculate nCr binominal coefficient for n & r
int factorial(int a){
    long fact=1.0;
    while(a>0){
        fact*=a;
        a--;
    }
    return fact;
}
int nCr(int n,int r){
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

int main(){
    int n=6;
    int r=2;

    cout<<"Bionomina:"<<nCr(n,r);
    return 0;
}