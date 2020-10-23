#include <iostream>
using namespace std;
 int main(){
    
    int n1=0, n2=0;
        cout << "inserire primo numero intero:";
        cin >> n1;
        cout << "\ninserire secondo numero:";
        cin >> n2;
    if(n1<n2)
        cout << "\n" << n2 << " is larger";
    else if (n1>n2)
        cout << "\n" << n1 << " is larger";
    else
        cout << "these numbers are equal";
return 0;
 }