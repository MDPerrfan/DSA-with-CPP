#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>arr,int st,int end){
    int idx = st-1;
    for(int j=st;j<end;j++){

        if(arr[j]<=arr[end]){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}
void quickSort(vector<int>arr,int st,int end){
  
    if(st<end){
        int pivotIdx=partition(arr,st,end);

        quickSort(arr,st,pivotIdx-1);
        quickSort(arr,pivotIdx+1,end);
    }

}
int main(){
    vector<int>arr={22,11,4,2,56,4,9};
    quickSort(arr,0,arr.size()-1);
    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}