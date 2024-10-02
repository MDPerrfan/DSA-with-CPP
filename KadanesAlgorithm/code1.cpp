#include <iostream>
using namespace std;

int main(){
    int arr[]={1,5,3,-4,6};
    int n = 5;
    int maxSum1 = INT_MIN;
    //Brute Force approach to find maximum subarray sum 
    for(int st=0;st<n;st++){
        int currSum =0;
        for(int end =st;end<n;end++){
            currSum+=arr[end];
            maxSum1 = max(currSum,maxSum1);
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"Max subarray sum:"<<maxSum1<<endl;
    //Kadane's Algorithm
    int currSum=0;
    int maxSum2=INT_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxSum2=max(currSum,maxSum2);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"Max subarray sum:"<<maxSum2;
    return 0;
}