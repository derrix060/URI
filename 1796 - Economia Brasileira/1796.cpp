#include <iostream>
using namespace std;
 
int main() {
     int q;
     int v;
     long soma0 = 0, soma1 = 0;
    cin >> q;
     
    for (int i=0; i<q; i++)
    {
        cin >> v;
        if (v == 0)
            soma0++;
        else
            soma1++;
    }
    if (soma0>soma1)
        cout << "Y" << endl;
    else
        cout << "N" << endl;
    return 0;
}
