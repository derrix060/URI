import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	static int xd, yd, xa, ya;
	
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner (System.in);
		
		while ((xd = sc.nextInt()) != 0){
			yd = sc.nextInt();
			xa = sc.nextInt();
			ya = sc.nextInt();
			
			if (xa == xd && ya == yd)
				System.out.println(0);
			else if (canGetLine() || canGetColumn() || canGetDiagonalPrincipal() ||canGetDiagonalSecundaria()) 
				System.out.println(1);
			else
				System.out.println(2);
		}
		
	}
	
	static boolean canGetLine(){
		return xd == xa;
	}
	
	static boolean canGetColumn(){
		return yd == ya;
	}
	
	static boolean canGetDiagonalPrincipal(){
		return Math.abs(xa-xd)==Math.abs(ya-yd);
	}
	
	static boolean canGetDiagonalSecundaria(){
		return Math.abs(xa-xd)==(Math.abs(ya-yd) * -1);
	}
	
	
}