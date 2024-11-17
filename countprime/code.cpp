#include<iostream>
#include <vector>

    int countPrimes(int n) {
        //sieve of eratosthenes
        vector<bool> isPrime(n+1,true);
        int count=0;
        for(int i=2; i<n;i++){
            if(isPrime[i]){
                count++;
                for(int j=i*2;j<n;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        return count;
    }