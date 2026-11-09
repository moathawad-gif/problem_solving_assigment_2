#include <iostream>
using namespace std;


int main() {
   
    int t;
    cout<<"enter number : ";
    cin >> t;
        while (t--) {
            int n;
            cout<<"enter number : ";
            cin >> n;

         int first=n/10;
        int second=n%10;
            
            cout<<first+second<<endl;
            
            
            
    }
    
    return 0;
}