#include <iostream>
#include <cstdio>
 
using namespace std;
//void clreol(void);
  
int main() {
      
    int a, contador;
     cin >> a;
    while (a != 0)
    {
        int matriz[a][a];
        contador = 0;
        for (int i = 0; i<((a/2)+0.5); i++)
        {
            for (int l=contador; l<(a-contador); l++)
            {
                for (int c=contador; c<(a-contador);c++)
                {
                    matriz [l][c] = contador +1;
                }
            }
            contador ++;
        }
        
        for (int i=0; i<a;i++)
		{
			for (int k=0; k<a-1;k++)
			{
				printf("%3d ", matriz[i][k]);
			}
		printf("%3d\n", matriz[i][a-1]);
		}
		cout << endl;
		
	     cin >> a;
    }
    
     
    return 0;
}