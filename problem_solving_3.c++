#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "enter number : ";
    cin >> n;

    while (n--){
        string s;
        cout << "enter number : ";
        cin >> s;

        if(s=="abc" || s=="acb" || s=="bac" || s=="bca" || s=="cab" || s=="cba"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
    }




}