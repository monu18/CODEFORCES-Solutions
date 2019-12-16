import java.util.*;
import java.lang.*;
public class A4{
	
	public static void main(String args[]) throws Exception
	{
		Scanner sc=new Scanner(System.in);
		int w=sc.nextInt();
		if(w<4){
			System.out.println("NO");
		}
		else{
			if(w%2==0){
				System.out.println("YES");
			}
			else{
				System.out.println("NO");
			}
		}
		
		
	}
	
}