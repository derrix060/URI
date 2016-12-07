#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int q, e;
    while(cin >> q >> e)
    {
        vector<int> vetor;
        vector<int>::iterator it;
        int x;
        while(e--)
        {
            cin >> x;
            vetor.push_back(x);
        }
        while(q--)
        {
            cin >> x;
 
            it = find(vetor.begin(),vetor.end(),x);
 
            if(it != vetor.end() )
                cout << 0 << endl;
            else
                cout << 1 << endl;
            vetor.push_back(x);
        }
    }
    return 0;
}
