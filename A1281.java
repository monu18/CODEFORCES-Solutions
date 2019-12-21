import java.lang.*;
import java.util.*;
public class A1281 {

	static String swap(String str, int i, int j) 
    { 
        char ch[] = str.toCharArray(); 
        char temp = ch[i]; 
        ch[i] = ch[j]; 
        ch[j] = temp; 
        return ch.toString(); 
    } 
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
			String s1=sc.next();
			String s2=sc.next();
			String s11=new String(s1);
			char temp[]=s11.toCharArray();
			Arrays.sort(temp);
			s11=new String(temp);
			boolean flag=false;
			for(int i=0;i<s1.length();i++) {
				if (s1.charAt(i)>s11.charAt(i)) {
					for(int j=i+1;j<s1.length();j++) {
						s1=swap(s1,i,j);
						if (s1.compareTo(s2)>0) {
							for (int j2 = 0; j2 < s1.length(); j2++) {
								System.out.print(s1.charAt(j2));
							}
							System.out.println(s1);
							flag=true;
							break;
						}
						s1=swap(s1,i,j);
					}
				}
				if (flag) {
					break;
				}
			}
			if (flag==false) {
				System.out.println("---");
				
			}
			
		}
		
	}

}
