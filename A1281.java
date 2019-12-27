import java.lang.*;
import java.util.*;
public class A12281 {

	static String swap(String str, int i, int j)
    {
        char ch[] = str.toCharArray();
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        return new String(ch);
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
			if (s1.compareTo(s2)<0) {
				System.out.println(s1);
				continue;
			}
			boolean flag=false;
			for(int i=0;i<s1.length();i++) {
				if (s1.charAt(i)>s11.charAt(i)) {
					for(int j=s1.length()-1;j>i;j--) {
						//s1=swap(s1,i,j);
						//System.out.println("s1 "+s1);
						if (s1.charAt(j)==s11.charAt(i)) {
							s1=swap(s1,i,j);
							flag=true;
							break;
						}
					}
				}
				if (flag) {
					break;
				}
			}
			if (flag==false) {
				System.out.println("---");

			}
			else
			{
				if (s1.compareTo(s2)<0) {
					System.out.println(s1);
				}
				else
				{
					System.out.println("---");
				}
			}

		}

	}

}
