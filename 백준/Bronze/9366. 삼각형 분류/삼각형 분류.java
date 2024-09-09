import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;


public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[3];

        for(int i=1; i<=n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            arr[0] = Integer.parseInt(st.nextToken());
            arr[1] = Integer.parseInt(st.nextToken());
            arr[2] = Integer.parseInt(st.nextToken());
            Arrays.sort(arr);
            System.out.print("Case #" + i + ": ");
            Solution(arr);
        }
    }

    public static void Solution(int []arr){
        if(arr[0]+arr[1] > arr[2]){
            if(arr[0] == arr[1] && arr[0] == arr[2])
                System.out.println("equilateral");
            else if(arr[0] == arr[1] || arr[1] == arr[2])
                System.out.println("isosceles");
            else
                System.out.println("scalene");
        }
        else{
            System.out.println("invalid!");
        }
    }
}