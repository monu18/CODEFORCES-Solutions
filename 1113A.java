//mOzis_
import java.io.*;
import java.util.*;
public class 1113A{

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int v = sc.nextInt();
    if (v>=(n-1)) {
      System.out.println(n-1);
    }
    else
    {
      int ans;
      ans+=v;
      for (int i=2;i<n ;i++ ) {
        if (v<(n-1)) {
            ans+=i;
        }
      }
      System.out.println(ans);
    }
  }

}
