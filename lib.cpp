#include "lib.h"
bool NumeriPrimi(int n,int d){
    int rest=0;
    if (n>1){
        if (d<n){
            rest=n%d;
            if (rest != 0) {
                return NumeriPrimi(n, d + 1);
            }else{
                return false;
            }
        } else{
            return true;
        }
    } else if (n==2){
        return true;
    } else {
        return false;
    }
}
  
