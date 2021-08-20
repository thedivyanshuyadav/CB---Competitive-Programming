#include <bits/stdc++.h>
using namespace std;

int fastExponentiation(int a, int b){
    if(b == 0)
        return 1;
    int sub = fastExponentiation(a, b/2);
    if(b&1)
        return a * sub * sub;
    return sub * sub;
}

int main(void){
    int a = 2;
    int b = 8;
    cout << fastExponentiation(a, b);
    return 0;
}
