#include <iostream>
using namespace std;
int main(){
    int num =1;
    //triangle 
    for(int i=0;i<6;i++){
        for(int j=6;j>i;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    //pyramid
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i;j++){
            cout<<" ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";  // Print star
        }
        cout<<endl;
    }
    //reverse triangle
    for(int i=0;i<6;i++){
        for(int j=i+1;j>0;j--){
            cout<<(j);
        }
        cout<<"\n";
    }
    //reverse triangle character
    for(int i=0;i<6;i++){
        for(char ch = 'A' + i; ch >= 'A'; ch--){
            cout<<(ch);
        }
        cout<<"\n";
    }
    //inverted triangle pattern
    for(int i=0;i<5;i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0;k<5-i;k++){
            cout<<(i+1);
        }
        cout<<"\n";
    }
    
}