import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner (System.in);
		
		int nc = sc.nextInt();
		int n, k;
		int lastPos = 0;
		
		ArrayList<Integer> circulo;
		for(int i=0; i<nc;i++){
			n = sc.nextInt();
			k = sc.nextInt();
			
			circulo = new ArrayList<>();
			
			//alimenta circulo
			for (int j=0; j<n;j++)
				circulo.add(j+1);
			
			//começa
			lastPos = 0;
			while(circulo.size() > 1){
				for(int j=0; j<k-1;j++){
					lastPos = proximo(lastPos, circulo.size());
				}
				circulo.remove(lastPos);
			}
			
			System.out.printf("Case %d: %d\n", i+1, circulo.get(0));
			
		}
		
	}
	
	static int proximo(int atual, int tamanho){
		return (atual + 1) % (tamanho);
	}
}