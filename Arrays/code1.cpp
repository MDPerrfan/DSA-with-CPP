#include <iostream>

using namespace std;

int main(){
    int marks[]={1,5,6,3,-5,20};
    int size =6;
    //smallest number in an array
    int smallest = INT16_MAX;
    for(int i=0;i<size;i++){
        if(marks[i]<smallest){
            smallest=marks[i];
        }
    }
    cout<<"Smallest:"<<smallest<<endl;
    //largest number in an array
    int largest = INT_MIN;
    for(int i=0;i<size;i++){
        if(marks[i]>largest){
            largest=marks[i];
        }
    }
    cout<<"Largest"<<largest<<endl;

    //Linear search
    int target = -50;
    for(int i=0;i<size;i++){
        if(marks[i]==target){
           return i;
        }
    }
    //REVERSE AN ARRAY
    int arr []={1,3,5,7,8,6};
    int start =0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}