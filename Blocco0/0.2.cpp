#include <iostream>
using namespace std;

int main(){
    int n1=0, n2=0;
    cout << "inserire il primo numero:";
    cin >> n1;
    cout << "inserire il secondo numero:";
    cin >> n2;
    cout << "la somma e':" << n1+n2 << "\n" 
         << "la divisione e':" << n1-n2 << "\n" 
         << "la moltiplicazione e':" << n1*n2 << "\n" 
         << "la divisione e':" << n1/n2 << "\n" 
         << "il resto e':" << n1%n2;
    return 0;
}