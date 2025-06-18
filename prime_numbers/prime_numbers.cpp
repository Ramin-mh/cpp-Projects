#include <iostream>
using namespace std;

void reset(int &a, int &b);

int main(){
    int n;
    cout<<"How many prime nos:";
    cin>>n;
    int prime[n]{2};
    int i = 3;
    int divCheck;
    while (i != 0)
    {
        for (int j = 0; j<n ; j++){
            if (prime[n-1] == 0){
                divCheck = i%prime[j];
                if(divCheck == 0){
                    reset(j,i);//to reset j and update i;
                }
                else if ((divCheck != 0)&&(prime[j+1] == 0)){
                    prime[j+1] = i;
                    reset(j,i);//to reset j and update i;
                }
            }
            else{
                for (int elements:prime){
                    cout <<elements<<", ";
                }
                exit(0);
            }
                
        }
    }
    return 0;
}

void reset(int &a, int &b){
    a = -1;//j is put -1 because of the for loop updating j by 1;
    b++;
}