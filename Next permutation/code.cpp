#include<iostream>
#include <vector>
void nextPermutation(vector<int>& A) {
    int pivot =-1;
    int n = A.size();

    //find pivot
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot==-1){
        reverse(A.begin(),A.end());
        return;
    }
    //swap pivot with next larger element
    for(int i = n-1;i>pivot;i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }
        
    int i = pivot+1,j=n-1;
    while(i<=j){
        swap(A[i++],A[j--]);
    }
}