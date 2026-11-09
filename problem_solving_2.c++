#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "enter number : ";
    cin >> x;
    
    while (x--){
        int a,b,c;
        cout << "enter the numbers : ";
        cin >> a >> b >> c;

        if(a==b+c || b==a+c || c==a+b){
            cout << "YES" << endl;  

        }else{
            cout << "NO" << endl;
        }

    }           



}