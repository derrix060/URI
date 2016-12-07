#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
 
int main() {
    long a, b;
    long double c;
    long long soma;
    cin >> a >> b;
     
    c = (float) (b-a +1)/2;
     
    soma = (a+b)*c;
     
    cout << soma << endl;
    return 0;
}
