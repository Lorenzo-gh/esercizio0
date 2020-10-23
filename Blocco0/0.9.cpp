#include <iostream>
using namespace std;

int main(){
    char n;
    cout << "CHAR    ASCII" << "\n";
    for(int i=48; i<=122; ++i)
    {
        if(i==58)
            i=65;
        if(i==91)
            i=97;
        n=i;
        cout << n << "\t" << i << "\n"; 
    }
    
}