#include <iostream>
using namespace std;

//a number is prime or not
int isPrime(int num ){

    if(num<1){
        cout<<"Enter a number greater than 1";
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {//The loop goes up to num / 2 because any divisor larger than num / 2 will only result in a quotient smaller than 2, which is not useful.
        if (num % i == 0)  //The loop starts from i = 2 because 1 is not a valid divisor to check (every number is divisible by 1).
            return false;
    }
    return true;
}

//Fibonacci

int fibo(int n){
    int a=0,b=1,nexterm;
    cout << "Fibonacci sequence: " << a << " " << b << " ";
    for(int i =2;i<n;i++){
        nexterm=a+b;
        cout<<nexterm<<" ";
        a=b;
        b=nexterm;
    }
    return 0;
}
int main(){
    int n=9;
    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    fibo(n);
    return 0;
}