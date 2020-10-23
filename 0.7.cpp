#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout << "inserire un numero intero:";
    cin >> n;
    if(n%2==0)
        cout << "il numero inserito e' pari:" << n;
    else
        cout << "il numero inserito e' dispari:" << n;
    
}