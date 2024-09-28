#include <iostream>
using namespace std;
int main()
{
    char value;
    cout<<"Enter the character:\n";
    cin>>value;
    if(value>='a' && value <='z'){
        cout<<"Lower case\n";
    }
    else if(value>='A'&&value <='Z'){
        cout<< "Upper Case";
    }
    else{
        cout<<"Input a character\n";
    }
    return 0;
}

