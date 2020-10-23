#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float r=0;
    cout << "inserire raggio:";
    cin >> r;
    cout << "il diametro e':" << r*2 
         << "\nla misura della circonferenza e':" << r*2*M_PI 
         << "\nl'area e':" << r*r*M_PI;
}