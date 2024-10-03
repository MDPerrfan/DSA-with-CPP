#include<iostream>
#include <vector>

using namespace std;

int main(){
    // Moore's voting algorithm for majority elements
    vector<int> arr = {1, 4, 2, 1, 1, 4};
    int freq = 0, ans = 0;
    for(int st=0;st<arr.size();st++){
        for(int end=st;end<arr.size();end++){
            for(int i=0;i<end;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
    }
    // Loop through the array
    for(int i = 0; i < arr.size(); i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq++;
        } else {
            freq--;
        }
    }

    // Output the majority element
    cout << "Majority element is: " << ans << endl;

    return 0;
}
