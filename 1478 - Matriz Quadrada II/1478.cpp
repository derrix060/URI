#include <iostream>
#include <cstdio>
using namespace std;
int main() {
int n;
cin >> n;
if (n!= 0)
do
{
int matriz [n][n];
for (int i=0; i<n;i++)
{
for (int j=0; j<i;j++)
{
matriz[i][j] = i-j+1;
}
for (int j=i; j<n;j++)
{
matriz[i][j] = j-i+1;
}
}
for (int i=0; i<n;i++)
{
for (int k=0; k<n-1;k++)
{
printf("%3d ", matriz[i][k]);
}
printf("%3d\n", matriz[i][n-1]);
}
cin >> n;
if (n != 0)
cout << endl;
}while (n!= 0);
cout << endl;
return 0;
}