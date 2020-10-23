#include <iostream>
using namespace std;

int main(){
    cout << "1" << " " << "2" << " " << "3" << " " << "4" << endl;
    cout << "1 " << "2 " << "3 " << "4 " << endl;
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4 ";
    
    int n=0;
    cout << endl << "inserire numero:";
    cin >> n;    
    for(int i=1; i<=n; ++i)
       cout << i << " ";
   return 0;
}
