import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, k;
        n = sc.nextInt();
        k = sc.nextInt();
        int []arr = new int[11];
        for(int i = 0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int ans = 0;
        for(int i = n-1; i>=0; i--){
            ans += k / arr[i];
            k = k%arr[i];
        }
        System.out.println(ans);

    }
}
