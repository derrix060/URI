#include <iostream>
using namespace std;
  
int main() {
    int n, la, lb, sa, sb;
    int resto;
      
    cin >> n >> la >> lb >> sa >> sb;
      
    if ((n >= la && n <=lb) && (n >= sa && n <= sb )) //menor que o mínimo
        cout << "possivel"<<endl;
    else
        cout << "impossivel"<<endl;
    return 0;
}
