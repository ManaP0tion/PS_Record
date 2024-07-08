import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i = 0; i<T; i++){
            int n = sc.nextInt();
            int m = sc.nextInt();
            int ans = 1;

            for(int j=0; j<n; j++) {            // 조합 공식 사용 n<=m 이라는 조건이 있기 때문에 m*(m-1) ... (n+1)까지 구하게 된다. 
                ans = ans * (m - j) / (j + 1);
            }

            System.out.println(ans);
        }
    }

}