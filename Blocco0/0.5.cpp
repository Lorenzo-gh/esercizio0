#include <iostream>
using namespace std;

int main(){
    int n1=0, n2=0, n3=0;
    cout << "inserire il primo numero:";
    cin >> n1;
    cout << "inserire il secondo numero:";
    cin >> n2;
    cout << "inserire il terzo numero:";
    cin >> n3;
        if((n1<n2)&&(n1<n3))
                cout << n1 << " e' il piu' piccolo\n";
        if((n1>n2)&&(n1>n3))
                cout << n1 << " e' il piu' grande\n";
        if((n2<n1)&&(n2<n3))
                cout << n2 << " e' il piu' piccolo\n";
        if((n2>n1)&&(n2>n3))
                cout << n2 << " e' il piu' grande\n"; 
        if((n3<n1)&&(n3<n2))
                cout << n3 << " e' il piu' piccolo\n";
        if((n3>n1)&&(n3>n2))
                cout << n3 << " e' il piu' grande\n";
        if((n1==n2)&&(n1==n3))
            cout << "i numeri inseriti sono uguali\n";
    cout << "la somma e'=" << n1+n2+n3 
         << "\nla media e'=" << (n1+n2+n3)/3 
         << "\nil prodotto e'=" << n1*n2*n3 ;

}