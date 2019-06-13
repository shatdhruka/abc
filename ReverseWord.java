import java.util.Scanner;
import java.io.*;

class ReverseWord 
{
	public static void main (String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
	    String s[]=sc.nextLine().split("");
	    String a=" ";
	    for(int i=s.length-1; i>=0; --i)
	    a=s[i]+""+a;
      System.out.println(a.substring(0, a.length()-1));
	}
}
