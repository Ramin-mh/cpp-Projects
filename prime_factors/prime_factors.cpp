#include <iostream>
using namespace std;

int main(){
    long long int n;
    cout<<"Enter a number:";
    cin>>n;
    long long int i = 2;
    if (n < 2)
        exit(0);
    jump:
    while(n%i == 0){
        cout<<i<<"x";
        n /= i;
        if (n == 1){
            cout <<"1";
            exit(0);
        }
    }
    i += 1;
    goto jump;  
}