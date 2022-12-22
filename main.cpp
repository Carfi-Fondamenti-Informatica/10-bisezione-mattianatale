#include <iostream>
#include"math.h"
using namespace std;
float f(float y){

    float risultato = pow(y, 2)* cos(y)+1;
    return risultato;
}
    int main() {
        float a;
        float b;
        do {
            cout << "inserire estremi" << endl;
            cin >> a;
            cin >> b;

        } while (f(a) * f(b) >= 0);
        float x, error;
        do {
            x = (a + b) / 2;
            if (f(x) == 0) {
                cout << x;
                cout << f(x);
                return 0;
            } else {
                if (f(a) * f(b) < 0) {
                    b = x;
                } else {
                    a = x;
                }
            }
            error = abs((b-a)/2);
        }
         while (error>=1e-6);
        cout<<int(x*10000)/10000.0<<endl;
        return 0;
    }
