#include <iostream>
using namespace std;

int main (){
    int n1=0, n2=0, mult=0;

    cout << "inserire il primo numero:";
    cin >> n1;
    cout << "inserire il secondo numero:";
    cin >> n2;
    if(n1%n2==0){
        mult= n1/n2;
        cout << "il primo numero inserito e' multiplo del secondo, basta moltiplicarlo per " << mult  
             << " volte: " << n1 << "-" << n2;
    }
    else
        cout << "il primo numero inserito non e' multiplo del secondo";
    
}