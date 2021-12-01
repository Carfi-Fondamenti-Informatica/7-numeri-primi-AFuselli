#include <iostream>
using namespace std;
#include "lib.h"

int main(){
    int a=0, b=2;
    cin >> a;
    bool ris= NumeriPrimi(a,b);
    if(ris){
        cout << "numero primo";
    } else{
        cout << "numero non primo";
    }
    return 0;
}
