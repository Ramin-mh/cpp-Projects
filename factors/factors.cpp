#include <iostream>
using namespace std;

int main(){
    int n, t{}, i{1};

    cout<<"Enter a number:";
    cin>>n;
    while((n >= i) && (t != i)){
        if(n%i == 0){
            t = n/i;
            cout<<t<<"*"<<i<<endl;
        }
        i++;
    }
    return 0;
}
