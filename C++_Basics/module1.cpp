#include<iostream>
using namespace std;
int main(void){
    int rem, sits, passagers;
    cin >> passagers;
    if(passagers < 50){
        rem = 50 - passagers;
        cout << rem;
    }    
    else{
        //! number of passengers in the last bus
        rem = passagers % 50;
        //! number of sits remaining
        sits = 50 - rem;
        cout << sits;
    }
}